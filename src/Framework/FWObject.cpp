/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include "FWObject.h"
#include <Graphics/GRFrame.h>
#include <Physics/PHConstraint.h>

#ifdef USE_HDRSTOP
#pragma hdrstop
#endif

namespace Spr{;

FWObject::FWObject(const FWObjectDesc& d/*=FWObjectDesc()*/)
: desc(d), phSolid(NULL), grFrame(NULL)
{
	solidLength=0;
}
SceneObjectIf* FWObject::CloneObject(){
	FWObjectIf* origin = DCAST(FWObjectIf,this);
	FWSceneIf* s = DCAST(FWSceneIf, GetScene());
	FWObjectIf* clone = s->CreateFWObject();

	if(origin->GetPHSolid())
		clone->SetPHSolid(origin->GetPHSolid()->CloneObject()->Cast());
	if(origin->GetGRFrame())
		clone->SetGRFrame(origin->GetGRFrame()->CloneObject()->Cast());

	return clone;
}

void FWObject::Sync(){
	if (phSolid && grFrame){
		if(solidLength){
			//ボーン付きXファイルを使用する場合
			Affinef af,afParent,afd,afl,AF;
			phSolid->GetPose().ToAffine(af);	
			afParent=grFrame->GetParent()->GetWorldTransform();	//親のWorld座標からみたFrameを取得
			afd=afParent.inv()*af;								//階層構造下のAffin行列に変換する
			afl.PosZ()+=(float)solidLength/2.0f;				//剛体中心の位置から剛体の半長分だけずらし，ジョイント部分の位置にする
			AF=afd*afl;
			DCAST(GRFrame, grFrame)->SetTransform(AF);
		}else{
			Affinef af;
			phSolid->GetPose().ToAffine(af);
			DCAST(GRFrame, grFrame)->SetTransform(af);
		}
	}else{
		//DSTR << "Warning: No solid or frame for " << GetName() << ":FWObject." << std::endl;
	}
}


bool FWObject::AddChildObject(ObjectIf* o){
	PHSolidIf* so = DCAST(PHSolidIf, o);
	if(so){
		phSolid = so;
		return true;
	}
	GRFrameIf* fr = DCAST(GRFrameIf, o);
	if(fr){
		grFrame = fr;
		return true;
	}
	return false;
}

/// --- --- --- --- --- --- --- --- --- ---

FWBoneObject::FWBoneObject(const FWBoneObjectDesc& d/*=FWBoneObjectDesc()*/)
: desc(d), phJoint(NULL), endFrame(NULL), FWObject((const FWObjectDesc&)d)
{
	AdaptType = GRFRAME_TO_PHSOLID;
}

void FWBoneObject::Sync(){
	if(AdaptType==GRFRAME_TO_PHSOLID){
		if (phSolid && grFrame && phJoint){
			//PHSolidの位置にGRFrameを合わせる
			Posed jointPosition;
			jointPosition.Ori() = DCAST(PHConstraint,phJoint)->Xjrel.q * sockOffset.Ori().Inv();
			Posed poseSocket; phJoint->GetSocketPose(poseSocket);
			Posed pose = poseSocket * jointPosition;
			Affinef af; pose.ToAffine(af);
			DCAST(GRFrame, grFrame)->SetTransform(af);

			PHSolidIf *so1 = phJoint->GetSocketSolid(), *so2 = phJoint->GetPlugSolid();
			if (so1 && so2) {
				DCAST(FWSceneIf,GetScene())->GetPHScene()->SetContactMode(so1, so2, PHSceneDesc::MODE_NONE);
			}
		}
		if(phSolid && grFrame && (!phJoint)){
			//最初のFrameに関する処理
			Affinef af;
			phSolid->GetPose().ToAffine(af);
			DCAST(GRFrame, grFrame)->SetTransform(af);
		}
	}
	if(AdaptType==PHSOLID_TO_GRFRAME){
		//GRFrameの位置にPHSolidを合わせる
		if (phSolid && grFrame && phJoint){
			Affinef af = grFrame->GetWorldTransform();
			af.Orthonormalization(); //正規直交化
			//Matrix3d afr = af.Rot();
			//if(afr.det()<1.00){
			//	DSTR<<"行列式 : "<<afr.det()<<std::endl;
			//	DSTR<<af<<std::endl;
			//}
			Posed pose; pose.FromAffine(af);
			//アフィン行列→クォータニオンの変換誤差が大きい場合のエラー表示
			Affinef af2; pose.ToAffine(af2);
			Matrix3d mat,mat2;
			mat = af.Rot();
			mat2 = af2.Rot();
			bool flag = false;
			double filter =0.1;
			for(int i=0;i<2;i++){
				for(int j=0;j<2;j++){
					if(fabs(mat[i][j]-mat2[i][j])>filter){
						flag = true;
					}
				}
			}
			if(flag){
				DSTR<<mat<<std::endl;
				std::cout<<mat<<std::endl;
				std::cout<<mat2<<std::endl;
				std::cout<<"↑×"<<filter<<"以上の誤差××××"<<std::endl;
			}
			//
			phSolid->SetPose(pose);
		}
		if(phSolid && grFrame && (!phJoint)){
			//最初のFrameに関する処理
			Affinef af = grFrame->GetWorldTransform();
			af.Orthonormalization();
			Posed pose; pose.FromAffine(af);
			phSolid->SetPose(pose);
		}
	}
}


bool FWBoneObject::AddChildObject(ObjectIf* o){
	bool rv = false;

	if (!rv) {
		PHSolidIf* obj = DCAST(PHSolidIf, o);
		if (obj) {
			phSolid = obj;
			rv = true;
		}
	}
	if (!rv) {
		GRFrameIf* obj = DCAST(GRFrameIf, o);
		if (obj) {
			if (!grFrame) {
				grFrame = obj;
				rv = true;
			} else {
				endFrame = obj;
				rv = true;
			}
		}
	}
	if (!rv) {
		PHJointIf* obj = DCAST(PHJointIf, o);
		if (obj) {
			phJoint = obj;
			rv = true;
		}
	}
	if ((phJoint==NULL&&endFrame==NULL)){
		//最初のFrameに関する処理(Center)
		if(phSolid){
			Affinef af = grFrame->GetTransform();
			Posed absPose; absPose.FromAffine(af);
			phSolid->SetPose(absPose);
		}
	}
	if (grFrame && endFrame && phSolid && phJoint) {
		Modify();
	}
	return rv;
}

void FWBoneObject::Modify() {
	Posed poseSock, posePlug;
	poseSock.FromAffine( grFrame->GetTransform() );
	//DSTR<<"---------------------------------"<<std::endl;
	//DSTR<<grFrame->GetName()<<std::endl;
	//DSTR<<grFrame->GetTransform()<<std::endl;


	posePlug.FromAffine( Affinef() );
	GRFrameIf* fr = grFrame;
	Affinef af = Affinef();
	while (fr->GetParent()) {
		af = fr->GetTransform() * af;
		fr = fr->GetParent();
	}
	Posed absPose; absPose.FromAffine(af);

	PHBallJointIf *bj = phJoint->Cast();
	if (bj) {
		PHBallJointDesc d; bj->GetDesc(&d);
		sockOffset = d.poseSocket;
		d.poseSocket = poseSock * d.poseSocket; d.posePlug = posePlug * d.posePlug;
		d.poseSocket.Ori().unitize();
		d.posePlug.Ori().unitize();
		bj->SetDesc(&d);
	}
	PHHingeJointIf *hj = phJoint->Cast();
	if (hj) {
		PHHingeJointDesc d; hj->GetDesc(&d);
		sockOffset = d.poseSocket;
		d.poseSocket = poseSock * d.poseSocket; d.posePlug = posePlug * d.posePlug;
		d.poseSocket.Ori().unitize();
		d.posePlug.Ori().unitize();
		hj->SetDesc(&d);
	}

	double boneLength = endFrame->GetTransform().Trn().norm();

	for (int i=0; i<phSolid->NShape(); ++i) {
		CDRoundConeIf* rc = phSolid->GetShape(i)->Cast();
		if (rc) {
			CDRoundConeDesc rd;
			rc->GetDesc(&rd);
			rd.length = (float)boneLength;
			rc->SetDesc(&rd);

			Posed pose;
			pose.Pos() = Vec3d(0,0,-boneLength/2.0);
			phSolid->SetShapePose(i, pose);
			phSolid->SetCenterOfMass(Vec3d(0,0,-boneLength/2.0));
			phSolid->SetPose(absPose);
		}
	}
}

/// --- --- --- --- --- --- --- --- --- ---
//FWStructure(Boneの集合)

FWStructure::FWStructure(const FWStructureDesc& d/*=FWStructureDesc()*/)
: desc(d)
{
}

FWBoneObjectIf* FWStructure::GetBone(int n){
	if(n < (int)fwBones.size()){
		return fwBones[n];
	}
	DSTR<<"EROOR: FWBone don't exit"<<std::endl;
	return NULL;
}

FWBoneObjectIf* FWStructure::GetBone(char* n){
	std::string name = n;
	for(int i=0; i < (int)fwBones.size(); i++){
		std::string getName = fwBones[i]->GetName();
		if(getName==n){
			return fwBones[i];
		}		
	}
	DSTR<<"EROOR: FWBone don't exit"<<std::endl;
	return NULL;
}

int FWStructure::GetBoneSize(){
	return (int)fwBones.size();
}

void FWStructure::AddBone(FWBoneObjectIf* o){
	fwBones.push_back(o);
}

bool FWStructure::AddChildObject(ObjectIf* o){
	bool rv = false;
	if (!rv) {
		FWBoneObjectIf* obj = DCAST(FWBoneObjectIf, o);
		if (obj) {
			if(fwBones.size()==0){
				DCAST(FWSceneIf,GetScene())->CreateFWStructure();
			}
			AddBone(obj);
			//FWSceneのFWStructureに保存
			DCAST(FWSceneIf,GetScene())->GetFWStructure()->AddBone(obj);
			rv = true;
		}
	}
	return rv;
}

void FWStructure::SetPose(Posed p){
	for(int i =0; i < GetBoneSize(); i++){
		if(!(GetBone(i)->GetPHSolid())) continue;
		Posed pose = GetBone(i)->GetPHSolid()->GetPose();
		GetBone(i)->GetPHSolid()->SetPose(p * pose);
	}
}




}
