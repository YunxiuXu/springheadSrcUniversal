/*
 *  Copyright (c) 2003-2006, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#ifndef PHJOINT_H
#define PHJOINT_H

#include <SprPhysics.h>
#include <Physics/PHConstraint.h>

namespace Spr{;

class PHJoint : public InheritConstraint<PHJointIf, PHConstraint>{
public:
	OBJECT_DEF_ABST(PHJoint);
	/// ABAで対応するPHTreeNodeの派生クラスを生成して返す
	virtual PHTreeNode* CreateTreeNode(){return NULL;}
};

/// PHJoint1Dから派生するクラスのためのルータ
template<class inf, class base>
class InheritJoint1D : public InheritConstraint<inf, base>{
public:
	double	GetPosition(){return base::GetPosition();}
	double	GetVelocity(){return base::GetVelocity();}
	void	SetRange(double lower, double upper){base::SetRange(lower, upper);}
	void	GetRange(double& lower, double& upper){base::GetRange(lower, upper);}
	void	SetMotorTorque(double t){base::SetMotorTorque(t);}
	double	GetMotorTorque(){return base::GetMotorTorque();}
	// void	SetDesiredPosition(double p, double t) = 0;	/// 目標変位を設定する
	// double	GetDesiredPosition() = 0;				/// 目標変位を取得する
	void	SetDesiredVelocity(double v){base::SetDesiredVelocity(v);}
	double	GetDesiredVelocity(){return base::GetDesiredVelocity();}
	void	SetSpring(double K){base::SetSpring(K);}
	double	GetSpring(){return base::GetSpring();}
	void	SetSpringOrigin(double org){base::SetSpringOrigin(org);}
	double	GetSpringOrigin(){return base::GetSpringOrigin();}
	void	SetDamper(double D){base::SetDamper(D);}
	double	GetDamper(){return base::GetDamper();}
};

class PHJoint1D : public InheritConstraint<PHJoint1DIf, PHJoint>{
protected:
	int		axis_index;					///< 関節軸のインデックス．派生クラスが設定する
	void	CompDof();
public:
	OBJECT_DEF_ABST(PHJoint1D);
	double	position, velocity, torque;	///< 変位，速度，トルク
	bool	on_lower, on_upper;			///< 可動範囲の下限、上限に達している場合にtrue
	double	lower, upper;				///< 可動範囲の下限、上限
	double	pos_d, vel_d;				///< 目標変位、目標速度
	double	spring, origin, damper;		///< バネ係数、バネ原点、ダンパ係数
	
	virtual double	GetPosition(){return position;}
	virtual double	GetVelocity(){return velocity;}
	virtual void	SetMotorTorque(double t){mode = MODE_TORQUE; torque = t;}
	virtual double	GetMotorTorque(){return torque;}
	virtual void	SetRange(double l, double u){lower = l, upper = u;}
	virtual void	GetRange(double& l, double& u){l = lower, u = upper;}
	//virtual void SetDesiredPosition(double p){mode = MODE_POSITION; pos_d = p;}
	//virtual double GetDesiredPosition(){return pos_d;}
	virtual void	SetDesiredVelocity(double v){mode = MODE_VELOCITY; vel_d = v;}
	virtual double	GetDesiredVelocity(){return vel_d;}
	virtual void	SetSpring(double K){spring = K;}
	virtual double	GetSpring(){return spring;}
	virtual void	SetSpringOrigin(double org){origin = org;}
	virtual double	GetSpringOrigin(){return origin;}
	virtual void	SetDamper(double D){damper = D;}
	virtual double	GetDamper(){return damper;}
	virtual void	SetDesc(const PHJointDesc& desc);
	virtual void	AddMotorTorque(){f[axis_index] = torque * scene->GetTimeStep();}
	PHJoint1D();
};

template<int NDOF>
class PHJointND : public PHJoint{
public:
	typedef	PTM::TVector<NDOF, double> coord_t;
	coord_t position, velocity, torque;
	
	//virtual void	SetMotorTorque(coord_t t){torque = t;}
	//virtual coord_t GetMotorTorque(){return torque;}

};

}

#endif
