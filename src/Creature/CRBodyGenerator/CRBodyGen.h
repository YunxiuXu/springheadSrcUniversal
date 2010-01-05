/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#ifndef CR_BODYGEN_H
#define CR_BODYGEN_H

#include <Springhead.h>

#include <Foundation/Object.h>

//@{
namespace Spr{;
// --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
/** @brief ボディ
*/
struct CRBodyGenDesc{
	/// プラグ側を親剛体にするかソケット側を親剛体にするか
	//enum CRHumanJointOrder{
	enum CRCreatureJointOrder{
		SOCKET_PARENT,
		PLUG_PARENT,
	} jointOrder;

	CRBodyGenDesc(){
	}
};

class CRBodyGen : public CRBodyGenDesc {
protected:
	enum LREnum{LEFTPART=-1, RIGHTPART=+1};

	/// ボディを構成する剛体
	std::vector< UTRef<PHSolidIf> > solids;	
	
	/// ボディを構成する関節
	std::vector< UTRef<PHJointIf> > joints;

	/// IKノード
	std::vector< UTRef<PHIKNodeIf> > ikNodes;

	/// 制御点
	std::vector< UTRef<PHIKControlPointIf> > ikControlPoints;

	/// 所属するシーン
	PHSceneIf*		phScene;

	/// 所属するSdk
	PHSdkIf*		phSdk;
	
	/** @brief 関節を作る
	*/
	PHJointIf* CreateJoint(PHSolidIf* soChild, PHSolidIf* soParent, PHHingeJointDesc desc);
	PHJointIf* CreateJoint(PHSolidIf* soChild, PHSolidIf* soParent, PHBallJointDesc desc);

	/** @brief CDBoxのInertiaを計算する（慣性テンソルの対角要素には値が入って，慣性乗積は0）
		@param CDBoxDesc::boxsize, PHSolidDesc::mass
		@return 慣性テンソル
	*/
	Matrix3d CalcBoxInertia(Vec3d boxsize, double mass);

	/**
		@brief childのポテンシャルエネルギーを計算する
	*/
	double CalcPotential(Posed parentPos, PHSolidIf* parentSolid, PHJointIf* childJoint);

	/**
		@brief すべての剛体の初期姿勢を目標角に収束したものとして初期化する
	*/
	void SetInitPosition(PHSolidIf* parentSolid, PHJointIf* childJoint);

public:
	CRBodyGen(){}
	CRBodyGen(const CRBodyGenDesc& desc, PHSceneIf* s=NULL) 
		: CRBodyGenDesc(desc)
	{
		phScene		= s;
		phSdk		= phScene->GetSdk();
	}

	/** @brief 初期化を行う
	*/
	virtual void				Init();

	/** @brief 剛体の数を得る
	*/
	virtual int					NSolids();

	/** @brief i番目の剛体を得る
	*/
	virtual PHSolidIf*			GetSolid(int i);

	/** @brief 関節の数を得る
	*/
	virtual int					NJoints();

	/** @brief i番目の関節を得る
	*/
	virtual PHJointIf*			GetJoint(int i);

	/** @brief ボールジョイントの数を返す
	*/
	virtual int NBallJoints();

	/** @brief ヒンジジョイントの数を返す
	*/
	virtual int NHingeJoints();

	/** @brief IKノードの数を得る
	*/
	int NIKNodes();

	/** @brief i番目のIKノードを得る
	*/
	PHIKNodeIf* GetIKNode(int i);

	/** @brief IK制御点の数を得る
	*/
	int NControlPoints();

	/** @brief i番目のIK制御点を得る
	*/
	PHIKControlPointIf* GetControlPoint(int i);

	/** @brief ボディの重心座標を得る
	*/
	virtual Vec3d GetCenterOfMass();
	
	/** @brief ボディの質量を得る
	*/
	virtual double GetSumOfMass();

	/**
		@brief 目標角・目標角速度に収束した場合の力学的エネルギーを返す
	*/
	virtual double GetTargetMechanicalEnergy(PHSolidIf* rootSolid);

	/**
		@brief 目標角・目標角速度に収束した場合の運動エネルギーを返す
	*/
	virtual double GetTargetKineticEnergy();

	/**
		@brief 目標角・目標角速度に収束した場合の位置エネルギーを返す
	*/
	virtual double GetTargetPotentialEnergy(PHSolidIf* rootSolid);

	/**
		@brief 現在の力学的エネルギーを返す
	*/
	virtual double GetMechanicalEnergy(PHSolidIf* rootSolid);

	/**
		@brief 現在の運動エネルギーを返す
	*/
	virtual double GetKineticEnergy();

	/**
		@brief 現在の位置エネルギーを返す
	*/
	virtual double GetPotentialEnergy(PHSolidIf* rootSolid);

};
}
//@}

#endif // CR_BODYGEN_H
