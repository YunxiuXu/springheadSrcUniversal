#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
#include "..\..\include\Collision\SprCDDetector.h"
#include "..\..\include\Collision\SprCDShape.h"
#include "..\..\include\Collision\SprCDSpHash.h"
#include "..\Foundation\ClapackLibsDef.h"
#include "..\Foundation\Foundation.h"
#include "..\Foundation\Object.h"
#include "..\Foundation\Scene.h"
#include "..\Foundation\UTBaseType.h"
#include "..\Foundation\UTClapack.h"
#include "..\Foundation\UTDllLoader.h"
#include "..\Foundation\UTDllLoaderImpl.h"
#include "..\Foundation\UTLoadContext.h"
#include "..\Foundation\UTLoadHandler.h"
#include "..\Foundation\UTOptimizer.h"
#include "..\Foundation\UTPath.h"
#include "..\Foundation\UTQPTimer.h"
#include "..\Foundation\UTSocket.h"
#include "..\Foundation\UTTimer.h"
#include "..\Foundation\UTTypeDesc.h"
#include "..\Collision\CDBox.h"
#include "..\Collision\CDCapsule.h"
#include "..\Collision\CDCollisionFunctions.h"
#include "..\Collision\CDConvex.h"
#include "..\Collision\CDConvexMesh.h"
#include "..\Collision\CDConvexMeshInterpolate.h"
#include "..\Collision\CDCutRing.h"
#include "..\Collision\CDDetectorImp.h"
#include "..\Collision\CDEllipsoid.h"
#include "..\Collision\CDQuickHull2D.h"
#include "..\Collision\CDQuickHull2DImp.h"
#include "..\Collision\CDQuickHull3D.h"
#include "..\Collision\CDQuickHull3DImp.h"
#include "..\Collision\CDRoundCone.h"
#include "..\Collision\CDShape.h"
#include "..\Collision\CDSpatialHashTable.h"
#include "..\Collision\CDSphere.h"
#include "..\Collision\Collision.h"
namespace Spr{

void RegisterTypeDescCollision(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::CDShapePairState* pCDShapePairState = NULL;
	desc = UTTypeDescIf::Create("CDShapePairState");
	desc->SetSize(sizeof(Spr::CDShapePairState));
	desc->SetIfInfo(CDShapePairIf::GetIfInfoStatic());
	((IfInfo*)CDShapePairIf::GetIfInfoStatic())->SetState(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDShapePairState>);
	field = desc->AddField("", "Vec3d", "normal", "");
	desc->SetOffset(field, int((char*)&(pCDShapePairState->normal) - (char*)pCDShapePairState));
	field = desc->AddField("", "double", "depth", "");
	desc->SetOffset(field, int((char*)&(pCDShapePairState->depth) - (char*)pCDShapePairState));
	field = desc->AddField("", "unsigned", "lastContactCount", "");
	desc->SetOffset(field, int((char*)&(pCDShapePairState->lastContactCount) - (char*)pCDShapePairState));
	db->RegisterDesc(desc);
	Spr::PHMaterial* pPHMaterial = NULL;
	desc = UTTypeDescIf::Create("PHMaterial");
	desc->SetSize(sizeof(Spr::PHMaterial));
	desc->SetAccess(DBG_NEW UTAccess<Spr::PHMaterial>);
	field = desc->AddField("", "float", "density", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->density) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "mu", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->mu) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "mu0", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->mu0) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "e", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->e) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "rotationFriction", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->rotationFriction) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "spring", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->spring) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "damper", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->damper) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "reflexSpring", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->reflexSpring) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "reflexDamper", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->reflexDamper) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "frictionSpring", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->frictionSpring) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "frictionDamper", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->frictionDamper) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "vibA", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibA) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "vibB", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibB) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "vibW", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibW) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "vibT", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibT) - (char*)pPHMaterial));
	field = desc->AddField("", "bool", "vibContact", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibContact) - (char*)pPHMaterial));
	field = desc->AddField("", "bool", "vibFric", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->vibFric) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "timeVaryFrictionA", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionA) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "timeVaryFrictionB", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionB) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "timeVaryFrictionC", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionC) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "frictionViscosity", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->frictionViscosity) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "stribeckVelocity", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->stribeckVelocity) - (char*)pPHMaterial));
	field = desc->AddField("", "float", "stribeckmu", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->stribeckmu) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "mus", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->mus) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "mu0s", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->mu0s) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "timeVaryFrictionAs", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionAs) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "timeVaryFrictionBs", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionBs) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "timeVaryFrictionDs", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionDs) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "timeVaryFrictionCs", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->timeVaryFrictionCs) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "stribeckVelocitys", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->stribeckVelocitys) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "stribeckmus", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->stribeckmus) - (char*)pPHMaterial));
	field = desc->AddField("vector", "double", "c", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->c) - (char*)pPHMaterial));
	field = desc->AddField("vector", "float", "bristleK", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->bristleK) - (char*)pPHMaterial));
	field = desc->AddField("", "int", "velocityFieldMode", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->velocityFieldMode) - (char*)pPHMaterial));
	field = desc->AddField("", "Vec3d", "velocityFieldAxis", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->velocityFieldAxis) - (char*)pPHMaterial));
	field = desc->AddField("", "double", "velocityFieldMagnitude", "");
	desc->SetOffset(field, int((char*)&(pPHMaterial->velocityFieldMagnitude) - (char*)pPHMaterial));
	db->RegisterDesc(desc);
	Spr::CDShapeDesc* pCDShapeDesc = NULL;
	desc = UTTypeDescIf::Create("CDShapeDesc");
	desc->SetSize(sizeof(Spr::CDShapeDesc));
	desc->SetIfInfo(CDShapeIf::GetIfInfoStatic());
	((IfInfo*)CDShapeIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDShapeDesc>);
	field = desc->AddField("", "PHMaterial", "material", "");
	desc->SetOffset(field, int((char*)&(pCDShapeDesc->material) - (char*)pCDShapeDesc));
	db->RegisterDesc(desc);
	Spr::CDConvexMeshDesc* pCDConvexMeshDesc = NULL;
	desc = UTTypeDescIf::Create("CDConvexMeshDesc");
	desc->SetSize(sizeof(Spr::CDConvexMeshDesc));
	desc->SetIfInfo(CDConvexMeshIf::GetIfInfoStatic());
	((IfInfo*)CDConvexMeshIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDConvexMeshDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDConvexMeshDesc - (char*)pCDConvexMeshDesc));
	field = desc->AddField("vector", "Vec3f", "vertices", "");
	desc->SetOffset(field, int((char*)&(pCDConvexMeshDesc->vertices) - (char*)pCDConvexMeshDesc));
	db->RegisterDesc(desc);
	Spr::CDConvexMeshInterpolateDesc* pCDConvexMeshInterpolateDesc = NULL;
	desc = UTTypeDescIf::Create("CDConvexMeshInterpolateDesc");
	desc->SetSize(sizeof(Spr::CDConvexMeshInterpolateDesc));
	desc->SetIfInfo(CDConvexMeshInterpolateIf::GetIfInfoStatic());
	((IfInfo*)CDConvexMeshInterpolateIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDConvexMeshInterpolateDesc>);
	field = desc->AddBase("CDConvexMeshDesc");
	desc->SetOffset(field, int((char*)(CDConvexMeshDesc*)pCDConvexMeshInterpolateDesc - (char*)pCDConvexMeshInterpolateDesc));
	db->RegisterDesc(desc);
	Spr::CDSphereDesc* pCDSphereDesc = NULL;
	desc = UTTypeDescIf::Create("CDSphereDesc");
	desc->SetSize(sizeof(Spr::CDSphereDesc));
	desc->SetIfInfo(CDSphereIf::GetIfInfoStatic());
	((IfInfo*)CDSphereIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDSphereDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDSphereDesc - (char*)pCDSphereDesc));
	field = desc->AddField("", "float", "radius", "");
	desc->SetOffset(field, int((char*)&(pCDSphereDesc->radius) - (char*)pCDSphereDesc));
	db->RegisterDesc(desc);
	Spr::CDEllipsoidDesc* pCDEllipsoidDesc = NULL;
	desc = UTTypeDescIf::Create("CDEllipsoidDesc");
	desc->SetSize(sizeof(Spr::CDEllipsoidDesc));
	desc->SetIfInfo(CDEllipsoidIf::GetIfInfoStatic());
	((IfInfo*)CDEllipsoidIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDEllipsoidDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDEllipsoidDesc - (char*)pCDEllipsoidDesc));
	field = desc->AddField("", "Vec3d", "radius", "");
	desc->SetOffset(field, int((char*)&(pCDEllipsoidDesc->radius) - (char*)pCDEllipsoidDesc));
	db->RegisterDesc(desc);
	Spr::CDCapsuleDesc* pCDCapsuleDesc = NULL;
	desc = UTTypeDescIf::Create("CDCapsuleDesc");
	desc->SetSize(sizeof(Spr::CDCapsuleDesc));
	desc->SetIfInfo(CDCapsuleIf::GetIfInfoStatic());
	((IfInfo*)CDCapsuleIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDCapsuleDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDCapsuleDesc - (char*)pCDCapsuleDesc));
	field = desc->AddField("", "float", "radius", "");
	desc->SetOffset(field, int((char*)&(pCDCapsuleDesc->radius) - (char*)pCDCapsuleDesc));
	field = desc->AddField("", "float", "length", "");
	desc->SetOffset(field, int((char*)&(pCDCapsuleDesc->length) - (char*)pCDCapsuleDesc));
	db->RegisterDesc(desc);
	Spr::CDRoundConeDesc* pCDRoundConeDesc = NULL;
	desc = UTTypeDescIf::Create("CDRoundConeDesc");
	desc->SetSize(sizeof(Spr::CDRoundConeDesc));
	desc->SetIfInfo(CDRoundConeIf::GetIfInfoStatic());
	((IfInfo*)CDRoundConeIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDRoundConeDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDRoundConeDesc - (char*)pCDRoundConeDesc));
	field = desc->AddField("", "Vec2f", "radius", "");
	desc->SetOffset(field, int((char*)&(pCDRoundConeDesc->radius) - (char*)pCDRoundConeDesc));
	field = desc->AddField("", "float", "length", "");
	desc->SetOffset(field, int((char*)&(pCDRoundConeDesc->length) - (char*)pCDRoundConeDesc));
	db->RegisterDesc(desc);
	Spr::CDBoxDesc* pCDBoxDesc = NULL;
	desc = UTTypeDescIf::Create("CDBoxDesc");
	desc->SetSize(sizeof(Spr::CDBoxDesc));
	desc->SetIfInfo(CDBoxIf::GetIfInfoStatic());
	((IfInfo*)CDBoxIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDBoxDesc>);
	field = desc->AddBase("CDShapeDesc");
	desc->SetOffset(field, int((char*)(CDShapeDesc*)pCDBoxDesc - (char*)pCDBoxDesc));
	field = desc->AddField("", "Vec3f", "boxsize", "");
	desc->SetOffset(field, int((char*)&(pCDBoxDesc->boxsize) - (char*)pCDBoxDesc));
	db->RegisterDesc(desc);
	Spr::CDBounds* pCDBounds = NULL;
	desc = UTTypeDescIf::Create("CDBounds");
	desc->SetSize(sizeof(Spr::CDBounds));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDBounds>);
	field = desc->AddField("", "Vec3f", "min", "");
	desc->SetOffset(field, int((char*)&(pCDBounds->min) - (char*)pCDBounds));
	field = desc->AddField("", "Vec3f", "max", "");
	desc->SetOffset(field, int((char*)&(pCDBounds->max) - (char*)pCDBounds));
	db->RegisterDesc(desc);
	Spr::CDSpatialHashTableDesc* pCDSpatialHashTableDesc = NULL;
	desc = UTTypeDescIf::Create("CDSpatialHashTableDesc");
	desc->SetSize(sizeof(Spr::CDSpatialHashTableDesc));
	desc->SetIfInfo(CDSpatialHashTableIf::GetIfInfoStatic());
	((IfInfo*)CDSpatialHashTableIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CDSpatialHashTableDesc>);
	db->RegisterDesc(desc);
	Spr::EPATri* pEPATri = NULL;
	desc = UTTypeDescIf::Create("EPATri");
	desc->SetSize(sizeof(Spr::EPATri));
	desc->SetAccess(DBG_NEW UTAccess<Spr::EPATri>);
	field = desc->AddField("", "Vec3d", "vert", "3");
	desc->SetOffset(field, int((char*)&(pEPATri->vert) - (char*)pEPATri));
	field = desc->AddField("", "Vec3d", "normal", "");
	desc->SetOffset(field, int((char*)&(pEPATri->normal) - (char*)pEPATri));
	field = desc->AddField("", "double", "distance", "");
	desc->SetOffset(field, int((char*)&(pEPATri->distance) - (char*)pEPATri));
	field = desc->AddField("", "Vec3f", "aidx", "3");
	desc->SetOffset(field, int((char*)&(pEPATri->aidx) - (char*)pEPATri));
	field = desc->AddField("", "Vec3f", "bidx", "3");
	desc->SetOffset(field, int((char*)&(pEPATri->bidx) - (char*)pEPATri));
	field = desc->AddField("", "bool", "swapidx", "");
	desc->SetOffset(field, int((char*)&(pEPATri->swapidx) - (char*)pEPATri));
	db->RegisterDesc(desc);
	Spr::EPAEdge* pEPAEdge = NULL;
	desc = UTTypeDescIf::Create("EPAEdge");
	desc->SetSize(sizeof(Spr::EPAEdge));
	desc->SetAccess(DBG_NEW UTAccess<Spr::EPAEdge>);
	field = desc->AddField("", "Vec3d", "vert", "2");
	desc->SetOffset(field, int((char*)&(pEPAEdge->vert) - (char*)pEPAEdge));
	field = desc->AddField("", "Vec3d", "aidx", "2");
	desc->SetOffset(field, int((char*)&(pEPAEdge->aidx) - (char*)pEPAEdge));
	field = desc->AddField("", "Vec3d", "bidx", "2");
	desc->SetOffset(field, int((char*)&(pEPAEdge->bidx) - (char*)pEPAEdge));
	field = desc->AddField("", "Vec3d", "vector", "");
	desc->SetOffset(field, int((char*)&(pEPAEdge->vector) - (char*)pEPAEdge));
	db->RegisterDesc(desc);
	Spr::PtclInfoNode* pPtclInfoNode = NULL;
	desc = UTTypeDescIf::Create("PtclInfoNode");
	desc->SetSize(sizeof(Spr::PtclInfoNode));
	desc->SetAccess(DBG_NEW UTAccess<Spr::PtclInfoNode>);
	field = desc->AddField("", "int", "ptclIndex", "");
	desc->SetOffset(field, int((char*)&(pPtclInfoNode->ptclIndex) - (char*)pPtclInfoNode));
	field = desc->AddField("", "int", "objIndex", "");
	desc->SetOffset(field, int((char*)&(pPtclInfoNode->objIndex) - (char*)pPtclInfoNode));
	field = desc->AddField("", "int", "timeStamp", "");
	desc->SetOffset(field, int((char*)&(pPtclInfoNode->timeStamp) - (char*)pPtclInfoNode));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(CDShapePair, Object);
CDShapeIf* Spr::CDShapePairIf::GetShape(int i){
	return	((CDShapePair*)(Object*)(ObjectIf*)this)->GetShape(i);
}
Posed Spr::CDShapePairIf::GetShapePose(int i){
	return	((CDShapePair*)(Object*)(ObjectIf*)this)->GetShapePose(i);
}
Vec3d Spr::CDShapePairIf::GetClosestPointOnWorld(int i){
	return	((CDShapePair*)(Object*)(ObjectIf*)this)->GetClosestPointOnWorld(i);
}
Vec3d Spr::CDShapePairIf::GetNormal(){
	return	((CDShapePair*)(Object*)(ObjectIf*)this)->GetNormal();
}
SPR_IFIMP1(CDShape, NamedObject);
void Spr::CDShapeIf::SetStaticFriction(float mu0){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetStaticFriction(mu0);
}
float Spr::CDShapeIf::GetStaticFriction(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetStaticFriction();
}
void Spr::CDShapeIf::SetDynamicFriction(float mu){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetDynamicFriction(mu);
}
float Spr::CDShapeIf::GetDynamicFriction(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetDynamicFriction();
}
void Spr::CDShapeIf::SetElasticity(float e){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetElasticity(e);
}
float Spr::CDShapeIf::GetElasticity(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetElasticity();
}
void Spr::CDShapeIf::SetDensity(float d){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetDensity(d);
}
float Spr::CDShapeIf::GetDensity(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetDensity();
}
void Spr::CDShapeIf::SetContactSpring(float K){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetContactSpring(K);
}
float Spr::CDShapeIf::GetContactSpring(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetContactSpring();
}
void Spr::CDShapeIf::SetContactDamper(float D){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetContactDamper(D);
}
float Spr::CDShapeIf::GetContactDamper(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetContactDamper();
}
void Spr::CDShapeIf::SetReflexSpring(float K){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetReflexSpring(K);
}
float Spr::CDShapeIf::GetReflexSpring(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetReflexSpring();
}
void Spr::CDShapeIf::SetReflexDamper(float D){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetReflexDamper(D);
}
float Spr::CDShapeIf::GetReflexDamper(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetReflexDamper();
}
void Spr::CDShapeIf::SetFrictionSpring(float K){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetFrictionSpring(K);
}
float Spr::CDShapeIf::GetFrictionSpring(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetFrictionSpring();
}
void Spr::CDShapeIf::SetFrictionDamper(float D){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetFrictionDamper(D);
}
float Spr::CDShapeIf::GetFrictionDamper(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetFrictionDamper();
}
void Spr::CDShapeIf::SetVibration(float vibA, float vibB, float vibW){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibration(vibA, vibB, vibW);
}
void Spr::CDShapeIf::SetVibA(float vibA){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibA(vibA);
}
float Spr::CDShapeIf::GetVibA(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetVibA();
}
void Spr::CDShapeIf::SetVibB(float vibB){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibB(vibB);
}
float Spr::CDShapeIf::GetVibB(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetVibB();
}
void Spr::CDShapeIf::SetVibW(float vibW){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibW(vibW);
}
float Spr::CDShapeIf::GetVibW(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetVibW();
}
void Spr::CDShapeIf::SetVibT(float vibT){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibT(vibT);
}
float Spr::CDShapeIf::GetVibT(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetVibT();
}
void Spr::CDShapeIf::SetVibContact(bool vibContact){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetVibContact(vibContact);
}
bool Spr::CDShapeIf::GetVibContact(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetVibContact();
}
const Spr::PHMaterial& Spr::CDShapeIf::GetMaterial(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->GetMaterial();
}
void Spr::CDShapeIf::SetMaterial(const Spr::PHMaterial& mat){
	return	((CDShape*)(Object*)(ObjectIf*)this)->SetMaterial(mat);
}
float Spr::CDShapeIf::CalcVolume(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->CalcVolume();
}
Vec3f Spr::CDShapeIf::CalcCenterOfMass(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->CalcCenterOfMass();
}
Matrix3f Spr::CDShapeIf::CalcMomentOfInertia(){
	return	((CDShape*)(Object*)(ObjectIf*)this)->CalcMomentOfInertia();
}
bool Spr::CDShapeIf::IsInside(const Vec3f& p){
	return	((CDShape*)(Object*)(ObjectIf*)this)->IsInside(p);
}
void Spr::CDShapeIf::CalcBBox(Vec3f& bbmin, Vec3f& bbmax, const Posed& pose){
	return	((CDShape*)(Object*)(ObjectIf*)this)->CalcBBox(bbmin, bbmax, pose);
}
SPR_IFIMP1(CDConvex, CDShape);
double Spr::CDConvexIf::CurvatureRadius(Vec3d p){
	return	((CDConvex*)(Object*)(ObjectIf*)this)->CurvatureRadius(p);
}
Vec3d Spr::CDConvexIf::Normal(Vec3d p){
	return	((CDConvex*)(Object*)(ObjectIf*)this)->Normal(p);
}
SPR_IFIMP1(CDFace, Object);
int Spr::CDFaceIf::NIndex(){
	return	((CDFace*)(Object*)(ObjectIf*)this)->NIndex();
}
int* Spr::CDFaceIf::GetIndices(){
	return	((CDFace*)(Object*)(ObjectIf*)this)->GetIndices();
}
SPR_IFIMP1(CDQuadFace, Object);
int Spr::CDQuadFaceIf::NIndex(){
	return	((CDQuadFace*)(Object*)(ObjectIf*)this)->NIndex();
}
int* Spr::CDQuadFaceIf::GetIndices(){
	return	((CDQuadFace*)(Object*)(ObjectIf*)this)->GetIndices();
}
SPR_IFIMP1(CDConvexMesh, CDConvex);
Spr::CDFaceIf* Spr::CDConvexMeshIf::GetFace(int i){
	return	((CDConvexMesh*)(Object*)(ObjectIf*)this)->GetFace(i);
}
int Spr::CDConvexMeshIf::NFace(){
	return	((CDConvexMesh*)(Object*)(ObjectIf*)this)->NFace();
}
Vec3f* Spr::CDConvexMeshIf::GetVertices(){
	return	((CDConvexMesh*)(Object*)(ObjectIf*)this)->GetVertices();
}
int Spr::CDConvexMeshIf::NVertex(){
	return	((CDConvexMesh*)(Object*)(ObjectIf*)this)->NVertex();
}
SPR_IFIMP1(CDConvexMeshInterpolate, CDConvexMesh);
SPR_IFIMP1(CDSphere, CDConvex);
float Spr::CDSphereIf::GetRadius(){
	return	((CDSphere*)(Object*)(ObjectIf*)this)->GetRadius();
}
void Spr::CDSphereIf::SetRadius(float r){
	return	((CDSphere*)(Object*)(ObjectIf*)this)->SetRadius(r);
}
SPR_IFIMP1(CDEllipsoid, CDConvex);
Vec3d Spr::CDEllipsoidIf::GetRadius(){
	return	((CDEllipsoid*)(Object*)(ObjectIf*)this)->GetRadius();
}
void Spr::CDEllipsoidIf::SetRadius(Vec3d r){
	return	((CDEllipsoid*)(Object*)(ObjectIf*)this)->SetRadius(r);
}
SPR_IFIMP1(CDCapsule, CDConvex);
float Spr::CDCapsuleIf::GetRadius(){
	return	((CDCapsule*)(Object*)(ObjectIf*)this)->GetRadius();
}
void Spr::CDCapsuleIf::SetRadius(float r){
	return	((CDCapsule*)(Object*)(ObjectIf*)this)->SetRadius(r);
}
float Spr::CDCapsuleIf::GetLength(){
	return	((CDCapsule*)(Object*)(ObjectIf*)this)->GetLength();
}
void Spr::CDCapsuleIf::SetLength(float l){
	return	((CDCapsule*)(Object*)(ObjectIf*)this)->SetLength(l);
}
SPR_IFIMP1(CDRoundCone, CDConvex);
Vec2f Spr::CDRoundConeIf::GetRadius(){
	return	((CDRoundCone*)(Object*)(ObjectIf*)this)->GetRadius();
}
float Spr::CDRoundConeIf::GetLength(){
	return	((CDRoundCone*)(Object*)(ObjectIf*)this)->GetLength();
}
void Spr::CDRoundConeIf::SetRadius(Vec2f r){
	return	((CDRoundCone*)(Object*)(ObjectIf*)this)->SetRadius(r);
}
void Spr::CDRoundConeIf::SetLength(float l){
	return	((CDRoundCone*)(Object*)(ObjectIf*)this)->SetLength(l);
}
void Spr::CDRoundConeIf::SetWidth(Vec2f r){
	return	((CDRoundCone*)(Object*)(ObjectIf*)this)->SetWidth(r);
}
SPR_IFIMP1(CDBox, CDConvex);
Vec3f Spr::CDBoxIf::GetBoxSize(){
	return	((CDBox*)(Object*)(ObjectIf*)this)->GetBoxSize();
}
Vec3f* Spr::CDBoxIf::GetVertices(){
	return	((CDBox*)(Object*)(ObjectIf*)this)->GetVertices();
}
Spr::CDFaceIf* Spr::CDBoxIf::GetFace(int i){
	return	((CDBox*)(Object*)(ObjectIf*)this)->GetFace(i);
}
Vec3f Spr::CDBoxIf::SetBoxSize(Vec3f boxsize){
	return	((CDBox*)(Object*)(ObjectIf*)this)->SetBoxSize(boxsize);
}
SPR_IFIMP1(CDSpatialHashTable, Object);
void Spr::CDSpatialHashTableIf::Init(float cellSize, Spr::CDBounds bounds){
	return	((CDSpatialHashTable*)(Object*)(ObjectIf*)this)->Init(cellSize, bounds);
}
bool Spr::CDSpatialHashTableIf::ReducedSelectPointsToAdd(Vec3f& pCtr, float radius, int objInd, int pInd, int timestamp){
	return	((CDSpatialHashTable*)(Object*)(ObjectIf*)this)->ReducedSelectPointsToAdd(pCtr, radius, objInd, pInd, timestamp);
}
SPR_OBJECTIMP1(CDQuadFace, Object);
SPR_OBJECTIMP1(CDBox, CDConvex);
SPR_OBJECTIMP1(CDCapsule, CDConvex);
SPR_OBJECTIMP_ABST1(CDConvex, CDShape);
SPR_OBJECTIMP1(CDFace, Object);
SPR_OBJECTIMP1(CDConvexMesh, CDConvex);
SPR_OBJECTIMP1(CDConvexMeshInterpolate, CDConvexMesh);
SPR_OBJECTIMP1(CDShapePair, Object);
SPR_OBJECTIMP1(CDEllipsoid, CDConvex);
SPR_OBJECTIMP1(CDRoundCone, CDConvex);
SPR_OBJECTIMP_ABST1(CDShape, NamedObject);
SPR_OBJECTIMP1(CDSpatialHashTable, NamedObject);
SPR_OBJECTIMP1(CDSphere, CDConvex);
}
