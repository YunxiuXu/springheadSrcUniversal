/*
 *  Copyright (c) 2003-2006, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include "CRWalkingController.h"

#ifdef USE_HDRSTOP
#pragma hdrstop
#endif

namespace Spr{
IF_OBJECT_IMP(CRWalkingController, CRController);

/////////////遊脚制御の実験に使用している変数////
/////////////////////////////////////////////////

void CRWalkingController::Init(){

	CRController::Init();

	hibody = NULL;
	tfbody = NULL;
	for (int i=0; i<creature->NBodies(); ++i) {
		if (!hibody) {
			hibody = DCAST(CRHingeHumanBodyIf, creature->GetBody(i));
		}
        if (!tfbody) {
			tfbody = DCAST(CRTrunkFootHumanBodyIf, creature->GetBody(i));
		}
	}

	CreateUpperBody();
	AssignFoot();  
	AssignCenterObject(); 
	AssignHip();        
	AssignHead();    

	// ヒンジボディ追従用の剛体・関節
	PHSolidDesc descSolid;
	descSolid.dynamical = false;
	syncFootLeft  = phScene->CreateSolid(descSolid);
	syncFootRight = phScene->CreateSolid(descSolid);
	syncHip       = phScene->CreateSolid(descSolid);
	/*
	PHBallJointDesc descBall;
	{
		//descBall.origin = Quaternionf();
		// descBall.spring = 10000.0f;
		// descBall.damper =   100.0f;
		
		descBall.spring = Vec3d(1,1,1) *  1000.0f;
		descBall.damper = Vec3d(1,1,1) *   500.0f;
	}
	phScene->CreateJoint(hiFootLeft,  syncFootLeft,  descBall);
	phScene->CreateJoint(hiFootRight, syncFootRight, descBall);
	phScene->CreateJoint(hiHip,       syncHip,       descBall);
	*/
	PHSpringDesc descSpring;
	{
		descSpring.spring    = Vec3d(1,1,1) * 5000.0f;
		descSpring.damper    = Vec3d(1,1,1) *   10.0f;
		descSpring.springOri = 1000.0f;
		descSpring.damperOri =   50.0f;
	}
	phScene->CreateJoint(hiFootLeft,  syncFootLeft,  descSpring);
	phScene->CreateJoint(hiFootRight, syncFootRight, descSpring);
	phScene->CreateJoint(hiHip,       syncHip,       descSpring);

	///初期パラメータの設定/////
    paramVelocityX = 0.8; 
    paramHalfStrideX = 0.01;
	paramHalfStrideZ = 0.1;         
	footHeight = 0.13;                                  
    amplitude = 0.0;   

	footsize = 0.0619;
	////////////////////////////

	SetTimeParams();
	paramVelocityZ = CalcZParamV(paramHalfStrideZ,T0); //Z方向のパラメータの計算
    AssignInitialLandingSite();

	///大域変数の初期化/////
	et = 0.0;     
	TargetDirection = (tfChest->GetOrientation()).Rotation().y + pi/2; 
	CurrentDirection = (tfChest->GetOrientation()).Rotation().y + pi/2;
	LF = true;     
	RF = false;    
	DSterm = false; 
	completefall = false; 
	totalStep = 0;   
	katoki = 0;      
	gaitbegin = 30;  
	forcestep1 = 0;  
	flag = 0;       
	forcestep2 = 0;  
	flag2 = 0;      
	flag3 = 0;   

	nextSpeed = -1;
	breverse = false;
	bprestop = false;
	bstop = false;

	Xstand = tfChest->GetPose().Pos().X();
	Zstand = tfChest->GetPose().Pos().Z();

	CreateCRWCTimeLeft();
	CreateCRWCChangeAroundCenter();
	CreateCRWCLandingSite();
	CreateCRWCFootForce();
	CreateCRWCGeneForce();

	DSTR << "BasicCycle = " << T0 << std::endl;

	/// 依存する他のオブジェクトの取得方法（もし必要なら）．

	/// < Body >
	/*
	この方法は今となっては使えない．bodyが複数ある状況に対応したため．
	body = DCAST(CRHingeHumanBodyIf, creature->GetBody());
	*/

	/// < PHScene >
	/*
	phScene = DCAST(PHSceneIf, creature->GetScene());
	*/

	/// < InternalScene >
	/*
	internalScene = creature->GetInternalScene();
	*/

	/// < ほかのController > 
	/*
	for (int i=0; i<creature->NControllers(); i++) {
		if (!gazeCtrl) {
			gazeCtrl = DCAST(CRGazeControllerIf, creature->GetController(i))
		}
	}
	*/

	// < ほかのSensor >
	/*
	for (int i=0; i<creature->NSensors(); i++) {
		if (!opticalSensor) {
			opticalSensor = DCAST(CROpticalSensorIf, creature->GetSensor(i))
		}
	}
	*/
}

void CRWalkingController::ReInit(){

	///初期パラメータの設定/////
    paramVelocityX = 0.8; 
    paramHalfStrideX = 0.01;
	paramHalfStrideZ = 0.1;         
	footHeight = 0.13;                                  
    amplitude = 0.0;   

	footsize = 0.0619;
	////////////////////////////

	SetTimeParams();
	paramVelocityZ = CalcZParamV(paramHalfStrideZ,T0); //Z方向のパラメータの計算
    AssignInitialLandingSite();

	///大域変数の初期化/////
	et = 0.0;     
	TargetDirection = (tfChest->GetOrientation()).Rotation().y + pi/2; 
	CurrentDirection = (tfChest->GetOrientation()).Rotation().y + pi/2;
	LF = true;     
	RF = false;    
	DSterm = false; 
	completefall = false; 
	totalStep = 0;   
	katoki = 0;      
	gaitbegin = 30;  
	forcestep1 = 0;  
	flag = 0;       
	forcestep2 = 0;  
	flag2 = 0;      
	flag3 = 0;   

	nextSpeed = -1;
	breverse = false;
	bprestop = false;
	bstop = false;

	/*
	Xs = 0.0;//////////////////////////////////////////////////////////////////////
	Zs = 0.0;//////////////////////////////////////////////////////////////////////
	*/
	Xstand = tfChest->GetPose().Pos().X();
	Zstand = tfChest->GetPose().Pos().Z();

	DSTR << "BasicCycle = " << T0 << std::endl;
}
	
void CRWalkingController::Step(){
	totalStep = totalStep + 1;
	CRController::Step();

	PositionOfUpperBody = GetCenterOfBlocks(UpperBody);       //上体位置
	CenterVelocity = CalcCenterVelocity(UpperBody);           //上体速度
	
	if(totalStep < 40) {
		Stand();
		SetRotationAngle(0.0);
		Stop();
	}
	else if(completefall == false && bstop == true) {
		WCStop();
	}
	else if(totalStep > 40 && completefall == false) gait();
	else fallForce();

	SuperimposeHingeBody();
}

void CRWalkingController::CreateUpperBody(void){
	UpperBody.push_back(tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_WAIST));
	UpperBody.push_back(tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_CHEST));
	UpperBody.push_back(tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_HEAD));
}

void CRWalkingController::AssignFoot(void){
	tfFootLeft = tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_LEFT_FOOT);
	tfFootRight = tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_RIGHT_FOOT);
	hiFootLeft = hibody->GetSolid(CRHingeHumanBodyDesc::SO_LEFT_FOOT);
	hiFootRight = hibody->GetSolid(CRHingeHumanBodyDesc::SO_RIGHT_FOOT);
}

void CRWalkingController::AssignCenterObject(void){
	tfChest = tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_CHEST);
	hiChest = hibody->GetSolid(CRHingeHumanBodyDesc::SO_CHEST);
}

void CRWalkingController::AssignHip(void){
	tfHip = tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_WAIST);
	hiHip = hibody->GetSolid(CRHingeHumanBodyDesc::SO_WAIST);
}

void CRWalkingController::AssignHead(void){
	tfHead = tfbody->GetSolid(CRTrunkFootHumanBodyDesc::SO_HEAD);
	hiHead = hibody->GetSolid(CRHingeHumanBodyDesc::SO_HEAD);
}

void CRWalkingController::SetTimeParams(){
	T0 = CalcBasicCycle();          //歩行の基本周期の計算 
	timeleft = T0; 
	TimeStep = phScene->GetTimeStep();  
}

void CRWalkingController::AssignInitialLandingSite(){
	currentlandingsite = Vec3d(tfFootRight->GetFramePosition().x, 0.0, tfFootRight->GetFramePosition().z); 	//最初は右足が支持脚 
}

void CRWalkingController::CreateCRWCTimeLeft(){
	tl = new CRWCTimeLeft(TimeStep);   
	tl->Init();
	tl->SetParamT0(T0);
	tl->SetParamCycleRate(minCycleRate, maxDSRate);
	tl->SetParamMaxFootLength(MaxFootLength);
	tl->SetParamDoubleSupportLimitRate(DoubleSupportLimitRate);
	tl->SetParamLimitChange(LimitChange);
	tl->SetParamVelocityX(paramVelocityX);
	tl->SetParamVelocityZ(paramVelocityZ);
	tl->SetParamFootSize(footsize);
	tl->SetParamMaxFootSpeedY(2.5);
}

void CRWalkingController::CreateCRWCChangeAroundCenter(){
	cac = new CRWCChangeAroundCenter(UpperBody);
	cac->Init();
}

void CRWalkingController::CreateCRWCLandingSite(){
	ls = new CRWCLandingSite(currentlandingsite , LF);
	ls->Init();
	ls->SetParamLd(paramLdx, paramLdz);
    ls->SetParamT0(T0);
	ls->SetParamMaxStride(maxHalfStride);
	ls->SetParamTc(Tc);
	ls->SetParamTimeStep(TimeStep);
	ls->SetParamVelocityX(paramVelocityX);
	ls->SetParamVelocityZ(paramVelocityZ);
	ls->SetParamStrideX(paramHalfStrideX);
	ls->SetParamStrideZ(paramHalfStrideZ);
	ls->SetParamFootLength(FootLength);
	ls->SetParamMaxFootSpeeds(MaxFootSpeedFront,MaxFootSpeedSide,MaxFootSpeedBack);
	ls->SetParamMaxFootAccerelations(MaxFootAccelerationFront,MaxFootAccelerationSide,MaxFootAccelerationBack);
	ls->SetParamMaxFootLength(MaxFootLength);
	ls->SetParamMaxRoGround(MaxRoGround);
	ls->SetParamMaxRoLandingSite(MaxRoLandingSiteFront,MaxRoLandingSiteSide,MaxRoLandingSiteBack);
}

void CRWalkingController::CreateCRWCFootForce(){
	ff = new CRWCFootForce(TimeStep, phScene->GetGravity(),LF);    //scene->GetGravity()
    ff->Init();
    ff->SetFoots(tfFootLeft, tfFootRight);
	ff->SetParamT0(T0);
	ff->SetParamFootHeight(footHeight);
	ff->SetParamMaxFootLength(MaxFootLength);
	ff->SetParamMinFootLength(MinFootLength);
	ff->SetParamFootSize(footsize);
}

void CRWalkingController::CreateCRWCGeneForce(){
	gf = new CRWCGeneForce((-1) * phScene->GetGravity() * TotalMass(UpperBody) , TimeStep);  //scene->GetGravity()
    gf->Init();
	gf->SetCenterObject(tfChest);    //centerObjectの指定
	gf->SetParamAmplitude(amplitude);
	gf->SetParamheight(height);
	gf->SetParamT0(T0);
	gf->SetParamT0ds(paramLdx/paramVelocityX);
	gf->SetParamVX(paramVelocityX);
	gf->SetParamVZ(paramVelocityZ);
	gf->SetParamMaxFootLength(MaxFootLength);
}

void CRWalkingController::SetPos(Vec3f pos){
	Xstand = pos.x;
	Zstand = pos.z;
}

//ベクトルobjects内に含まれるソリッドを,一つの剛体と見た重心位置を返す
Vec3d CRWalkingController::GetCenterOfBlocks(std::vector<PHSolidIf*> objects){
	
	Vec3d CenterOfBlock = Vec3d(0,0,0);
	double TotalWeight = 0;

	for(int i = 0;i < (int)objects.size(); i++){
		CenterOfBlock = CenterOfBlock + objects[i]->GetCenterPosition() * objects[i]->GetMass();
		TotalWeight = TotalWeight + objects[i]->GetMass(); 
	}

	return CenterOfBlock / TotalWeight;
}


Vec3d CRWalkingController::CalcCenterVelocity(std::vector<PHSolidIf*> objs){

	Vec3d velocity = Vec3d(0,0,0);
	double TotalWeight = 0;

	for(int i = 0;i < (int)objs.size(); i++){
		velocity = velocity + objs[i]->GetVelocity() * objs[i]->GetMass();
		TotalWeight = TotalWeight + objs[i]->GetMass(); 
	}

	return velocity / TotalWeight;
}

double CRWalkingController::TotalMass(std::vector<PHSolidIf*> objects){

	double TotalMass = 0.0;

	for(int i = 0;i < (int)objects.size(); i++){
         TotalMass = TotalMass + objects[i]->GetMass();
	}

	return TotalMass;
}

//歩行パラメータから基本歩行周期を計算
double CRWalkingController::CalcBasicCycle(){
	double T;

    Tc = sqrt(height / abs(phScene->GetGravity().y));

	if((paramVelocityX - paramHalfStrideX / Tc) <= 0){
		DSTR << "inadequate parameter VelocityX,height,paramHalfStrideX" << std::endl;
		exit(0);
	}

	T = Tc * log((paramVelocityX + paramHalfStrideX/Tc) / (paramVelocityX - paramHalfStrideX/Tc));

    return T;
}

//Z方向のパラメータを決定する
double CRWalkingController::CalcZParamV(double hz, double restT){

	double Tc;
    double sinh;
	double cosh;
	double v;

    Tc = sqrt(height / abs(phScene->GetGravity().y));
    sinh = exp(restT / Tc) / 2 - exp(- restT / Tc) / 2;
	cosh = exp(restT / Tc) / 2 + exp(- restT / Tc) / 2;

    v = hz*sinh / (Tc*(1+cosh));

	return v;
}

//Z方向のパラメータを決定する
double CRWalkingController::CalcZParamH(double v, double restT){

	double Tc;
    double sinh;
	double cosh;
	double h;

    Tc = sqrt(height / abs(phScene->GetGravity().y));
    sinh = exp(restT / Tc) / 2 - exp(- restT / Tc) / 2;
	cosh = exp(restT / Tc) / 2 + exp(- restT / Tc) / 2;

    h = v*(1+cosh)*Tc / sinh;

	return h;
}

double CRWalkingController::CalcLocalX(double xb, double zb, double xt, double zt, double theta){

	double vari0;
	double vari1;
	double relativeX;

	if(abs(tan(theta)) > 10000000000.0) {
		vari0 = xt;
		vari1 = zb;
	}
	else if(abs(1/tan(theta)) > 10000000000.0) {
		vari0 = xb;
		vari1 = zt;
	}
	else {
		vari0 = ((zt - zb) + tan(theta)*xt + xb/tan(theta)) / (tan(theta) + 1/tan(theta));
		vari1 = ((xt - xb) + tan(theta)*zb + zt/tan(theta)) / (tan(theta) + 1/tan(theta));
	}

	if(abs(theta) < pi/2.0){
		if(vari0 < xt) relativeX = sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
		else relativeX = -sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
	} else if(abs(theta) > pi/2.0 && abs(theta) < 3.0*pi/2.0) {
		if(vari0 < xt) relativeX = -sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
		else relativeX = sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
	} else if(abs(theta) > 3.0/2.0*pi){
		if(vari0 < xt) relativeX = sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
		else relativeX = -sqrt((vari0-xt)*(vari0-xt) + (vari1-zt)*(vari1-zt));
    } else {
		if(theta > 0.0) {
			if(theta < pi) relativeX = zb - zt;
			else  relativeX = zt - zb;
		}
		else {
			if(theta > -pi) relativeX = zt - zb;
			else relativeX = zb - zt;
		}
	}

	return relativeX;
}

double CRWalkingController::CalcLocalZ(double xb, double zb, double xt, double zt, double theta){

	double vari0;
	double vari1;
	double relativeZ;

	if(abs(tan(theta)) > 10000000000.0) {
		vari0 = xt;
		vari1 = zb;
	}
	else if(abs(1/tan(theta)) > 10000000000.0) {
		vari0 = xb;
		vari1 = zt;
	}
	else {
		vari0 = ((zt - zb) + tan(theta)*xt + xb/tan(theta)) / (tan(theta) + 1/tan(theta));
		vari1 = ((xt - xb) + tan(theta)*zb + zt/tan(theta)) / (tan(theta) + 1/tan(theta));
	}

	if(abs(theta) < pi/2.0){
		if(vari1 > zb) relativeZ = sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
		else relativeZ = -sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
	} else if(abs(theta) > pi/2.0 && abs(theta) < 3.0*pi/2.0) {
		if(vari1 > zb) relativeZ = -sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
		else relativeZ = sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
	} else if(abs(theta) > 3.0/2.0*pi){
		if(vari1 > zb) relativeZ = sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
		else relativeZ = -sqrt((vari0-xb)*(vari0-xb) + (vari1-zb)*(vari1-zb));
	} else {
		if(theta > 0.0) {
			if(theta < pi) relativeZ = xt - xb;
			else relativeZ = xb - xt;
		}
		else {
			if(theta > -pi) relativeZ = xb - xt;
			else relativeZ = xt - xb;
		}
	}

	return relativeZ;
}

double CRWalkingController::CalcLocalVX(double vx, double vz, double theta){

	double LocalVX;

	LocalVX = cos(theta)*vx - sin(theta)*vz;

	return LocalVX;
}

double CRWalkingController::CalcLocalVZ(double vx, double vz, double theta){

	double LocalVZ;

	LocalVZ = cos(theta)*vz + sin(theta)*vx;

	return LocalVZ;
}

void CRWalkingController::CalcCurrentDirection(){

	//double angle;

	/*
	if(abs(CenterVelocity.z) > 0.00001 && abs(CenterVelocity.x) > 0.00001) {
		if(CenterVelocity.x > 0.0 && CurrentDirection >= -1.49*pi && CurrentDirection <= 1.49*pi) angle = atan(-CenterVelocity.z / CenterVelocity.x);
		else if(CenterVelocity.x > 0.0 && CurrentDirection > 1.49*pi) angle = atan(-CenterVelocity.z / CenterVelocity.x) + 2*pi;
		else if(CenterVelocity.x > 0.0 && CurrentDirection < -1.49*pi) angle = atan(-CenterVelocity.z / CenterVelocity.x) - 2*pi;
		else if(CurrentDirection > 0.0) angle = atan(-CenterVelocity.z / CenterVelocity.x) + pi;
		else angle = atan(-CenterVelocity.z / CenterVelocity.x) - pi;
	} else if(abs(CenterVelocity.z) > 0.00001 && abs(CenterVelocity.x) <= 0.00001){
		angle = (-CenterVelocity.z / abs(CenterVelocity.z))*pi/2;
	} else angle = 0.0;*/


	//angle = TargetDirection;

	//if(angle > 2.0*pi) angle = angle - 2.0*pi;
	//if(angle < -2.0*pi) angle = angle + 2.0*pi;

	//DSTR << "CurrentDirection = " << CurrentDirection << std::endl;
	//CurrentDirection = angle;
	CurrentDirection = TargetDirection;
}

void CRWalkingController::CalcTargetAngle(){

	//double paramAngle = 0.3;
	//double CurrentRot;

	//CurrentRot = (tfChest->GetOrientation()).Rotation().y;
	/*
	if(flag == 1) {
		flag = 0;
		TargetDirection = TargetDirection + 0.25;
		if(TargetDirection > 2.0*pi) TargetDirection = TargetDirection - 2.0*pi;
	    if(TargetDirection < -2.0*pi) TargetDirection = TargetDirection + 2.0*pi;
		DSTR << "TargetDirection = " << TargetDirection << std::endl;
	} 
	if(flag2 == 1) {
		flag2 = 0;
		TargetDirection = TargetDirection - 0.25;
		if(TargetDirection > 2.0*pi) TargetDirection = TargetDirection - 2.0*pi;
	    if(TargetDirection < -2.0*pi) TargetDirection = TargetDirection + 2.0*pi;
		DSTR << "TargetDirection = " << TargetDirection << std::endl;
	} 
	*/
	
	//if(totalStep < 250) TargetDirection = 0.0;
	/*if(totalStep >= 250 && totalStep < 450) TargetDirection = -pi/12.0;
	if(totalStep >= 450 && totalStep < 650) TargetDirection = -pi/6.0;
	if(totalStep >= 650 && totalStep < 850) TargetDirection = -pi/4.0;
	if(totalStep >= 850 && totalStep < 1050) TargetDirection = -5*pi/12.0;
	if(totalStep >= 1050 && totalStep < 1250) TargetDirection = -pi/2.0;
	if(totalStep >= 1250 && totalStep < 1450) TargetDirection = -7*pi/12.0; 
	if(totalStep >= 1450 && totalStep < 1650) TargetDirection = -8*pi/12.0; 
	if(totalStep >= 1650 && totalStep < 1850) TargetDirection = -9*pi/12.0; 
	if(totalStep >= 1850 && totalStep < 2050) TargetDirection = -10*pi/12.0; 
	if(totalStep >= 2050 && totalStep < 2250) TargetDirection = -11*pi/12.0; 
	if(totalStep >= 2250 && totalStep < 2450) TargetDirection = -pi; 
	if(totalStep >= 2450 && totalStep < 2650) TargetDirection = -13*pi/12.0; 
	if(totalStep >= 2650 && totalStep < 2850) TargetDirection = -14*pi/12.0; 
	if(totalStep >= 2850 && totalStep < 3050) TargetDirection = -15*pi/12.0; 
	if(totalStep >= 3050 && totalStep < 3250) TargetDirection = -16*pi/12.0; 
	if(totalStep >= 3250 && totalStep < 3450) TargetDirection = -17*pi/12.0; 
	if(totalStep >= 3450 && totalStep < 3650) TargetDirection = -18.0*pi/12.0; 
	if(totalStep >= 3650 && totalStep < 3850) TargetDirection = -19*pi/12.0; 
	if(totalStep >= 3850 && totalStep < 4050) TargetDirection = -20*pi/12.0; 
	if(totalStep >= 4050 && totalStep < 4250) TargetDirection = -21*pi/12.0; 
	if(totalStep >= 4250 && totalStep < 4450) TargetDirection = -22*pi/12.0; 
	if(totalStep >= 4450 && totalStep < 4650) TargetDirection = -23.0*pi/12.0; 
	if(totalStep >= 4650 && totalStep < 4850) TargetDirection = -24*pi/12.0; 
	if(totalStep >= 4850 && totalStep < 5050) TargetDirection = -25*pi/12.0; 
	if(totalStep >= 5050 && totalStep < 5250) TargetDirection = -26*pi/12.0; 
	if(totalStep >= 5250 && totalStep < 5450) TargetDirection = -27*pi/12.0; */
	//TargetDirection = CurrentRot + 0.1;
	//TargetDirection = 0.0;
	//TargetDirection = 0.0;
	//DSTR << "TargetDirection = " << TargetDirection << std::endl;
	//if(abs(TargetDirection - ((tfChest->GetOrientation()).Rotation()).y) > paramAngle)
	if(TargetDirection > 2.0*pi) TargetDirection = TargetDirection - 2.0*pi;
    if(TargetDirection < -2.0*pi) TargetDirection = TargetDirection + 2.0*pi;
}

//歩行中に速度を変える
void CRWalkingController::VelocityXChange(double vx){

	paramVelocityX = vx;
	T0 = CalcBasicCycle();
	paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);

	tl->SetParamT0(T0);
	tl->SetParamVelocityX(paramVelocityX);
	tl->SetParamVelocityZ(paramVelocityZ);

    ls->SetParamT0(T0);
	ls->SetParamVelocityX(paramVelocityX);
	ls->SetParamVelocityZ(paramVelocityZ);

	ff->SetParamT0(T0);

	gf->SetParamT0(T0);
	gf->SetParamT0ds(paramLdx/paramVelocityX);
	gf->SetParamVX(paramVelocityX);
	gf->SetParamVZ(paramVelocityZ);
}

//歩行中に歩幅を変える
void CRWalkingController::HalfStrideXChange(double sx){

	paramHalfStrideX = sx;
	T0 = CalcBasicCycle();
	paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);
                        
	tl->SetParamT0(T0);
	tl->SetParamVelocityZ(paramVelocityZ);

    ls->SetParamT0(T0);
	ls->SetParamVelocityZ(paramVelocityZ);
	ls->SetParamStrideX(paramHalfStrideX);

	ff->SetParamT0(T0);

	gf->SetParamT0(T0);
	gf->SetParamVZ(paramVelocityZ);
}
//歩行中に横方向の速度を変える
void CRWalkingController::VelocityZChange(double vz){

	paramVelocityZ = vz;
	paramHalfStrideZ = CalcZParamV(paramVelocityZ, T0);

	tl->SetParamVelocityZ(paramVelocityZ);
	ls->SetParamVelocityZ(paramVelocityZ);
	gf->SetParamVZ(paramVelocityZ);

	ls->SetParamStrideZ(paramHalfStrideZ);
}

//歩行中に重心の上下動を変える
void CRWalkingController::AmplitudeChange(double amp){
	amplitude = amp;
	gf->SetParamAmplitude(amplitude);
}

//上げる足の高さを変える
void CRWalkingController::FootHeightChange(double fh){
	footHeight = fh;
	ff->SetParamFootHeight(fh);
}

//現在の支持脚が維持できるか判定する
//条件は上体角度, 上体と脚の間の角度, 現在の支持脚の長さから決定する
bool CRWalkingController::CalcSustainable(void){

	Quaterniond qua;
	double MaxRoLandingSite;
	double LocalHipX;
	double LocalHipZ;
	double vari;
	Vec3d Bvec;        //上体の姿勢の単位ベクトル
	Vec3d Lvec;        //腰と着地点を結んだベクトル
	Vec3d dvec = Vec3d(0.0, -1.0 , 0.0);
	Vec3d RoGround;     //地面と上体の間の角度
	Vec3d RoLandingSite;//着地点と上体の間の角度

	LocalHipX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, tfHip->GetCenterPosition().x, tfHip->GetCenterPosition().z, CurrentDirection);
	LocalHipZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, tfHip->GetCenterPosition().x, tfHip->GetCenterPosition().z, CurrentDirection);

	Bvec = (tfHip->GetCenterPosition() - PositionOfUpperBody).unit();
	Lvec = Vec3d(LocalHipX, (-1)*tfHip->GetCenterPosition().y , LocalHipZ);

    qua.RotationArc(Bvec, dvec);
	RoGround = qua.Rotation();
	qua.RotationArc(Bvec, Lvec);
	RoLandingSite = qua.Rotation();

	vari = (1 - abs(atan(LocalHipZ/LocalHipX)) / (pi*2.0)) * (1 - abs(atan(LocalHipZ/LocalHipX)) / (pi*2.0));

	if(LocalHipX > 0.0) MaxRoLandingSite = (1-vari) * MaxRoLandingSiteSide + vari * MaxRoLandingSiteFront;
	else MaxRoLandingSite = (1-vari) * MaxRoLandingSiteSide + vari * MaxRoLandingSiteBack;

	//DSTR << "RoGround.norm()= " << RoGround.norm() << " RoLandingSite.norm() = " << RoLandingSite.norm() << " Lvec.norm() = "<< Lvec.norm() << std::endl;
	//DSTR << currentlandingsite << std::endl;
	//DSTR << nextlandingsite << std::endl;
	if(RoGround.norm() > MaxRoGround || RoLandingSite.norm() > MaxRoLandingSite || Lvec.norm() > MaxFootLength){
		DSTR << "Fall : Supportleg cannot sustain" << std::endl;
		return false;}
	else return true;
}


//身体的制約によって発生する力をオブジェクトに与える
void CRWalkingController::ConstraintForce(void){
 
	double kp = 3.0;
	double kv = 1.0;
	double param0 = 50.0;
	//double param1 = 3.0;
	//double MaxConstraintVelocity = 25.0;
	double LengthLeft;
	double LengthRight;
	double CrossVelocityLeft;
	double CrossVelocityRight;
	double HousenVelocityFootLeft;
    double HousenVelocityFootRight;
	double HousenVelocityBodyLeft;
	double HousenVelocityBodyRight;
	Vec3d ForceLeft = Vec3d(0.0,0.0,0.0);
	Vec3d ForceRight = Vec3d(0.0,0.0,0.0);
	Vec3d HipToLeftFoot;
	Vec3d HipToRightFoot;
	Vec3d Bvec;        //上体の姿勢の単位ベクトル
	Vec3d Leftvec;        //腰と左脚を結んだベクトル
	Vec3d Rightvec;       //腰と右脚を結んだベクトル
	Vec3d dvec = Vec3d(0.0, -1.0 , 0.0);
	Vec3d RoLeft;         //左足と上体の間の角度
	Vec3d RoRight;         //右足と上体の間の角度
	Vec3d HousenFootLeft = Vec3d(0.0,0.0,0.0);
	Vec3d HousenBodyLeft = Vec3d(0.0,0.0,0.0);
	Vec3d HousenFootRight = Vec3d(0.0,0.0,0.0);
	Vec3d HousenBodyRight = Vec3d(0.0,0.0,0.0);
	Vec3d ForceFootLeft;
	Vec3d ForceBodyLeft;
	Vec3d ForceFootRight;
	Vec3d ForceBodyRight;
	Vec3d VelocityHipFootLeft = tfFootLeft->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipFootRight = tfFootRight->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipBody = tfHead->GetVelocity() - tfHip->GetVelocity();
	Quaterniond qua;
	
	Bvec = tfHip->GetCenterPosition() - tfHead->GetCenterPosition();
	Leftvec = Vec3d(tfFootLeft->GetCenterPosition().x - tfHip->GetCenterPosition().x , - tfHip->GetCenterPosition().y , tfFootLeft->GetCenterPosition().z - tfHip->GetCenterPosition().z);
    Rightvec = Vec3d(tfFootRight->GetCenterPosition().x - tfHip->GetCenterPosition().x , - tfHip->GetCenterPosition().y , tfFootRight->GetCenterPosition().z - tfHip->GetCenterPosition().z);

	qua.RotationArc(Bvec, Leftvec);
	RoLeft = qua.Rotation();
	qua.RotationArc(Bvec, Rightvec);
	RoRight = qua.Rotation();

	//左足の法線方向を計算
	if(Bvec.dot(Leftvec) != 0.0){
		HousenFootLeft = (Leftvec - (Leftvec.dot(Leftvec)/Bvec.dot(Leftvec)) * Bvec).unit();
		if(HousenFootLeft.dot(Bvec) < 0.0) HousenFootLeft = -HousenFootLeft;
		HousenBodyLeft = (Bvec - (Bvec.dot(Bvec)/Bvec.dot(Leftvec)) * Leftvec).unit();
        if(HousenBodyLeft.dot(Leftvec) > 0.0) HousenBodyLeft = -HousenBodyLeft;
	}
	
	//右足の法線方向を計算
	if(Bvec.dot(Rightvec) != 0.0){
		HousenFootRight = (Rightvec - (Rightvec.dot(Rightvec)/Bvec.dot(Rightvec)) * Bvec).unit();
		if(HousenFootRight.dot(Bvec) < 0.0) HousenFootRight = -HousenFootRight;
		HousenBodyRight = (Bvec - (Bvec.dot(Bvec)/Bvec.dot(Rightvec)) * Rightvec).unit();
        if(HousenBodyRight.dot(Rightvec) > 0.0) HousenBodyRight = -HousenBodyRight;
	}

	//腰に対する脚の速さの法線方向の成分
	HousenVelocityFootLeft = VelocityHipFootLeft.dot(HousenFootLeft);
    HousenVelocityFootRight = VelocityHipFootRight.dot(HousenFootRight);
	HousenVelocityBodyLeft = VelocityHipBody.dot(HousenBodyLeft);
    HousenVelocityBodyRight = VelocityHipBody.dot(HousenBodyRight);

	/*
	if(HousenVelocityFootLeft > MaxConstraintVelocity){
		ForceFootLeft = -(param1*HousenVelocityFootLeft) * HousenFootLeft;
		ForceBodyLeft = -(param1*HousenVelocityFootLeft) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;

        solid3->AddForce(ForceBodyLeft);
		solid1->AddForce(-ForceBodyLeft);
		solid1->AddForce(-ForceFootLeft);
		tfFootLeft->AddForce(ForceFootLeft);
	}

	
	if(HousenVelocityFootRight > MaxConstraintVelocity){
		ForceFootRight = -(param1*HousenVelocityFootRight) * HousenFootRight;
		ForceBodyRight = -(param1*HousenVelocityFootRight) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;

		solid3->AddForce(ForceBodyRight);
		solid1->AddForce(-ForceBodyRight);
		solid1->AddForce(-ForceFootRight);
		tfFootRight->AddForce(ForceFootRight);
	}

	
	if(HousenVelocityBodyLeft > MaxConstraintVelocity){
		ForceFootLeft = -(param1*HousenVelocityBodyLeft) * HousenFootLeft;
        ForceBodyLeft = -(param1*HousenVelocityBodyLeft) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;

		solid3->AddForce(ForceBodyLeft);
		solid1->AddForce(-ForceBodyLeft);
		solid1->AddForce(-ForceFootLeft);
		tfFootLeft->AddForce(ForceFootLeft);
	}

	if(HousenVelocityBodyRight > MaxConstraintVelocity){
		ForceFootRight = -(param1*HousenVelocityBodyRight) * HousenFootLeft;
        ForceBodyRight = -(param1*HousenVelocityBodyRight) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;

		solid3->AddForce(ForceBodyRight);
		solid1->AddForce(-ForceBodyRight);
		solid1->AddForce(-ForceFootRight);
		tfFootRight->AddForce(ForceFootRight);
	}*/

	LengthLeft = (tfHip->GetCenterPosition() - tfFootLeft->GetCenterPosition()).norm();
	LengthRight = (tfHip->GetCenterPosition() - tfFootRight->GetCenterPosition()).norm();
	HipToLeftFoot = tfFootLeft->GetCenterPosition() - tfHip->GetCenterPosition();
	HipToRightFoot = tfFootRight->GetCenterPosition() - tfHip->GetCenterPosition();

	//脚の長さがMaxFootLengthを超えた場合に腰にかける力
	if(LengthLeft > MaxFootLength) {
        CrossVelocityLeft = VelocityHipFootLeft.dot(HipToLeftFoot);
		ForceLeft = -kp*((MaxFootLength/LengthLeft)*HipToLeftFoot - HipToLeftFoot) - kv*((-CrossVelocityLeft/LengthLeft)*HipToLeftFoot.unit());
		tfHip->AddForce(ForceLeft);
	}

	//脚の長さがMaxFootLengthを超えた場合に腰にかける力
	if(LengthRight > MaxFootLength) {
        CrossVelocityRight = VelocityHipFootRight.dot(HipToRightFoot);
		ForceRight = -kp*((MaxFootLength/LengthRight)*HipToRightFoot - HipToRightFoot) - kv*((-CrossVelocityRight/LengthRight)*HipToRightFoot.unit());
		tfHip->AddForce(ForceRight);
	}

	//脚の長さがMinFootLengthを下回った場合に腰にかける力
	if(LengthLeft < MinFootLength) {
        CrossVelocityLeft = VelocityHipFootLeft.dot(HipToLeftFoot);
		ForceLeft = -kp*((MinFootLength/LengthLeft)*HipToLeftFoot - HipToLeftFoot) + kv*((CrossVelocityLeft/LengthLeft)*HipToLeftFoot.unit());
		tfHip->AddForce(ForceLeft);
	}

	//脚の長さがMinFootLengthを下回った場合に腰にかける力
	if(LengthRight < MinFootLength) {
        CrossVelocityRight = VelocityHipFootRight.dot(HipToRightFoot);
		ForceRight = -kp*((MinFootLength/LengthRight)*HipToRightFoot - HipToRightFoot) + kv*((CrossVelocityRight/LengthRight)*HipToRightFoot.unit());
		tfHip->AddForce(ForceRight);
	}

    //脚と上体の角度がMaxRoConstraintを超えた場合に脚と腰にかける力
	if(RoLeft.norm() > MaxRoConstraint) {
		ForceFootLeft = (param0*RoLeft.norm()-MaxRoConstraint) * HousenFootLeft;
		ForceBodyLeft = (param0*RoLeft.norm()-MaxRoConstraint) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;

		tfHead->AddForce(ForceBodyLeft);
		tfHip->AddForce(-ForceBodyLeft);
		tfHip->AddForce(-ForceFootLeft);
		tfFootLeft->AddForce(ForceFootLeft);
	}

	//脚と上体の角度がMaxRoConstraintを超えた場合に脚と腰にかける力
	if(RoRight.norm() > MaxRoConstraint) {
		ForceFootRight = (param0*RoRight.norm()-MaxRoConstraint) * HousenFootRight;
		ForceBodyRight = (param0*RoRight.norm()-MaxRoConstraint) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;
		
		tfHead->AddForce(ForceBodyRight);
	    tfHip->AddForce(-ForceBodyRight);
		tfHip->AddForce(-ForceFootRight);
		tfFootRight->AddForce(ForceFootRight);
	}
}

//歩行が継続可能か判定する
//次の着地点が不適切な場合, 腰の位置が一定値を下回った場合, 重心の加速度が一定値を超えた場合, 
//上体の角度がMaxRoGroundを超えた場合, 腰に対する頭の速度, 脚の速度が一定値を超えた場合
//歩行継続を不可能とする
void CRWalkingController::completeFall(){

	double param0 = 0.02;   //quit reason1に関わるパラメータ
	double param1 = 1.3;    //quit reason1に関わるパラメータ
	double param2 = 0.8;    //quit reason1に関わるパラメータ
	double param3 = -0.6;   //quit reason2に関わるパラメータ
	double param4 = -0.35;   //quit reason3に関わるパラメータ
	double param5 = 0.85*MinFootLength;    //これより腰の位置が落ちると歩行継続不可
	double param6 = 18.0;  //これより重心位置の加速度があると歩行継続不可
	double MaxCompleteFallVelocity = 100.0;  //これより腰に対する頭の速度と脚の速度があると歩行継続不可
	double LocalBodyX;
	double LocalBodyZ;
	double LocalNextLandingSiteX;
	double LocalNextLandingSiteZ;
	double LocalBodyVelocityX;
	double LocalBodyVelocityZ;
	Quaterniond qua;
	Vec3d Bvec;        //上体の姿勢の単位ベクトル
	Vec3d dvec = Vec3d(0.0, -1.0 , 0.0);
	Vec3d RoGround;     //地面と上体の間の角度
	Vec3d VelocityHipFootLeft = tfFootLeft->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipFootRight = tfFootRight->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipBody = tfHead->GetVelocity() - tfHip->GetVelocity();

	Bvec = (tfHip->GetCenterPosition() - PositionOfUpperBody).unit();
    qua.RotationArc(Bvec, dvec);
	RoGround = qua.Rotation();

	LocalBodyX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalBodyZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalNextLandingSiteX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
	LocalNextLandingSiteZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
	LocalBodyVelocityX = CalcLocalVX(CenterVelocity.x, CenterVelocity.z, CurrentDirection);
	LocalBodyVelocityZ = CalcLocalVZ(CenterVelocity.x, CenterVelocity.z, CurrentDirection);

	if(abs(timeleft) < param0 && LocalBodyVelocityX > param1*paramVelocityX && LocalNextLandingSiteX < LocalBodyX - param2) {completefall = true; 
	DSTR << "quit reason 1 " << std::endl;}
	else if(abs(timeleft) < param0 && LocalBodyVelocityX < -param1*paramVelocityX && LocalNextLandingSiteX > LocalBodyX - param3) {completefall = true;
	DSTR << "quit reason 2 " << std::endl;}
	else if(LF == true && abs(timeleft) < param0 && LocalBodyVelocityZ < 0.0 && LocalNextLandingSiteZ > LocalBodyZ - param4) {completefall = true;
    DSTR << "quit reason 3 " << std::endl;}
	else if(RF == true && abs(timeleft) < param0 && LocalBodyVelocityZ > 0.0 && LocalNextLandingSiteZ < LocalBodyZ + param4) {completefall = true;
    DSTR << "quit reason 4 " << std::endl;}
	else if(tfHip->GetCenterPosition().y < param5) {completefall = true;
	DSTR << "quit reason 5 " << std::endl;}
	else if((PreviousV-CenterVelocity).norm()/TimeStep > param6) {completefall = true;
	DSTR << "quit reason 6 " << std::endl;}
	else if(RoGround.norm() > MaxRoGround) {completefall = true;
	DSTR << "quit reason 7 " << std::endl;}
	else if(VelocityHipFootLeft.norm() > MaxCompleteFallVelocity || VelocityHipFootRight.norm() > MaxCompleteFallVelocity || VelocityHipBody.norm() > MaxCompleteFallVelocity) {completefall = true;
	DSTR << "quit reason 8 " << std::endl;
	//DSTR << VelocityHipFootLeft.norm() << " " << VelocityHipFootRight.norm() << " " << VelocityHipBody.norm() << std::endl;
	}
	else completefall = false;
	//DSTR << "hipPosition = " << solid1->GetCenterPosition().y << std::endl;
}

//歩行継続不可となった場合に体のパーツにかける力
void CRWalkingController::fallForce(){

	double kp = 7.0;
	double kv = 1.8;
	double param0 = 50.0;
	double param1 = 3.0;
	double LengthLeft;
	double LengthRight;
	//double CrossVelocityLeft;
	//double CrossVelocityRight;
	double HousenVelocityFootLeft;
    double HousenVelocityFootRight;
	double HousenVelocityBodyLeft;
	double HousenVelocityBodyRight;
	Vec3d ForceLeft = Vec3d(0.0,0.0,0.0);
	Vec3d ForceRight = Vec3d(0.0,0.0,0.0);
	Vec3d HipToLeftFoot;
	Vec3d HipToRightFoot;
	Vec3d VelocityHipLeft;
	Vec3d VelocityHipRight;
	Vec3d Bvec;        //上体の姿勢の単位ベクトル
	Vec3d Leftvec;        //腰と左脚を結んだベクトル
	Vec3d Rightvec;       //腰と右脚を結んだベクトル
	Vec3d dvec = Vec3d(0.0, -1.0 , 0.0);
	Vec3d RoLeft;         //左足と上体の間の角度
	Vec3d RoRight;         //右足と上体の間の角度
	Vec3d HousenFootLeft = Vec3d(0.0,0.0,0.0);
	Vec3d HousenBodyLeft = Vec3d(0.0,0.0,0.0);
	Vec3d HousenFootRight = Vec3d(0.0,0.0,0.0);
	Vec3d HousenBodyRight = Vec3d(0.0,0.0,0.0);
	Vec3d ForceFootLeft;
	Vec3d ForceBodyLeft;
	Vec3d ForceFootRight;
	Vec3d ForceBodyRight;
	Vec3d VelocityHipFootLeft = tfFootLeft->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipFootRight = tfFootRight->GetVelocity() - tfHip->GetVelocity();
	Vec3d VelocityHipBody = tfHead->GetVelocity() - tfHip->GetVelocity();
	Vec3d Pd;
	Quaterniond qua;


	
	Bvec = tfHip->GetCenterPosition() - tfHead->GetCenterPosition();
	Leftvec = Vec3d(tfFootLeft->GetCenterPosition().x - tfHip->GetCenterPosition().x , - tfHip->GetCenterPosition().y , tfFootLeft->GetCenterPosition().z - tfHip->GetCenterPosition().z);
    Rightvec = Vec3d(tfFootRight->GetCenterPosition().x - tfHip->GetCenterPosition().x , - tfHip->GetCenterPosition().y , tfFootRight->GetCenterPosition().z - tfHip->GetCenterPosition().z);

	qua.RotationArc(Bvec, Leftvec);
	RoLeft = qua.Rotation();
	qua.RotationArc(Bvec, Rightvec);
	RoRight = qua.Rotation();

	if(Bvec.dot(Leftvec) != 0.0){
		HousenFootLeft = (Leftvec - (Leftvec.dot(Leftvec)/Bvec.dot(Leftvec)) * Bvec).unit();
		if(HousenFootLeft.dot(Bvec) < 0.0) HousenFootLeft = -HousenFootLeft;
		HousenBodyLeft = (Bvec - (Bvec.dot(Bvec)/Bvec.dot(Leftvec)) * Leftvec).unit();
        if(HousenBodyLeft.dot(Leftvec) > 0.0) HousenBodyLeft = -HousenBodyLeft;
	}
	
	if(Bvec.dot(Rightvec) != 0.0){
		HousenFootRight = (Rightvec - (Rightvec.dot(Rightvec)/Bvec.dot(Rightvec)) * Bvec).unit();
		if(HousenFootRight.dot(Bvec) < 0.0) HousenFootRight = -HousenFootRight;
		HousenBodyRight = (Bvec - (Bvec.dot(Bvec)/Bvec.dot(Rightvec)) * Rightvec).unit();
        if(HousenBodyRight.dot(Rightvec) > 0.0) HousenBodyRight = -HousenBodyRight;
	}

	if(tfHip->GetCenterPosition().y < 0.4 && tfHip->GetCenterPosition().y > 0.25){
	    tfHip->AddTorque(50.0*(RoLeft+RoRight));  //12
	} else if(tfChest->GetCenterPosition().y > 0.3 && tfHip->GetCenterPosition().y < 0.25){
		tfHip->AddTorque(30.0*(RoLeft+RoRight));   //8
		tfHip->AddForce(-2.0*tfHip->GetVelocity());
		tfChest->AddForce(-2.0*tfChest->GetVelocity());
		tfHead->AddForce(-2.0*tfHead->GetVelocity());
	} else if(tfChest->GetCenterPosition().y < 0.3 && tfHip->GetCenterPosition().y < 0.25){
		tfHip->AddForce(-12.0*tfHip->GetVelocity());
		tfChest->AddForce(-12.0*tfChest->GetVelocity());
		tfHead->AddForce(-12.0*tfHead->GetVelocity());
	} else true;

	/*
	if(tfHip->GetCenterPosition().y < 0.3){
		tfHead->AddForce(-3.5*tfHead->GetVelocity());
	    tfChest->AddForce(-3.5*tfChest->GetVelocity());
	    tfHip->AddForce(-3.5*tfHip->GetVelocity());
	    tfHip->AddTorque(2.0*(RoLeft+RoRight));
	}
	*/
   
	/*
	ForceFootLeft = (param0*RoLeft.norm()) * HousenFootLeft;
	ForceBodyLeft = (param0*RoLeft.norm()) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;

	solid3->AddForce(ForceBodyLeft);
	solid1->AddForce(-ForceBodyLeft);
	solid1->AddForce(-ForceFootLeft);
	tfFootLeft->AddForce(ForceFootLeft);
	
	ForceFootRight = (param0*RoRight.norm()) * HousenFootRight;
	ForceBodyRight = (param0*RoRight.norm()) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;
		
	solid3->AddForce(ForceBodyRight);
	solid1->AddForce(-ForceBodyRight);
	solid1->AddForce(-ForceFootRight);
	tfFootRight->AddForce(ForceFootRight);
	*/

	LengthLeft = (tfHip->GetCenterPosition() - tfFootLeft->GetCenterPosition()).norm();
	LengthRight = (tfHip->GetCenterPosition() - tfFootRight->GetCenterPosition()).norm();
	HipToLeftFoot = tfFootLeft->GetCenterPosition() - tfHip->GetCenterPosition();
	HipToRightFoot = tfFootRight->GetCenterPosition() - tfHip->GetCenterPosition();
	VelocityHipLeft = tfFootLeft->GetVelocity() - tfHip->GetVelocity();
	VelocityHipRight = tfFootRight->GetVelocity() - tfHip->GetVelocity();
	
	HousenVelocityFootLeft = VelocityHipFootLeft.dot(HousenFootLeft);
    HousenVelocityFootRight = VelocityHipFootRight.dot(HousenFootRight);
	HousenVelocityBodyLeft = VelocityHipBody.dot(HousenBodyLeft);
    HousenVelocityBodyRight = VelocityHipBody.dot(HousenBodyRight);
	

	/*
	ForceFootLeft = -(param1*HousenVelocityFootLeft) * HousenFootLeft;
	ForceBodyLeft = -(param1*HousenVelocityFootLeft) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;
    solid3->AddForce(ForceBodyLeft);
	solid1->AddForce(-ForceBodyLeft);
	solid1->AddForce(-ForceFootLeft);
	tfFootLeft->AddForce(ForceFootLeft);

	ForceFootRight = -(param1*HousenVelocityFootRight) * HousenFootRight;
	ForceBodyRight = -(param1*HousenVelocityFootRight) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;
	solid3->AddForce(ForceBodyRight);
	solid1->AddForce(-ForceBodyRight);
	solid1->AddForce(-ForceFootRight);
	tfFootRight->AddForce(ForceFootRight);
	

	ForceFootLeft = -(param1*HousenVelocityBodyLeft) * HousenFootLeft;
    ForceBodyLeft = -(param1*HousenVelocityBodyLeft) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;
	solid3->AddForce(ForceBodyLeft);
	solid1->AddForce(-ForceBodyLeft);
	solid1->AddForce(-ForceFootLeft);
	tfFootLeft->AddForce(ForceFootLeft);
	

	ForceFootRight = -(param1*HousenVelocityBodyRight) * HousenFootLeft;
    ForceBodyRight = -(param1*HousenVelocityBodyRight) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;
	solid3->AddForce(ForceBodyRight);
	solid1->AddForce(-ForceBodyRight);
	solid1->AddForce(-ForceFootRight);
	tfFootRight->AddForce(ForceFootRight);
	*/

	Pd = FootLength*Bvec.unit() + tfHip->GetCenterPosition();

	tfFootLeft->AddForce(kp*(Pd - tfFootLeft->GetCenterPosition()) - kv*tfFootLeft->GetVelocity());
	tfFootRight->AddForce(kp*(Pd - tfFootRight->GetCenterPosition()) - kv*tfFootRight->GetVelocity());

	tfChest->AddTorque(-4.0*tfChest->GetAngularVelocity());
	tfFootLeft->AddTorque(-2.0*tfFootLeft->GetAngularVelocity());
	tfFootRight->AddTorque(-2.0*tfFootRight->GetAngularVelocity());

	/*
	if(LengthLeft > MaxFootLength){
        CrossVelocityLeft = VelocityHipLeft.dot(HipToLeftFoot);
		ForceLeft = -kp*((MaxFootLength/LengthLeft)*HipToLeftFoot - HipToLeftFoot) - kv*((-CrossVelocityLeft/LengthLeft)*HipToLeftFoot.unit());
		tfHip->AddForce(ForceLeft);
		tfFootLeft->AddForce(-ForceLeft);
	}

	if(LengthRight > MaxFootLength) {
        CrossVelocityRight = VelocityHipRight.dot(HipToRightFoot);
		ForceRight = -kp*((MaxFootLength/LengthRight)*HipToRightFoot - HipToRightFoot) - kv*((-CrossVelocityRight/LengthRight)*HipToRightFoot.unit());
		tfHip->AddForce(ForceRight);
		tfFootRight->AddForce(-ForceRight);
	}

	if(LengthLeft < MinFootLength) {
        CrossVelocityLeft = VelocityHipLeft.dot(HipToLeftFoot);
		ForceLeft = -kp*((MinFootLength/LengthLeft)*HipToLeftFoot - HipToLeftFoot) + kv*((CrossVelocityLeft/LengthLeft)*HipToLeftFoot.unit());
		tfHip->AddForce(ForceLeft);
		tfFootLeft->AddForce(-ForceLeft);
	}

	if(LengthRight < MinFootLength) {
        CrossVelocityRight = VelocityHipRight.dot(HipToRightFoot);
		ForceRight = -kp*((MinFootLength/LengthRight)*HipToRightFoot - HipToRightFoot) + kv*((CrossVelocityRight/LengthRight)*HipToRightFoot.unit());
		tfHip->AddForce(ForceRight);
		tfFootRight->AddForce(-ForceRight);
	}

	    //脚と上体の角度がMaxRoConstraintを超えた場合に脚と腰にかける力
	if(RoLeft.norm() > MaxRoConstraint) {
		ForceFootLeft = (param0*RoLeft.norm()-MaxRoConstraint) * HousenFootLeft;
		ForceBodyLeft = (param0*RoLeft.norm()-MaxRoConstraint) * (Leftvec.norm()/Bvec.norm()) * HousenBodyLeft;

		tfHead->AddForce(ForceBodyLeft);
	    tfHip->AddForce(-ForceBodyLeft);
		tfHip->AddForce(-ForceFootLeft);
		tfFootLeft->AddForce(ForceFootLeft);
		}

	//脚と上体の角度がMaxRoConstraintを超えた場合に脚と腰にかける力
	if(RoRight.norm() > MaxRoConstraint) {
		ForceFootRight = (param0*RoRight.norm()-MaxRoConstraint) * HousenFootRight;
		ForceBodyRight = (param0*RoRight.norm()-MaxRoConstraint) * (Rightvec.norm()/Bvec.norm()) * HousenBodyRight;
		
		tfHead->AddForce(ForceBodyRight);
	    tfHip->AddForce(-ForceBodyRight); 
		tfHip->AddForce(-ForceFootRight);
		tfFootRight->AddForce(ForceFootRight);
		}
		*/
}

/*
void setLight() {
	GRLightDesc light0, light1;
	light0.position = Vec4f(10.0, 20.0, 20.0, 1.0);
	light1.position = Vec4f(-10.0, 10.0, 10.0, 1.0);
	render->PushLight(light0);
	render->PushLight(light1);
}

void display(){
	render->ClearBuffer();
	render->Drawscene(scene);
	render->EndScene();
	glutSwapBuffers();
}
*/

double CRWalkingController::square(double a){
	double square;
	square = a*a;

	return square;
}

//changeの計算
Vec3d CRWalkingController::CalcChange(void){
	cac->UpdateState(PositionOfUpperBody,CenterVelocity,tfHead->GetCenterPosition(),CurrentDirection);
	return cac->CalcChangeAroundCenter();
}

//timeleftの計算
double CRWalkingController::CalcTimeLeft(void){
	double legLength = (tfHip->GetCenterPosition() - currentlandingsite).norm();

	if(LF == true) tl->UpdateState(timeleft, et, legLength, change, CenterVelocity, currentlandingsite, nextlandingsite, tfFootLeft->GetCenterPosition(), LF, CurrentDirection);
	else tl->UpdateState(timeleft, et, legLength, change, CenterVelocity, currentlandingsite, nextlandingsite, tfFootRight->GetCenterPosition(), LF, CurrentDirection);
	if(DSterm == true) return tl->CalcNextStepTimeLeft(PositionOfUpperBody.x ,PositionOfUpperBody.z, SingleSupportEndX, SingleSupportEndZ, ls->GetDoubleSupportDistanceX());                 //次に着地するまでの時間
	else return tl->CalcNextStepTimeLeft();
}

//目標着地点の計算
Vec3d CRWalkingController::CalcNextLandingSite(void){
	if(DSterm == false){
		if(LF == true) ls->UpdateState(change, PositionOfUpperBody, tfHip->GetCenterPosition() , CenterVelocity, timeleft, currentlandingsite, tfFootLeft->GetCenterPosition(), tfFootLeft->GetVelocity(), TargetDirection, CurrentDirection);
		else ls->UpdateState(change, PositionOfUpperBody, tfHip->GetCenterPosition() , CenterVelocity, timeleft, currentlandingsite, tfFootRight->GetCenterPosition(), tfFootRight->GetVelocity(), TargetDirection, CurrentDirection);
		return ls->CalcNextLandingSite();
	} else return nextlandingsite;
}

//TimeHalfCycleの計算
double CRWalkingController::CalcTimeHalfCycle(void){

    double firsthalfDStime;   //両脚支持期間を２分割した際の前半にかかる時間
	double secondhalfDStime;  //両脚支持期間を２分割した際の後半にかかる時間
	double LocalBodyX;
	double LocalBodyZ;
	double LocalBodyVelocityX;
	double LocalBodyVelocityZ;
	double MidPointX;
	double MidPointZ;
	double CurrentStrideX;
	double CurrentStrideZ;
	double LocalPreX;
	double LocalPreZ;
	double LocalSX;
	double LocalSZ;
	double thc;

	if(DSterm == true) secondhalfDStime = tl->CalcSecondHalfDoubleSupportTime(PositionOfUpperBody.x ,SingleSupportEndX, CenterVelocity.x, ls->GetDoubleSupportDistanceX(), PositionOfUpperBody.z, SingleSupportEndZ, CenterVelocity.z);
	else secondhalfDStime = 0.0;
	if(DSterm == false) firsthalfDStime = tl->CalcFirstHalfDoubleSupportTimeSingle(PositionOfUpperBody.x ,CenterVelocity.x, ls->GetDoubleSupportDistanceX(), PositionOfUpperBody.z, CenterVelocity.z);
	else firsthalfDStime = tl->CalcFirstHalfDoubleSupportTimeDouble(PositionOfUpperBody.x ,SingleSupportEndX, CenterVelocity.x, ls->GetDoubleSupportDistanceX(), PositionOfUpperBody.z, SingleSupportEndZ, CenterVelocity.z);

	timeDSleft = firsthalfDStime + secondhalfDStime;
    thc = timeleft + firsthalfDStime + secondhalfDStime;

	LocalBodyX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalBodyZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalBodyVelocityX = CalcLocalVX(CenterVelocity.x, CenterVelocity.z, CurrentDirection);
	LocalBodyVelocityZ = CalcLocalVZ(CenterVelocity.x, CenterVelocity.z, CurrentDirection);
	MidPointX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection) / 2.0;
	MidPointZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection) / 2.0;
	CurrentStrideX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
	CurrentStrideZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
    LocalPreX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, previousPX, previousPZ, CurrentDirection);
	LocalPreZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, previousPX, previousPZ, CurrentDirection);
	LocalSX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, SingleSupportEndX, SingleSupportEndZ, CurrentDirection);
	LocalSZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, SingleSupportEndX, SingleSupportEndZ, CurrentDirection);

	if(LocalBodyVelocityX > 0.0) {                             //サイクルの切り替わり時にtimehalfcycleを０にする必要がある
		if(abs(change.z) < LimitChange && LocalPreX < LocalSX + DSDX/2 && LocalBodyX > LocalSX + DSDX/2 || LocalBodyVelocityX > 0.0 && abs(change.z) > LimitChange && LocalPreX < MidPointX + DoubleSupportLimitRate*abs(CurrentStrideX) && LocalBodyX > MidPointX + DoubleSupportLimitRate*abs(CurrentStrideX))
			thc = 0.0;
	} else {
		if(abs(change.z) < LimitChange && LocalPreX > LocalSX + DSDX/2 && LocalBodyX < LocalSX + DSDX/2 || LocalBodyVelocityX < 0.0 && abs(change.z) > LimitChange && LocalPreX > MidPointX - DoubleSupportLimitRate*abs(CurrentStrideX) && LocalBodyX < MidPointX - DoubleSupportLimitRate*abs(CurrentStrideX))
			thc = 0.0;
	}

	if(abs(change.x) > LimitChange && LocalPreZ > MidPointZ - DoubleSupportLimitRate*abs(CurrentStrideZ) && LocalBodyZ < MidPointZ - DoubleSupportLimitRate*abs(CurrentStrideZ)) thc = 0.0;
    if(abs(change.x) > LimitChange && LocalPreZ < MidPointZ + DoubleSupportLimitRate*abs(CurrentStrideZ) && LocalBodyZ > MidPointZ + DoubleSupportLimitRate*abs(CurrentStrideZ)) thc = 0.0;

	//DSTR << "firsthalfDStime " << firsthalfDStime  << " secondhalfDStime " << secondhalfDStime << " timeleft " << timeleft << " timehalfcycle " << thc << std::endl;
	//DSTR << "CenterVelocity.x " << CenterVelocity.x << std::endl;

	return thc;
}

//床反力の計算
void CRWalkingController::GenerateCenterForce(void){

	double positionrate;
	double LocalBodyX;
	double LocalSX;

	LocalBodyX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalSX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, SingleSupportEndX, SingleSupportEndZ, CurrentDirection);

	if(DSDX > 0) positionrate = (LocalBodyX - LocalSX) / DSDX;
	else positionrate = - (LocalBodyX - (LocalSX + DSDX)) / DSDX; 
	if(positionrate > 1.0) positionrate = 1.0;
	if(positionrate < 0.0) positionrate = 0.0;

	if(DSterm == false)gf->UpdateState(PositionOfUpperBody , CenterVelocity , tfHip->GetCenterPosition(), timehalfcycle , change , currentlandingsite ,nextlandingsite,0.0, DSterm, CurrentDirection);
	else gf->UpdateState(PositionOfUpperBody , CenterVelocity , tfHip->GetCenterPosition(), timehalfcycle , change , currentlandingsite ,nextlandingsite,positionrate, DSterm, CurrentDirection);
    
	if(EarthConnection == true) gf->GeneCenterForce();              //床反力の計算
}

//脚の動きを生成
void CRWalkingController::GenerateFootForce(void){
	if(katoki < gaitbegin) katoki = katoki + 1;   //何故か脚の動きを遅らせないと重心の運動がおかしくなる
	else {
		ff->UpdateState(currentlandingsite, nextlandingsite, tfHip->GetCenterPosition(), tfHip->GetVelocity(), timeleft, LandAble, EarthConnection, TargetDirection);
		if(DSterm == true) ff->FootDoubleSupport();
		else ff->FootMove(); //支持脚および遊脚の制御
	}
}

//歩行を行う
void CRWalkingController::gait(void){
    //std::vector<PHSolidIf*> WholeBody;
    //std::vector<PHSolidIf*> UpperBody;
	double LocalBodyX;
	double LocalBodyZ;
	double LocalBodyVelocityX;
	double LocalBodyVelocityZ;
	double MidPointX; 
	double MidPointZ;
	double CurrentStrideX;
	double CurrentStrideZ;
	double LocalSX;
	double LocalSZ;
	double leglength = (tfHip->GetCenterPosition() - currentlandingsite).norm();  //solid1 -> Hip
	Vec3d AMAC;     //重心周りの角運動量
	Vec3d RoDiff;   //上体姿勢のズレ 
    

	CalcTargetAngle();                               //再度考慮 　　 目標進行方向の計算
	CalcCurrentDirection();                          //再度考慮　　　現在の進行方向の計算

	

	change = CalcChange();                   //changeの計算
	timeleft = CalcTimeLeft();               //timeleftの計算
	if(timeleft < 0.0) timeleft = 0.0;       //timeleftがマイナスとなった場合修正
	nextlandingsite = CalcNextLandingSite(); //目標着地点の計算
    LandAble = ls->GetLandAble();            //着地できるかの判断
	EarthConnection = CalcSustainable();     //接地しているかの判断

	DSDX = ls->GetDoubleSupportDistanceX();  //両脚支持期間に重心の進む距離

	timehalfcycle = CalcTimeHalfCycle(); //timehalfcycleの計算
	GenerateCenterForce();               //支持脚から重心にかかる力
	GenerateFootForce();                 //脚の動きを制御する ダイナミクスとは直接関係ない

    ConstraintForce();  //構造的制約により上半身に掛かる力

	//DSTR << "CenterVelocity = " << CenterVelocity << std::endl;
	//DSTR << "PositionOfUpperBody = " << PositionOfUpperBody << std::endl;
	//DSTR << "timeleft = " << timeleft << std::endl;
	//DSTR << "change = " << change << std::endl;
    //DSTR << "timehalfcycle = " << timehalfcycle << std::endl;
	//DSTR << "currentlandingsite = " << currentlandingsite << " nextlandingsite = " << nextlandingsite << std::endl;
	//DSTR << "CurrentDirection = " << CurrentDirection << std::endl;
	//DSTR << "PositionOfWholeBody = " << PositionOfWholeBody << std::endl;
	//DSTR << tfHead->GetCenterPosition() << std::endl;
	//DSTR << "geneforce = " << gf->GetCenterForce() << std::endl;
	//DSTR << "totalStep = " << totalStep << std::endl;
	//DSTR << "TargetDirection = " << TargetDirection << std::endl;
	

///////途中で撃力を加える//////////
	if(totalStep > 1240){
		if(forcestep1 < 5) {
			//tfHead->AddForce(Vec3d(0.0 ,70.0 ,0.0));
			//tfChest->AddForce(Vec3d(0.0, 0.0, 180.8));
			//tfHip->AddTorque(Vec3d(1500.0,0.0,0.0));
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
			//DSTR << " " << std::endl;
		}
		forcestep1 = forcestep1 + 1;
	}

	if(flag3 == 1) {
        tfHead->AddForce(Vec3d(1000.0 ,0.0 ,0.0));
        flag3 = 0;
	}
///////////////////////////////////

	//if(totalStep < 50 && totalStep > 35) solid2->AddForce(Vec3d(20,0.0,0.0) , PositionOfWholeBody);  //開始時の動きを良くするための力 いずれ直していく必要がある
	double vari2;

	Quaterniond Quat0;
	Quaterniond Quat1;

	Quat0 = (tfFootRight->GetPose().Ori() + tfFootLeft->GetPose().Ori())/2.0;
	Quat1 = tfChest->GetPose().Ori();
	vari2 = (tfChest->GetAngularVelocity()).y;

	Quaterniond dQuat = Quat0 * Quat1.Inv();
    //Vec3f torque = springOri * dQuat.Rotation() + damperOri * dAngV;

	tfChest->AddTorque(Vec3d(0.0, 5*(dQuat.Rotation().y) + (-4.0)*vari2 ,0.0)); //激力が加わった時にy方向に回転しないためのトルク

	LocalBodyVelocityX = CalcLocalVX(CenterVelocity.x, CenterVelocity.z, CurrentDirection);
	LocalBodyVelocityZ = CalcLocalVZ(CenterVelocity.x, CenterVelocity.z, CurrentDirection);

	//条件を満たすとき単脚支持期間を終了する
	if(timeleft == 0.0 && DSterm == false){
		
		//DSTR << "CenterVelocity = " << CenterVelocity << std::endl;
		DSTR << "step = " << CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, currentlandingsite.z, CurrentDirection) << std::endl;
        DSTR << "LocalVX begin = " << LocalBodyVelocityX << std::endl;

		SingleSupportEndX = PositionOfUpperBody.x;
		SingleSupportEndZ = PositionOfUpperBody.z;
		et = 0.0;
		timeDSleft = T0*0.2;
		DSterm = true;
	}

	if(DSterm == true) {
	    //DSTR << "LocalVX = " << LocalBodyVelocityX << std::endl;
		//DSTR << "CenterVelocity.x = " << CenterVelocity.x << std::endl;
	}

	LocalBodyX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LocalBodyZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	MidPointX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection) / 2.0;
	MidPointZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection) / 2.0;
	CurrentStrideX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
	CurrentStrideZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, nextlandingsite.x, nextlandingsite.z, CurrentDirection);
	LocalSX = CalcLocalX(currentlandingsite.x, currentlandingsite.z, SingleSupportEndX, SingleSupportEndZ, CurrentDirection);
	LocalSZ = CalcLocalZ(currentlandingsite.x, currentlandingsite.z, SingleSupportEndX, SingleSupportEndZ, CurrentDirection);

	//条件を満たすときtimeDSleftが0となり両脚支持期間を終了する
	if(LocalBodyVelocityX > 0.0 && DSDX > 0.0 && LocalBodyX > LocalSX + DSDX && DSterm == true) timeDSleft = 0.0;
	else if(LocalBodyVelocityX > 0.0 && DSDX < 0.0 && LocalBodyX > LocalSX && DSterm == true) timeDSleft = 0.0;
	else if(abs(change.z) > LimitChange && LocalBodyVelocityX > 0.0 && LocalBodyX > MidPointX + DoubleSupportLimitRate*abs(CurrentStrideX) && DSterm == true) timeDSleft = 0.0;
	else if(abs(change.x) > LimitChange && LocalBodyVelocityZ < 0.0 && LocalBodyZ < MidPointZ - DoubleSupportLimitRate*abs(CurrentStrideZ) && DSterm == true) timeDSleft = 0.0;
	else if(abs(change.x) > LimitChange && LocalBodyVelocityZ > 0.0 && LocalBodyZ > MidPointZ + DoubleSupportLimitRate*abs(CurrentStrideZ) && DSterm == true) timeDSleft = 0.0;
	//else if(abs(change.z) > LimitChange && CenterVelocity.x < 0.0 && PositionOfWholeBody.x < MidPointX - DoubleSupportLimitRate*abs(CurrentStrideX) && DSterm == true) timeDSleft = 0.0;
	else if(CenterVelocity.x < 0.0) timeDSleft = 0.0;
	else true;
		
	//条件を満たすとき両脚支持期間を終了する
	if(timeDSleft == 0.0 && DSterm == true){
		DSterm = false;

		DSTR << "CenterVelocity end = " << CenterVelocity << std::endl;
		ls->ChangeSupportLegs(LF);
		ff->ChangeSupportLegs(LF);
		ff->SetSingleSupport();

		if(LF == true) {
			LF = false;
			RF = true;
		} else {
			LF = true;
			RF = false;
		}
		et = 0.0;
		timeleft = T0;
		currentlandingsite = nextlandingsite;

		if(nextSpeed > 0.0){
			WCSetSpeed(nextSpeed);
			nextSpeed = -1;
		}
		if(bprestop == true){
			WCPreStop();
			bprestop = false;
		}
		if(breverse == true){
			WCReverse();
			breverse = false;
		}

		if(LF == true) DSTR << "RIGHT " << std::endl;
		else DSTR << "LEFT " << std::endl;

		DSTR << "currentlandingsite = " << currentlandingsite << std::endl;
		DSTR << "StrideLocalX = " << CalcLocalX(PositionOfUpperBody.x, PositionOfUpperBody.z, currentlandingsite.x, currentlandingsite.z, CurrentDirection) << std::endl;
		DSTR << "LocalVX end = " << LocalBodyVelocityX << std::endl;
		DSTR << "norm = " << (PositionOfUpperBody - currentlandingsite).norm() << std::endl;
	}
	else et = et + TimeStep;
	previousPX = PositionOfUpperBody.x;
	previousPZ = PositionOfUpperBody.z;
	PreviousV = CenterVelocity;

	completeFall();
	totalStep = totalStep + 1;
	//DSTR << "force = " << tfChest->GetForce() << std::endl;
}


/*
void standToWalk()
{}
*/

void CRWalkingController::func(){
	totalStep = totalStep + 1;

	//if(DSterm == true) DSTR << "force solid1 = " << solid1->GetForce() << " force solid2 = " << solid2->GetForce() << "force solid3 = " << solid3->GetForce() << std::endl;
	//DSTR << "Position solid1 = " << solid1->GetCenterPosition().y << std::endl;
	if(completefall == false)gait();
	else fallForce();
}

void CRWalkingController::Stand(){
	double paramKp = 10.0;
	double paramKv = 5.0;
	double paramKr = 30.0;
	double paramKav = 10.0;
	Vec3d Av;
	Quaterniond Quat0, Quat1, dQuat;

	//位置に関するPD制御
	tfChest->AddForce(-1.0*phScene->GetGravity()*TotalMass(UpperBody),Vec3d(Xstand,10,Zstand));
	tfChest->AddForce(paramKp*(Vec3d(Xstand,height+0.05
		,Zstand) - GetCenterOfBlocks(UpperBody)) - paramKv*CalcCenterVelocity(UpperBody),Vec3d(Xstand,10,Zstand));

	//姿勢に関するPD制御
	Quat0 = Quat0.Rot(Vec3d(0,0,0));
	Quat1 = tfChest->GetPose().Ori();
	Av = tfChest->GetAngularVelocity();
	dQuat = Quat0 * Quat1.Inv();

	tfChest->AddTorque(paramKr*dQuat.Rotation() - paramKav*Av); //激力が加わった時にy方向に回転しないためのトルク
}

void CRWalkingController::SetSpeed(double v){
	bstop = false;
	bprestop = false;
	bstand = false;
	breverse = false;

	if(v < 0) {
		DSTR << "SetSpeed;;Input Negative Value" << std::endl;
		//exit(1);
		v = 0.05;
	} else if(v > 2.0){
		DSTR << "SetSpeed;;Too Fast Speed Parametor" << std::endl;
		//exit(1);
		v = 2.0;
	}

	nextSpeed = v;
}

void CRWalkingController::WCSetSpeed(double v){

	ff->SetParamFootHeight(footHeight);

	if(v > 1.3){
		paramVelocityX = v;
        paramHalfStrideX = 0.19;
        T0 = CalcBasicCycle();
		paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);

	    tl->SetParamT0(T0);
	    tl->SetParamVelocityX(paramVelocityX);
	    tl->SetParamVelocityZ(paramVelocityZ);

        ls->SetParamT0(T0);
	    ls->SetParamVelocityX(paramVelocityX);
		ls->SetParamStrideX(paramHalfStrideX);
	    ls->SetParamVelocityZ(paramVelocityZ);

	    ff->SetParamT0(T0);

	    gf->SetParamT0(T0);
	    gf->SetParamT0ds(paramLdx/paramVelocityX);
	    gf->SetParamVX(paramVelocityX);
	    gf->SetParamVZ(paramVelocityZ);

		AmplitudeChange(0.01);
		VelocityZChange(0.21);

	} else if(v > 0.8){
		paramVelocityX = v;
		paramHalfStrideX = 0.155*v;
	    T0 = CalcBasicCycle();
	    paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);

	    tl->SetParamT0(T0);
	    tl->SetParamVelocityX(paramVelocityX);
	    tl->SetParamVelocityZ(paramVelocityZ);

        ls->SetParamT0(T0);
	    ls->SetParamVelocityX(paramVelocityX);
		ls->SetParamStrideX(paramHalfStrideX);
	    ls->SetParamVelocityZ(paramVelocityZ);

	    ff->SetParamT0(T0);

	    gf->SetParamT0(T0);
	    gf->SetParamT0ds(paramLdx/paramVelocityX);
	    gf->SetParamVX(paramVelocityX);
	    gf->SetParamVZ(paramVelocityZ);

		AmplitudeChange(0.01);
		VelocityZChange(0.21);

    } else if(v > 0.4){
		paramVelocityX = v;
		paramHalfStrideX = 0.19*v;
	    T0 = CalcBasicCycle();
	    paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);

	    tl->SetParamT0(T0);
	    tl->SetParamVelocityX(paramVelocityX);
	    tl->SetParamVelocityZ(paramVelocityZ);

        ls->SetParamT0(T0);
	    ls->SetParamVelocityX(paramVelocityX);
		ls->SetParamStrideX(paramHalfStrideX);
	    ls->SetParamVelocityZ(paramVelocityZ);

	    ff->SetParamT0(T0);

	    gf->SetParamT0(T0);
	    gf->SetParamT0ds(paramLdx/paramVelocityX);
	    gf->SetParamVX(paramVelocityX);
	    gf->SetParamVZ(paramVelocityZ);


    	AmplitudeChange(v*0.02);
		if(v < 0.7) VelocityZChange(0.3*v);
		else VelocityZChange(0.21);
	} else {
        
		paramVelocityX = v;
		paramHalfStrideX = 0.15*v;
	    T0 = CalcBasicCycle();
	    paramVelocityZ = CalcZParamV(paramHalfStrideZ, T0);

	    tl->SetParamT0(T0);
	    tl->SetParamVelocityX(paramVelocityX);
	    tl->SetParamVelocityZ(paramVelocityZ);

        ls->SetParamT0(T0);
	    ls->SetParamVelocityX(paramVelocityX);
		ls->SetParamStrideX(paramHalfStrideX);
	    ls->SetParamVelocityZ(paramVelocityZ);

	    ff->SetParamT0(T0);

	    gf->SetParamT0(T0);
	    gf->SetParamT0ds(paramLdx/paramVelocityX);
	    gf->SetParamVX(paramVelocityX);
	    gf->SetParamVZ(paramVelocityZ);

    	AmplitudeChange(v*0.01);
		//FootHeightChange(0.06*v);
		VelocityZChange(0.4*v);
	}
}

void CRWalkingController::Stop(){
	bprestop = true;
	bstop = true;
	breverse = false;
	bstand = false;
}

void CRWalkingController::WCStop(){

	double paramV = 0.5;
	double paramStrideZ = 0.12;
	double paramStrideMarginX = 0.11;
	double paramStrideMarginZ = 0.14;
	double paramPose = 0.25;
	double LCpx, RCpx, LRpx;
	double LCpz, RCpz, LRpz;
	bool bpx, bpz, bv, bpose; 

	LCpx = CalcLocalX(tfFootLeft->GetCenterPosition().x, tfFootLeft->GetCenterPosition().z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
    RCpx = CalcLocalX(tfFootRight->GetCenterPosition().x, tfFootRight->GetCenterPosition().z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LRpx = CalcLocalX(tfFootLeft->GetCenterPosition().x, tfFootLeft->GetCenterPosition().z, tfFootRight->GetCenterPosition().x, tfFootRight->GetCenterPosition().z, CurrentDirection);

	LCpz = CalcLocalZ(tfFootLeft->GetCenterPosition().x, tfFootLeft->GetCenterPosition().z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
    RCpz = CalcLocalZ(tfFootRight->GetCenterPosition().x, tfFootRight->GetCenterPosition().z, PositionOfUpperBody.x, PositionOfUpperBody.z, CurrentDirection);
	LRpz = CalcLocalZ(tfFootLeft->GetCenterPosition().x, tfFootLeft->GetCenterPosition().z, tfFootRight->GetCenterPosition().x, tfFootRight->GetCenterPosition().z, CurrentDirection);

	if(CenterVelocity.norm() < paramV) bv = true;
	else bv = false;
	if(abs(LCpx) < paramStrideMarginX && abs(RCpx) < paramStrideMarginX && abs(LRpx) < paramStrideMarginX) bpx = true;
	else bpx = false;
	if(abs(LCpz-paramStrideZ) < paramStrideMarginZ && abs(RCpz+paramStrideZ) < paramStrideMarginZ && LRpz-2.0*paramStrideZ > -paramStrideMarginZ && LRpz-2.0*paramStrideZ < 2.5*paramStrideMarginZ) bpz = true;
	else bpz = false;
	if(((tfChest->GetOrientation()).Rotation()).norm() < paramPose) bpose = true;
	else bpose = false;

	if(bv == true && bpx == true && bpz == true && bpose == true) {
		if(bstand == false) {
			Xstand = PositionOfUpperBody.x;
			Zstand = PositionOfUpperBody.z;
			bstand = true;
		}
		Stand();
	}
	else {
		bstand = false;
		gait();
	}
}

void CRWalkingController::WCPreStop(){
    HalfStrideXChange(0.0001);
	VelocityXChange(0.0009);
	ff->SetParamFootHeight(0.07);
	AmplitudeChange(0.0);
	VelocityZChange(0.12);
}

void CRWalkingController::Reverse(void){
    bprestop = false;
	bstop = false;
	bstand = false;
	breverse = true;
}

void CRWalkingController::WCReverse(void){
	ls->SetParamStrideX(-1.0);
	ls->SetParamVelocityX(-0.35);
	AmplitudeChange(0.005);
}

void CRWalkingController::SetRotationAngle(double r){
	TargetDirection = (tfChest->GetOrientation()).Rotation().y + r + pi/2;
	if(TargetDirection > 2.0*pi) TargetDirection = TargetDirection - 2.0*pi;
    if(TargetDirection < -2.0*pi) TargetDirection = TargetDirection + 2.0*pi;
}

void CRWalkingController::SetRotationWorldCoordinate(double r){
	if(r > 2*pi || r < -2*pi){
		DSTR << "SetRotationWorldCoordinate;;Inadequate Input" << std::endl;
		exit(1);
	}
	TargetDirection = r + pi/2;
}

void CRWalkingController::SuperimposeHingeBody(){
	syncFootLeft->SetFramePosition(tfFootLeft->GetPose().Pos());
	syncFootLeft->SetOrientation(tfFootLeft->GetPose().Ori());

	syncFootRight->SetFramePosition(tfFootRight->GetPose().Pos());
	syncFootRight->SetOrientation(tfFootRight->GetPose().Ori());

	syncHip->SetFramePosition(tfHip->GetPose().Pos());
	syncHip->SetOrientation(tfHip->GetPose().Ori());
}

}