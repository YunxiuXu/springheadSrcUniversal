/*
 *  Copyright (c) 2003-2006, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include "robot.h"
#include <vector>

using namespace std;

void Robot::Build(const Posed& pose, PHSceneIf* phScene, PHSdkIf* phSdk){
	CDBoxDesc bd;
	bd.boxsize = Vec3f(0.8, 0.6, 1.0);
	boxBody = phSdk->CreateShape(bd)->Cast();
	bd.boxsize = Vec3f(0.1, 0.4, 0.1);
	boxCrank = phSdk->CreateShape(bd)->Cast();
	bd.boxsize = Vec3f(0.1, 1.5, 0.1);
	boxFoot = phSdk->CreateShape(bd)->Cast();
	bd.boxsize = Vec3f(0.1, 0.8, 0.1);
	boxGuide = phSdk->CreateShape(bd)->Cast();
	
	PHSolidDesc sd;
	soBody = phScene->CreateSolid(sd);
	soBody->AddShape(boxBody);
	soBody->SetPose(pose);
	soBody->SetDynamical(false);
	//PHRootNodeIf* root = phScene->CreateRootNode(soBody);

	Posed poseLeg[4];
	poseLeg[0].Pos() = Vec3d(-1.3, -0.3, 1.0);
	poseLeg[2].Pos() = Vec3d(-1.3, -0.3, -1.0);
	poseLeg[1].Pos() = Vec3d(1.3, -0.3, 1.0);
	poseLeg[1].Ori() = Quaterniond::Rot(Rad(180.0), 'y');
	poseLeg[3].Pos() = Vec3d(1.3, -0.3, -1.0);
	poseLeg[3].Ori() = Quaterniond::Rot(Rad(180.0), 'y');
	
	for(int i = 0; i < 4; i++){		
		PHSolidDesc sd;
		sd.mass = 0.1;
		sd.inertia = Matrix3d::Unit() * 0.1;
		leg[i].soCrank = phScene->CreateSolid(sd);
		leg[i].soCrank->AddShape(boxCrank);
		leg[i].soFoot[0] = phScene->CreateSolid(sd);
		leg[i].soFoot[0]->AddShape(boxFoot);
		leg[i].soFoot[1] = phScene->CreateSolid(sd);
		leg[i].soFoot[1]->AddShape(boxFoot);
		leg[i].soGuide[0] = phScene->CreateSolid(sd);
		leg[i].soGuide[0]->AddShape(boxGuide);
		leg[i].soGuide[1] = phScene->CreateSolid(sd);
		leg[i].soGuide[1]->AddShape(boxGuide);

		// �N�����N
		PHHingeJointDesc jd;
		jd.poseSocket = poseLeg[i];
		jd.posePlug.Pos() = Vec3d(0.0, 0.0, 0.0);
		leg[i].jntCrank = phScene->CreateJoint(soBody, leg[i].soCrank, jd)->Cast();
		leg[i].jntCrank->SetDamper(1.0);
		//phScene->CreateTreeNode(root, leg[i].soCrank);
	
		const double K = 100.0, D = 10.0;
	
		Posed pose;
		PHTreeNodeIf* node;
		for(int j = 0; j < 2; j++){
			pose.Pos() = Vec3d(0.9, 0.4, (j == 0 ? 0.06 : -0.06));
			jd.poseSocket = poseLeg[i] * pose;
			jd.posePlug.Pos() = Vec3d(0.0, 0.4, (j == 0 ? -0.06 : 0.06));
			leg[i].jntGuideBody[j] = phScene->CreateJoint(soBody, leg[i].soGuide[j], jd)->Cast();
			leg[i].jntGuideBody[j]->SetDamper(D);
			leg[i].jntGuideBody[j]->SetSpring(K);
			leg[i].jntGuideBody[j]->SetTargetPosition(Rad(-90.0));
			//node = phScene->CreateTreeNode(root, leg[i].soGuide[j]);
			
			jd.poseSocket.Ori() = Quaterniond();
			jd.poseSocket.Pos() = Vec3d(0.0, -0.4, 0.0);
			jd.posePlug.Pos() = Vec3d(0.0, 0.7, 0.0);
			leg[i].jntFootGuide[j] = phScene->CreateJoint(leg[i].soGuide[j], leg[i].soFoot[j], jd)->Cast();
			//phScene->CreateTreeNode(node, leg[i].soFoot[j]);
			leg[i].jntFootGuide[j]->SetSpring(K);
			leg[i].jntFootGuide[j]->SetDamper(D);
			leg[i].jntFootGuide[j]->SetTargetPosition(Rad(-90.0));
		}
	
		double dt = phScene->GetTimeStep();
		double T = 0.1;
		for(double t = 0.0; t < T; t+=dt)
			phScene->Step();
	
		// �o�l����
		leg[i].jntGuideBody[0]->SetSpring(0.0);
		leg[i].jntGuideBody[1]->SetSpring(0.0);
		leg[i].jntFootGuide[0]->SetSpring(0.0);
		leg[i].jntFootGuide[1]->SetSpring(0.0);

		// �����N�̍\��
		for(int j = 0; j < 2; j++){
			jd.poseSocket = Posed();
			jd.poseSocket.Pos() = Vec3d(0.0, (j == 0 ? 0.1 : -0.1), (j == 0 ? 0.06: -0.06));
			jd.posePlug.Pos() = Vec3d(0.0, -0.1+0.25, (j == 0 ? -0.06 : 0.06));
			leg[i].jntFoot[j] = phScene->CreateJoint(leg[i].soCrank, leg[i].soFoot[j], jd)->Cast();
		}
	
		phScene->SetContactMode(leg[i].soCrank, leg[i].soFoot[0], PHSceneDesc::MODE_NONE);
		phScene->SetContactMode(leg[i].soCrank, leg[i].soFoot[1], PHSceneDesc::MODE_NONE);
		phScene->SetContactMode(leg[i].soCrank, leg[i].soGuide[0], PHSceneDesc::MODE_NONE);
		phScene->SetContactMode(leg[i].soCrank, leg[i].soGuide[1], PHSceneDesc::MODE_NONE);
		phScene->SetContactMode(leg[i].soGuide[0], leg[i].soFoot[0], PHSceneDesc::MODE_NONE);
		phScene->SetContactMode(leg[i].soGuide[1], leg[i].soFoot[1], PHSceneDesc::MODE_NONE);	
	}

	// �r�̃����N���m�͐ڐG�v�Z���Ȃ�
	vector<PHSolidIf*> group;
	group.push_back(soBody);
	for(int i = 0; i < 4; i++){
		group.push_back(leg[i].soCrank);
		group.push_back(leg[i].soFoot[0]);
		group.push_back(leg[i].soFoot[1]);
		group.push_back(leg[i].soGuide[0]);
		group.push_back(leg[i].soGuide[1]);
	}
	phScene->SetContactMode(&group[0], group.size(), PHSceneDesc::MODE_NONE);

	//soBody->SetDynamical(true);
}


const double speed = 10.0;
void Robot::Stop(){
	leg[0].jntCrank->SetMotorTorque(0);
	leg[1].jntCrank->SetMotorTorque(0);
	leg[2].jntCrank->SetMotorTorque(0);
	leg[3].jntCrank->SetMotorTorque(0);
}

void Robot::Forward(){
	leg[0].jntCrank->SetMotorTorque(speed);
	leg[1].jntCrank->SetMotorTorque(-speed);
	leg[2].jntCrank->SetMotorTorque(speed);
	leg[3].jntCrank->SetMotorTorque(-speed);
}

void Robot::Backward(){
	leg[0].jntCrank->SetMotorTorque(-speed);
	leg[1].jntCrank->SetMotorTorque(speed);
	leg[2].jntCrank->SetMotorTorque(-speed);
	leg[3].jntCrank->SetMotorTorque(speed);
}

void Robot::TurnLeft(){
	leg[0].jntCrank->SetMotorTorque(speed);
	leg[1].jntCrank->SetMotorTorque(-speed);
	leg[2].jntCrank->SetMotorTorque(-speed);
	leg[3].jntCrank->SetMotorTorque(speed);
}

void Robot::TurnRight(){
	leg[0].jntCrank->SetMotorTorque(-speed);
	leg[1].jntCrank->SetMotorTorque(speed);
	leg[2].jntCrank->SetMotorTorque(speed);
	leg[3].jntCrank->SetMotorTorque(-speed);
}