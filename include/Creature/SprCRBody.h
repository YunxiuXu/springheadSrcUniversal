/*
 *  Copyright (c) 2003-2006, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#ifndef SPR_CRBodyIf_H
#define SPR_CRBodyIf_H

#include <SprFoundation.h>
#include <SprPhysics.h>

namespace Spr{;

//@{

struct PHSolidIf;
struct PHJointIf;

struct CRBodyIf;
struct CRHingeHumanBodyIf;

// ------------------------------------------------------------------------------
/// クリーチャのボディモデルのインターフェイス
struct CRBodyIf : SceneObjectIf{
	IF_DEF(CRBody);

	/** @brief 初期化を行う
	*/
	virtual void Init()= 0;

	/** @brief 剛体の数を得る
	*/
	virtual int NSolids()= 0;

	/** @brief i番目の剛体を得る
	*/
	virtual PHSolidIf* GetSolid(int i)= 0;

	/** @brief 関節の数を得る
	*/
	virtual int NJoints()= 0;

	/** @brief i番目の関節を得る
	*/
	virtual PHJointIf* GetJoint(int i)= 0;
};

/// クリーチャのボディモデルのデスクリプタ
struct CRBodyDesc{
	DESC_DEF_FOR_OBJECT(CRBody);

	/// プラグ側を親剛体にするかソケット側を親剛体にするか
	//enum CRHumanJointOrder{
	enum CRCreatureJointOrder{
		SOCKET_PARENT,
		PLUG_PARENT,
	} jointOrder;

	CRBodyDesc(){
	}
};

// ------------------------------------------------------------------------------
/// ヒンジジョイント人体モデルのインターフェイス
struct CRHingeHumanBodyIf : CRBodyIf {
	IF_DEF(CRHingeHumanBody);

	/** @brief 上半身の関節の堅さを変える
		@param stifness 堅さ：デフォルトの堅さに対する倍数で指定
	*/
	virtual void SetUpperBodyStiffness(float stiffness)=0;

	/** @brief 上半身のポーズを保持する
	*/
	virtual void KeepUpperBodyPose()=0;

	/** @brief 上半身のポーズを初期位置に戻す
	*/
	virtual void ResetUpperBodyPose()=0;
};

/// ヒンジジョイント人体モデルのデスクリプタ
struct CRHingeHumanBodyDesc : CRBodyDesc {
	DESC_DEF_FOR_OBJECT(CRHingeHumanBody);

	enum CRHumanSolids{
		// Center
		SO_WAIST=0,
		SO_ABDOMEN, SO_CHEST, SO_NECK, SO_HEAD,

		// Right
		SO_RIGHT_UPPER_ARM, SO_RIGHT_LOWER_ARM, SO_RIGHT_HAND,
		SO_RIGHT_UPPER_LEG, SO_RIGHT_LOWER_LEG, SO_RIGHT_FOOT,
		SO_RIGHT_EYE,

		// Left
		SO_LEFT_UPPER_ARM, SO_LEFT_LOWER_ARM, SO_LEFT_HAND,
		SO_LEFT_UPPER_LEG, SO_LEFT_LOWER_LEG, SO_LEFT_FOOT,
		SO_LEFT_EYE,

		// 関節の中継ぎ用の形状を有しない剛体
		SO_CHEST_NECK_XZ, SO_CHEST_NECK_ZY,
		SO_NECK_HEAD_XZ,

		SO_RIGHT_SHOULDER_ZX, SO_RIGHT_SHOULDER_XY, 
		SO_RIGHT_WRIST_YX, SO_RIGHT_WRIST_XZ,
		SO_RIGHT_WAIST_LEG_ZX, SO_RIGHT_WAIST_LEG_XY, 
		SO_RIGHT_ANKLE_YX, SO_RIGHT_ANKLE_XZ,
		SO_RIGHT_EYE_YX,

		SO_LEFT_SHOULDER_ZX, SO_LEFT_SHOULDER_XY, 
		SO_LEFT_WRIST_YX, SO_LEFT_WRIST_XZ, 
		SO_LEFT_WAIST_LEG_ZX, SO_LEFT_WAIST_LEG_XY, 
		SO_LEFT_ANKLE_YX, SO_LEFT_ANKLE_XZ,
		SO_LEFT_EYE_YX,

		// 剛体の数
		SO_NSOLIDS
	};

	enum CRHumanJoints{
		// -- Center
		JO_WAIST_ABDOMEN=0, JO_ABDOMEN_CHEST,
		JO_CHEST_NECK_X, JO_CHEST_NECK_Z, JO_CHEST_NECK_Y,
		JO_NECK_HEAD_X, JO_NECK_HEAD_Z,

		// -- Right
		JO_RIGHT_SHOULDER_Z, JO_RIGHT_SHOULDER_X, JO_RIGHT_SHOULDER_Y,
		JO_RIGHT_ELBOW,
		JO_RIGHT_WRIST_Y, JO_RIGHT_WRIST_X, JO_RIGHT_WRIST_Z,

		JO_RIGHT_WAIST_LEG_Z, JO_RIGHT_WAIST_LEG_X, JO_RIGHT_WAIST_LEG_Y,
		JO_RIGHT_KNEE,
		JO_RIGHT_ANKLE_Y, JO_RIGHT_ANKLE_X, JO_RIGHT_ANKLE_Z,

		JO_RIGHT_EYE_Y, JO_RIGHT_EYE_X,

		// -- Left
		JO_LEFT_SHOULDER_Z, JO_LEFT_SHOULDER_X, JO_LEFT_SHOULDER_Y,
		JO_LEFT_ELBOW,
		JO_LEFT_WRIST_Y, JO_LEFT_WRIST_X, JO_LEFT_WRIST_Z,

		JO_LEFT_WAIST_LEG_Z, JO_LEFT_WAIST_LEG_X, JO_LEFT_WAIST_LEG_Y,
		JO_LEFT_KNEE,
		JO_LEFT_ANKLE_Y, JO_LEFT_ANKLE_X, JO_LEFT_ANKLE_Z,

		JO_LEFT_EYE_Y, JO_LEFT_EYE_X,

		// 関節の数
		JO_NJOINTS
	};

	/// サイズに関するパラメータ
	double waistHeight, waistBreadth, waistThickness;
	double abdomenHeight, abdomenBreadth, abdomenThickness;
	double chestHeight, chestBreadth, chestThickness;
	double neckLength, neckDiameter;
	double headDiameter;
	double upperArmLength, upperArmDiameter;
	double lowerArmLength, lowerArmDiameter;
	double handLength, handBreadth, handThickness;
	double upperLegLength, upperLegDiameter, interLegDistance;
	double lowerLegLength, lowerLegDiameter;
	double footLength, footBreadth, footThickness, ankleToeDistance;
	double vertexToEyeHeight, occiputToEyeDistance;
	double eyeDiameter, interpupillaryBreadth;

	/// 各関節のバネダンパ
	double springWaistAbdomen, damperWaistAbdomen;
	double springAbdomenChest, damperAbdomenChest;
	double springChestNeckX,   damperChestNeckX;
	double springChestNeckY,   damperChestNeckY;
	double springChestNeckZ,   damperChestNeckZ;
	double springNeckHeadX,    damperNeckHeadX;
	double springNeckHeadZ,    damperNeckHeadZ;
	double springShoulderZ,    damperShoulderZ;
	double springShoulderX,    damperShoulderX;
	double springShoulderY,    damperShoulderY;
	double springElbow,        damperElbow;
	double springWristY,       damperWristY;
	double springWristX,       damperWristX;
	double springWristZ,       damperWristZ;
	double springWaistLegZ,    damperWaistLegZ;
	double springWaistLegX,    damperWaistLegX;
	double springWaistLegY,    damperWaistLegY;
	double springKnee,         damperKnee;
	double springAnkleY,       damperAnkleY;
	double springAnkleX,       damperAnkleX;
	double springAnkleZ,       damperAnkleZ;
	double springEyeY,         damperEyeY;
	double springEyeX,         damperEyeX;

	/// 関節取り付け角度・位置
	Vec3d       posRightUpperArm;
	Quaterniond oriRightUpperArm;
	Quaterniond oriRightLowerArm;
	Quaterniond oriRightHand;

	/// 可動域制限
	Vec2d rangeWaistAbdomen;
	Vec2d rangeAbdomenChest;
	Vec2d rangeChestNeckX;
	Vec2d rangeChestNeckY;
	Vec2d rangeChestNeckZ;
	Vec2d rangeNeckHeadX;
	Vec2d rangeNeckHeadZ;
	Vec2d rangeShoulderZ;
	Vec2d rangeShoulderX;
	Vec2d rangeShoulderY;
	Vec2d rangeElbow;
	Vec2d rangeWristY;
	Vec2d rangeWristX;
	Vec2d rangeWristZ;
	Vec2d rangeWaistLegZ;
	Vec2d rangeWaistLegX;
	Vec2d rangeWaistLegY;
	Vec2d rangeKnee;
	Vec2d rangeAnkleY;
	Vec2d rangeAnkleX;
	Vec2d rangeAnkleZ;
	Vec2d rangeRightEyeY;
	Vec2d rangeEyeX;

	/// 裏オプション
	bool noLegs;

	CRHingeHumanBodyDesc();
};


// ------------------------------------------------------------------------------
/// ヒンジジョイント動物モデルのインターフェイス
struct CRHingeAnimalBodyIf : CRBodyIf {
	IF_DEF(CRHingeAnimalBody);

};

/// ヒンジジョイント動物モデルのデスクリプタ
struct CRHingeAnimalBodyDesc : CRBodyDesc {
	DESC_DEF_FOR_OBJECT(CRHingeAnimalBody);

	enum CRAnimalSolids{
		// Center
		SO_WAIST=0,
		SO_CHEST, SO_TAIL1, SO_TAIL2, SO_TAIL3,
		
		//Head parts
		SO_NECK, SO_HEAD, 

		// Right
		SO_RIGHT_BREASTBONE, SO_RIGHT_RADIUS, SO_RIGHT_FRONT_CANNON_BONE, SO_RIGHT_FRONT_TOE,
		SO_RIGHT_FEMUR , SO_RIGHT_TIBIA, SO_RIGHT_REAR_CANNON_BONE, SO_RIGHT_REAR_TOE,
		SO_RIGHT_EYE,

		// Left
		SO_LEFT_BREASTBONE, SO_LEFT_RADIUS, SO_LEFT_FRONT_CANNON_BONE, SO_LEFT_FRONT_TOE,
		SO_LEFT_FEMUR , SO_LEFT_TIBIA, SO_LEFT_REAR_CANNON_BONE, SO_LEFT_REAR_TOE,
		SO_LEFT_EYE,

		// 関節の中継ぎ用の形状を有しない剛体
		SO_RIGHT_EYE_XY,
		SO_LEFT_EYE_XY,

		// 剛体の数
		SO_NSOLIDS
	};

	enum CRAnimalJoints{
		// -- Center
		JO_WAIST_CHEST=0,
		JO_CHEST_NECK,
		JO_NECK_HEAD,
		JO_TAIL_WAIST, JO_TAIL_12, JO_TAIL_23,

		// -- Right
		JO_RIGHT_SHOULDER,
		JO_RIGHT_ELBOW,JO_RIGHT_FRONT_KNEE,
		JO_RIGHT_FRONT_ANKLE,

		JO_RIGHT_HIP,
		JO_RIGHT_STIFLE,JO_RIGHT_REAR_KNEE,
		JO_RIGHT_REAR_ANKLE,

		JO_RIGHT_EYE_Y, JO_RIGHT_EYE_X,

		// -- Left
		JO_LEFT_SHOULDER,
		JO_LEFT_ELBOW,JO_LEFT_FRONT_KNEE,
		JO_LEFT_FRONT_ANKLE,

		JO_LEFT_HIP,
		JO_LEFT_STIFLE,JO_LEFT_REAR_KNEE,
		JO_LEFT_REAR_ANKLE,

		JO_LEFT_EYE_Y, JO_LEFT_EYE_X,

		// 関節の数
		JO_NJOINTS
	};

	/// サイズに関するパラメータ
	double waistBreadth,	      waistHeight,			 waistThickness;
	double chestBreadth,	      chestHeight,			 chestThickness;
	double tailBreadth,		      tailHeight,		     tailThickness;
	double neckBreadth,		      neckHeight,			 neckThickness;
	double headBreadth,		      headHeight,			 headThickness;
	double breathtboneBreadth,     breathtboneHeight,	 breathtboneThickness;
	double radiusBreadth,	      radiusHeight,		     radiusThickness;
	double frontCannonBoneBreadth, frontCannonBoneHeight, frontCannonBoneThickness;
	double frontToeBreadth,		  frontToeHeight,		 frontToeThickness;
	double femurBreadth,			  femurHeight,			 femurThickness;
	double tibiaBreadth,			  tibiaHeight,			 tibiaThickness;
	double rearCannonBoneBreadth,  rearCannonBoneHeight,	 rearCannonBoneThickness;
	double rearToeBreadth,		  rearToeHeight,		 rearToeThickness;

	/// 各関節のバネダンパ
	double springWaistChest,   damperWaistChest;	//腰-胸
	double springWaistTail,	   damperWaistTail;		//腰-尾
	double springTail,		   damperTail;			//尾
	double springChestNeck,	   damperChestNeck;     //胸-首
	double springNeckHead,	   damperNeckHead;		//首-頭
	double springShoulder,	   damperShoulder;		//肩
	double springElbow,		   damperElbow;			//肘（前足）
	double springFrontKnee,	   damperFrontKnee;		//膝（前足）
	double springFrontAnkle,   damperFrontAnkle;	//かかと（前足）
	double springHip,		   damperHip;			//尻
	double springStifle,	   damperStifle;		//肘？（後足）
	double springRearKnee,	   damperRearKnee;		//膝（後足）
	double springRearAnkle,    damperRearAnkle;		//かかと（後足）
	
	/// 関節取り付け角度・位置
	//Vec3d       posRightFrontUpperLeg;
	//Quaterniond oriRightFrontUpperLeg;
	
	/// 可動域制限hingejoint
	Vec2d  rangeElbow;
	Vec2d  rangeFrontKnee;
	Vec2d  rangeStifle;
	Vec2d  rangeRearKnee;
	
	//ball joints取り付け位置・角度
	Quaterniond oriWaistChest;
	Quaterniond oriWaistTail;
	Quaterniond oriTail;
	Quaterniond oriChestNeck;
	Quaterniond oriNeckHead;
	Quaterniond oriShoulder;
	Quaterniond oriFrontAnkle;
	Quaterniond oriHip;
	Quaterniond oriRearAnkle;

	/// Swing角の可動域制限balljoint
	double rangeWaistChest;
	double rangeWaistTail;
	double rangeTail;
	double rangeChestNeck;
	double rangeNeckHead;
	double rangeShoulder;
	double rangeFrontAnkle;
	double rangeHip;
	double rangeRearAnkle;

	/// Twist角の可動域制限balljoint
	Vec2d rangeTwistWaistChest;
	Vec2d rangeTwistWaistTail;
	Vec2d rangeTwistTail;
	Vec2d rangeTwistChestNeck;
	Vec2d rangeTwistNeckHead;
	Vec2d rangeTwistShoulder;
	Vec2d rangeTwistFrontAnkle;
	Vec2d rangeTwistHip;
	Vec2d rangeTwistRearAnkle;


	/// 裏オプション
	bool noLegs;

	CRHingeAnimalBodyDesc();
};





// ------------------------------------------------------------------------------
/// おもに胴体と足のみの人体モデルのインターフェイス（歩行制御用）
struct CRTrunkFootHumanBodyIf : CRBodyIf {
	IF_DEF(CRTrunkFootHumanBody);

};

/// 胴体・足人体モデルのデスクリプタ
struct CRTrunkFootHumanBodyDesc : CRBodyDesc {
	DESC_DEF_FOR_OBJECT(CRTrunkFootHumanBody);

	enum CRHumanSolids{
		// 剛体
		SO_WAIST=0, SO_CHEST, SO_HEAD, SO_RIGHT_FOOT, SO_LEFT_FOOT,
		// 剛体の数
		SO_NSOLIDS
	};

	enum CRHumanJoints{
		// 関節
		JO_WAIST_CHEST=0, JO_CHEST_HEAD,
		// 関節の数
		JO_NJOINTS
	};

	/// サイズに関するパラメータ
	double waistHeight, waistBreadth, waistThickness;
	double chestHeight, chestBreadth, chestThickness;
	double neckLength;
	double headDiameter;
	double footLength, footBreadth, footThickness;

	/// 各関節のバネダンパ
	double springWaistChest, damperWaistChest;
	double springChestHead,    damperChestHead;

	/// 可動域制限
	Vec2d rangeWaistChest;
	Vec2d rangeChestHead;

	CRTrunkFootHumanBodyDesc();

};
//@}

// ------------------------------------------------------------------------------
/// おもに胴体と足のみの哺乳類モデルのインターフェイス（制御用）
struct CRTrunkFootAnimalBodyIf : CRBodyIf{
	IF_DEF(CRTrunkFootAnimalBody);
};

/// 胴体と足のみの哺乳類モデルのディスクリプタ
struct CRTrunkFootAnimalBodyDesc : CRBodyDesc{
	DESC_DEF_FOR_OBJECT(CRTrunkFootAnimalBody);

	enum CRAnimalSolids{
		// 剛体
		SO_WAIST=0, SO_CHEST, SO_HEAD, SO_RIGHT_FOOT, SO_LEFT_FOOT,
		// 剛体の数
		SO_NSOLIDS
	};

	enum CRAnimalJoints{
		// 関節
		JO_WAIST_CHEST=0, JO_CHEST_HEAD,
		// 関節の数
		JO_NJOINTS
	};

	/// サイズに関するパラメータ
	double waistHeight, waistBreadth, waistThickness;
	double chestHeight, chestBreadth, chestThickness;
	double neckLength;
	double headDiameter;
	double footLength, footBreadth, footThickness;

	/// 各関節のバネダンパ
	double springWaistChest, damperWaistChest;
	double springChestHead,    damperChestHead;

	/// 可動域制限
	Vec2d rangeWaistChest;
	Vec2d rangeChestHead;

	CRTrunkFootAnimalBodyDesc();
};

}

#endif//SPR_CRHingeHumanBodyIf_H
