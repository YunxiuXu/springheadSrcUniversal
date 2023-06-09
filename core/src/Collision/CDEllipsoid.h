﻿/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#ifndef CDELLIPSOID_H
#define CDELLIPSOID_H
#include <Collision/CDConvex.h>

namespace Spr{;
/// 球体
class CDEllipsoid : public CDConvex {
public:
	SPR_OBJECTDEF(CDEllipsoid);
	SPR_DECLMEMBEROF_CDEllipsoidDesc;

	CDEllipsoid();
	CDEllipsoid(const CDEllipsoidDesc& desc);
	virtual bool IsInside(const Vec3f& p);
	virtual float CalcVolume();
	virtual Matrix3f CalcMomentOfInertia();

	///	サポートポイントを求める．
	virtual int Support(Vec3f&w, const Vec3f& v) const;
	///	切り口を求める．接触解析に使う．
	/// ただし、球体に関しては、切り口は求めない。接触解析時には最近傍の１点さえあればいい。
	/// 球体に関してFindCutRing()が呼び出された場合には、assertionが発生する。
	virtual bool FindCutRing(CDCutRing& r, const Posed& toW);

	virtual int LineIntersect(const Vec3f& origin, const Vec3f& dir, Vec3f* result, float* offset);

	virtual int GetVtxCount() const { return INT32_MAX; };

	Vec3d	GetRadius() { return radius; }
	void	SetRadius(Vec3d r) { radius = r; bboxReady = false; CalcMetrics(); }
};

}	//	namespace Spr
#endif
