/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#ifndef PHCONTACTSURFACE_H
#define PHCONTACTSURFACE_H

#include <SprPhysics.h>
#include "PHContactPoint.h"

class PHShapePairForLCP;

namespace Spr{;

class PHContactSurface : public PHContactPoint{
public:
	Vec3d	fpoint;		//ZMP
	std::vector<Vec3d>	section;	///< 交差断面の頂点（接触座標系での値）．トルクの制限のために保持
	int lastL,lastR;	///前回、最近点があった辺の頂点を表すsection番号
	virtual void SetConstrainedIndex(int* con);
	virtual void CompBias();
	virtual void Projection(double& f, int k);
	virtual void IterateLCP();
	PHContactSurface(){}
	PHContactSurface(PHShapePairForLCP* sp, Vec3d p, PHSolid* s0, PHSolid* s1, std::vector<Vec3d> sec);
	PHContactSurface(const Matrix3d& local, PHShapePairForLCP* sp, Vec3d p, PHSolid* s0, PHSolid* s1, std::vector<Vec3d> sec);
	void	ProjectionTorque(SpatialVector& fnew);	///< トルク用Projection
	double	CalcSignedArea(Vec3d p, Vec3d q, Vec3d r);	///< 三角形pqrの符号付き面積算出
	bool	CheckInside(int& L, int& R);		///< 作用点が面内にあるか判定
	void	SearchClosestPoint(int L, int R);	///< 作用点の面内の最近点を見つける
	
	//回転摩擦用
	void	IntegrateArea();//接触面を積分
	double	rotateFriction;//回転摩擦に摩擦係数と垂直抗力をかける前の値が入る
	int		segmentationNum;//面の分割数
	double  interval;//接触面を区切る刻み幅
};

}

#endif
