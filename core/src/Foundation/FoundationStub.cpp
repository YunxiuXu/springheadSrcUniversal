#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
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
namespace Spr{

void RegisterTypeDescFoundation(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::ObjectIfs* pObjectIfs = NULL;
	desc = UTTypeDescIf::Create("ObjectIfs");
	desc->SetSize(sizeof(Spr::ObjectIfs));
	desc->SetAccess(DBG_NEW UTAccess<Spr::ObjectIfs>);
	db->RegisterDesc(desc);
	Spr::UTAutoLock* pUTAutoLock = NULL;
	desc = UTTypeDescIf::Create("UTAutoLock");
	desc->SetSize(sizeof(Spr::UTAutoLock));
	desc->SetAccess(DBG_NEW UTAccess<Spr::UTAutoLock>);
	field = desc->AddField("pointer", "UTCriticalSection", "cr", "");
	desc->SetOffset(field, int((char*)&(pUTAutoLock->cr) - (char*)pUTAutoLock));
	db->RegisterDesc(desc);
	Spr::UTCMAESOptimizerDesc* pUTCMAESOptimizerDesc = NULL;
	desc = UTTypeDescIf::Create("UTCMAESOptimizerDesc");
	desc->SetSize(sizeof(Spr::UTCMAESOptimizerDesc));
	desc->SetIfInfo(UTCMAESOptimizerIf::GetIfInfoStatic());
	((IfInfo*)UTCMAESOptimizerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::UTCMAESOptimizerDesc>);
	field = desc->AddField("", "double", "stopMaxFunEvals", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopMaxFunEvals) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "facmaxeval", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->facmaxeval) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "stopMaxIter", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopMaxIter) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "stopTolFun", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopTolFun) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "stopTolFunHist", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopTolFunHist) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "stopTolX", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopTolX) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "stopTolUpXFactor", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->stopTolUpXFactor) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "int", "lambda", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->lambda) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "int", "mu", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->mu) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "mucov", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->mucov) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "mueff", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->mueff) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("vector", "double", "weights", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->weights) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "damps", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->damps) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "cs", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->cs) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "ccumcov", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->ccumcov) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "ccov", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->ccov) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "diagonalCov", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->diagonalCov) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("", "double", "facupdateCmode", "");
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->facupdateCmode) - (char*)pUTCMAESOptimizerDesc));
	field = desc->AddField("Weights", "enum", "weightMode", "");
	desc->AddEnumConst(field, "UTCMA_UNINITIALIZED_WEIGHTS", Spr::UTCMAESOptimizerDesc::UTCMA_UNINITIALIZED_WEIGHTS);
	desc->AddEnumConst(field, "UTCMA_LINEAR_WEIGHTS", Spr::UTCMAESOptimizerDesc::UTCMA_LINEAR_WEIGHTS);
	desc->AddEnumConst(field, "UTCMA_EQUAL_WEIGHTS", Spr::UTCMAESOptimizerDesc::UTCMA_EQUAL_WEIGHTS);
	desc->AddEnumConst(field, "UTCMA_LOG_WEIGHTS", Spr::UTCMAESOptimizerDesc::UTCMA_LOG_WEIGHTS);
	desc->SetOffset(field, int((char*)&(pUTCMAESOptimizerDesc->weightMode) - (char*)pUTCMAESOptimizerDesc));
	db->RegisterDesc(desc);
	Spr::Vec2f* pVec2f = NULL;
	desc = UTTypeDescIf::Create("Vec2f");
	desc->SetSize(sizeof(Spr::Vec2f));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec2f>);
	field = desc->AddField("", "float", "x", "");
	desc->SetOffset(field, int((char*)&(pVec2f->x) - (char*)pVec2f));
	field = desc->AddField("", "float", "y", "");
	desc->SetOffset(field, int((char*)&(pVec2f->y) - (char*)pVec2f));
	db->RegisterDesc(desc);
	Spr::Vec2d* pVec2d = NULL;
	desc = UTTypeDescIf::Create("Vec2d");
	desc->SetSize(sizeof(Spr::Vec2d));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec2d>);
	field = desc->AddField("", "double", "x", "");
	desc->SetOffset(field, int((char*)&(pVec2d->x) - (char*)pVec2d));
	field = desc->AddField("", "double", "y", "");
	desc->SetOffset(field, int((char*)&(pVec2d->y) - (char*)pVec2d));
	db->RegisterDesc(desc);
	Spr::Vec3f* pVec3f = NULL;
	desc = UTTypeDescIf::Create("Vec3f");
	desc->SetSize(sizeof(Spr::Vec3f));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec3f>);
	field = desc->AddField("", "float", "x", "");
	desc->SetOffset(field, int((char*)&(pVec3f->x) - (char*)pVec3f));
	field = desc->AddField("", "float", "y", "");
	desc->SetOffset(field, int((char*)&(pVec3f->y) - (char*)pVec3f));
	field = desc->AddField("", "float", "z", "");
	desc->SetOffset(field, int((char*)&(pVec3f->z) - (char*)pVec3f));
	db->RegisterDesc(desc);
	Spr::Vec3d* pVec3d = NULL;
	desc = UTTypeDescIf::Create("Vec3d");
	desc->SetSize(sizeof(Spr::Vec3d));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec3d>);
	field = desc->AddField("", "double", "x", "");
	desc->SetOffset(field, int((char*)&(pVec3d->x) - (char*)pVec3d));
	field = desc->AddField("", "double", "y", "");
	desc->SetOffset(field, int((char*)&(pVec3d->y) - (char*)pVec3d));
	field = desc->AddField("", "double", "z", "");
	desc->SetOffset(field, int((char*)&(pVec3d->z) - (char*)pVec3d));
	db->RegisterDesc(desc);
	Spr::Vec4f* pVec4f = NULL;
	desc = UTTypeDescIf::Create("Vec4f");
	desc->SetSize(sizeof(Spr::Vec4f));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec4f>);
	field = desc->AddField("", "float", "x", "");
	desc->SetOffset(field, int((char*)&(pVec4f->x) - (char*)pVec4f));
	field = desc->AddField("", "float", "y", "");
	desc->SetOffset(field, int((char*)&(pVec4f->y) - (char*)pVec4f));
	field = desc->AddField("", "float", "z", "");
	desc->SetOffset(field, int((char*)&(pVec4f->z) - (char*)pVec4f));
	field = desc->AddField("", "float", "w", "");
	desc->SetOffset(field, int((char*)&(pVec4f->w) - (char*)pVec4f));
	db->RegisterDesc(desc);
	Spr::Vec4d* pVec4d = NULL;
	desc = UTTypeDescIf::Create("Vec4d");
	desc->SetSize(sizeof(Spr::Vec4d));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Vec4d>);
	field = desc->AddField("", "double", "x", "");
	desc->SetOffset(field, int((char*)&(pVec4d->x) - (char*)pVec4d));
	field = desc->AddField("", "double", "y", "");
	desc->SetOffset(field, int((char*)&(pVec4d->y) - (char*)pVec4d));
	field = desc->AddField("", "double", "z", "");
	desc->SetOffset(field, int((char*)&(pVec4d->z) - (char*)pVec4d));
	field = desc->AddField("", "double", "w", "");
	desc->SetOffset(field, int((char*)&(pVec4d->w) - (char*)pVec4d));
	db->RegisterDesc(desc);
	Spr::Quaternionf* pQuaternionf = NULL;
	desc = UTTypeDescIf::Create("Quaternionf");
	desc->SetSize(sizeof(Spr::Quaternionf));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Quaternionf>);
	field = desc->AddField("", "float", "x", "");
	desc->SetOffset(field, int((char*)&(pQuaternionf->x) - (char*)pQuaternionf));
	field = desc->AddField("", "float", "y", "");
	desc->SetOffset(field, int((char*)&(pQuaternionf->y) - (char*)pQuaternionf));
	field = desc->AddField("", "float", "z", "");
	desc->SetOffset(field, int((char*)&(pQuaternionf->z) - (char*)pQuaternionf));
	field = desc->AddField("", "float", "w", "");
	desc->SetOffset(field, int((char*)&(pQuaternionf->w) - (char*)pQuaternionf));
	db->RegisterDesc(desc);
	Spr::Quaterniond* pQuaterniond = NULL;
	desc = UTTypeDescIf::Create("Quaterniond");
	desc->SetSize(sizeof(Spr::Quaterniond));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Quaterniond>);
	field = desc->AddField("", "double", "x", "");
	desc->SetOffset(field, int((char*)&(pQuaterniond->x) - (char*)pQuaterniond));
	field = desc->AddField("", "double", "y", "");
	desc->SetOffset(field, int((char*)&(pQuaterniond->y) - (char*)pQuaterniond));
	field = desc->AddField("", "double", "z", "");
	desc->SetOffset(field, int((char*)&(pQuaterniond->z) - (char*)pQuaterniond));
	field = desc->AddField("", "double", "w", "");
	desc->SetOffset(field, int((char*)&(pQuaterniond->w) - (char*)pQuaterniond));
	db->RegisterDesc(desc);
	Spr::Posef* pPosef = NULL;
	desc = UTTypeDescIf::Create("Posef");
	desc->SetSize(sizeof(Spr::Posef));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Posef>);
	field = desc->AddField("", "float", "w", "");
	desc->SetOffset(field, int((char*)&(pPosef->w) - (char*)pPosef));
	field = desc->AddField("", "float", "x", "");
	desc->SetOffset(field, int((char*)&(pPosef->x) - (char*)pPosef));
	field = desc->AddField("", "float", "y", "");
	desc->SetOffset(field, int((char*)&(pPosef->y) - (char*)pPosef));
	field = desc->AddField("", "float", "z", "");
	desc->SetOffset(field, int((char*)&(pPosef->z) - (char*)pPosef));
	field = desc->AddField("", "float", "px", "");
	desc->SetOffset(field, int((char*)&(pPosef->px) - (char*)pPosef));
	field = desc->AddField("", "float", "py", "");
	desc->SetOffset(field, int((char*)&(pPosef->py) - (char*)pPosef));
	field = desc->AddField("", "float", "pz", "");
	desc->SetOffset(field, int((char*)&(pPosef->pz) - (char*)pPosef));
	db->RegisterDesc(desc);
	Spr::Posed* pPosed = NULL;
	desc = UTTypeDescIf::Create("Posed");
	desc->SetSize(sizeof(Spr::Posed));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Posed>);
	field = desc->AddField("", "double", "w", "");
	desc->SetOffset(field, int((char*)&(pPosed->w) - (char*)pPosed));
	field = desc->AddField("", "double", "x", "");
	desc->SetOffset(field, int((char*)&(pPosed->x) - (char*)pPosed));
	field = desc->AddField("", "double", "y", "");
	desc->SetOffset(field, int((char*)&(pPosed->y) - (char*)pPosed));
	field = desc->AddField("", "double", "z", "");
	desc->SetOffset(field, int((char*)&(pPosed->z) - (char*)pPosed));
	field = desc->AddField("", "double", "px", "");
	desc->SetOffset(field, int((char*)&(pPosed->px) - (char*)pPosed));
	field = desc->AddField("", "double", "py", "");
	desc->SetOffset(field, int((char*)&(pPosed->py) - (char*)pPosed));
	field = desc->AddField("", "double", "pz", "");
	desc->SetOffset(field, int((char*)&(pPosed->pz) - (char*)pPosed));
	db->RegisterDesc(desc);
	Spr::Matrix3f* pMatrix3f = NULL;
	desc = UTTypeDescIf::Create("Matrix3f");
	desc->SetSize(sizeof(Spr::Matrix3f));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Matrix3f>);
	field = desc->AddField("", "float", "data", "9");
	desc->SetOffset(field, int((char*)&(pMatrix3f->data) - (char*)pMatrix3f));
	db->RegisterDesc(desc);
	Spr::Matrix3d* pMatrix3d = NULL;
	desc = UTTypeDescIf::Create("Matrix3d");
	desc->SetSize(sizeof(Spr::Matrix3d));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Matrix3d>);
	field = desc->AddField("", "double", "data", "9");
	desc->SetOffset(field, int((char*)&(pMatrix3d->data) - (char*)pMatrix3d));
	db->RegisterDesc(desc);
	Spr::Affinef* pAffinef = NULL;
	desc = UTTypeDescIf::Create("Affinef");
	desc->SetSize(sizeof(Spr::Affinef));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Affinef>);
	field = desc->AddField("", "float", "data", "16");
	desc->SetOffset(field, int((char*)&(pAffinef->data) - (char*)pAffinef));
	db->RegisterDesc(desc);
	Spr::Affined* pAffined = NULL;
	desc = UTTypeDescIf::Create("Affined");
	desc->SetSize(sizeof(Spr::Affined));
	desc->SetAccess(DBG_NEW UTAccess<Spr::Affined>);
	field = desc->AddField("", "double", "data", "16");
	desc->SetOffset(field, int((char*)&(pAffined->data) - (char*)pAffined));
	db->RegisterDesc(desc);
	gimite::socket_address* psocket_address = NULL;
	desc = UTTypeDescIf::Create("socket_address");
	desc->SetSize(sizeof(gimite::socket_address));
	desc->SetAccess(DBG_NEW UTAccess<gimite::socket_address>);
	field = desc->AddField("pointer", "ip_address", "ip", "");
	desc->SetOffset(field, int((char*)&(psocket_address->ip) - (char*)psocket_address));
	field = desc->AddField("", "int", "port", "");
	desc->SetOffset(field, int((char*)&(psocket_address->port) - (char*)psocket_address));
	db->RegisterDesc(desc);
}

SPR_IFIMP0(Object);
void Spr::ObjectIf::Print(std::ostream& os)const{
	return	((Object*)(Object*)(ObjectIf*)this)->Print(os);
}
void Spr::ObjectIf::PrintShort(std::ostream& os)const{
	return	((Object*)(Object*)(ObjectIf*)this)->PrintShort(os);
}
int Spr::ObjectIf::AddRef(){
	return	((Object*)(Object*)(ObjectIf*)this)->AddRef();
}
int Spr::ObjectIf::RefCount(){
	return	((Object*)(Object*)(ObjectIf*)this)->RefCount();
}
size_t Spr::ObjectIf::NChildObject()const{
	return	((Object*)(Object*)(ObjectIf*)this)->NChildObject();
}
Spr::ObjectIf* Spr::ObjectIf::GetChildObject(size_t pos){
	return	((Object*)(Object*)(ObjectIf*)this)->GetChildObject(pos);
}
const Spr::ObjectIf* Spr::ObjectIf::GetChildObject(size_t pos)const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetChildObject(pos);
}
bool Spr::ObjectIf::AddChildObject(Spr::ObjectIf* o){
	return	((Object*)(Object*)(ObjectIf*)this)->AddChildObject(o);
}
bool Spr::ObjectIf::DelChildObject(Spr::ObjectIf* o){
	return	((Object*)(Object*)(ObjectIf*)this)->DelChildObject(o);
}
void Spr::ObjectIf::Clear(){
	((Object*)(Object*)(ObjectIf*)this)->Clear();
}
Spr::ObjectIf* Spr::ObjectIf::CreateObject(const IfInfo* info, const void* desc){
	return	((Object*)(Object*)(ObjectIf*)this)->CreateObject(info, desc);
}
const void* Spr::ObjectIf::GetDescAddress()const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetDescAddress();
}
bool Spr::ObjectIf::GetDesc(void* desc)const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetDesc(desc);
}
void Spr::ObjectIf::SetDesc(const void* desc){
	return	((Object*)(Object*)(ObjectIf*)this)->SetDesc(desc);
}
size_t Spr::ObjectIf::GetDescSize()const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetDescSize();
}
const void* Spr::ObjectIf::GetStateAddress()const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetStateAddress();
}
bool Spr::ObjectIf::GetState(void* state)const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetState(state);
}
void Spr::ObjectIf::SetState(const void* state){
	return	((Object*)(Object*)(ObjectIf*)this)->SetState(state);
}
bool Spr::ObjectIf::WriteStateR(std::ostream& fout){
	return	((Object*)(Object*)(ObjectIf*)this)->WriteStateR(fout);
}
bool Spr::ObjectIf::WriteState(std::string fileName){
	return	((Object*)(Object*)(ObjectIf*)this)->WriteState(fileName);
}
bool Spr::ObjectIf::ReadStateR(std::istream& fin){
	return	((Object*)(Object*)(ObjectIf*)this)->ReadStateR(fin);
}
bool Spr::ObjectIf::ReadState(std::string fileName){
	return	((Object*)(Object*)(ObjectIf*)this)->ReadState(fileName);
}
size_t Spr::ObjectIf::GetStateSize()const{
	return	((Object*)(Object*)(ObjectIf*)this)->GetStateSize();
}
void Spr::ObjectIf::ConstructState(void* m)const{
	return	((Object*)(Object*)(ObjectIf*)this)->ConstructState(m);
}
void Spr::ObjectIf::DestructState(void* m)const{
	return	((Object*)(Object*)(ObjectIf*)this)->DestructState(m);
}
void Spr::ObjectIf::DumpObjectR(std::ostream& os, int level)const{
	return	((Object*)(Object*)(ObjectIf*)this)->DumpObjectR(os, level);
}
SPR_IFIMP1(NamedObject, Object);
const char* Spr::NamedObjectIf::GetName()const{
	return	((NamedObject*)(Object*)(ObjectIf*)this)->GetName();
}
void Spr::NamedObjectIf::SetName(const char* n){
	return	((NamedObject*)(Object*)(ObjectIf*)this)->SetName(n);
}
Spr::NameManagerIf* Spr::NamedObjectIf::GetNameManager(){
	return	((NamedObject*)(Object*)(ObjectIf*)this)->GetNameManager();
}
SPR_IFIMP1(SceneObject, NamedObject);
Spr::SceneIf* Spr::SceneObjectIf::GetScene(){
	return	((SceneObject*)(Object*)(ObjectIf*)this)->GetScene();
}
Spr::SceneObjectIf* Spr::SceneObjectIf::CloneObject(){
	return	((SceneObject*)(Object*)(ObjectIf*)this)->CloneObject();
}
SPR_IFIMP1(ObjectStates, Object);
void Spr::ObjectStatesIf::AllocateState(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->AllocateState(o);
}
void Spr::ObjectStatesIf::ReleaseState(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->ReleaseState(o);
}
size_t Spr::ObjectStatesIf::CalcStateSize(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->CalcStateSize(o);
}
void Spr::ObjectStatesIf::SaveState(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->SaveState(o);
}
void Spr::ObjectStatesIf::LoadState(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->LoadState(o);
}
void Spr::ObjectStatesIf::SingleSave(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->SingleSave(o);
}
void Spr::ObjectStatesIf::SingleLoad(Spr::ObjectIf* o){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->SingleLoad(o);
}
bool Spr::ObjectStatesIf::IsAllocated(){
	return	((ObjectStates*)(Object*)(ObjectIf*)this)->IsAllocated();
}
SPR_IFIMP1(UTTypeDesc, Object);
void Spr::UTTypeDescIf::SetSize(size_t sz){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SetSize(sz);
}
void Spr::UTTypeDescIf::SetAccess(Spr::UTAccessBase* a){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SetAccess(a);
}
void Spr::UTTypeDescIf::SetOffset(int field, int offset){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SetOffset(field, offset);
}
void Spr::UTTypeDescIf::SetIfInfo(const IfInfo* info){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SetIfInfo(info);
}
int Spr::UTTypeDescIf::AddField(std::string pre, std::string ty, std::string n, std::string post){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->AddField(pre, ty, n, post);
}
int Spr::UTTypeDescIf::AddBase(std::string tn){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->AddBase(tn);
}
void Spr::UTTypeDescIf::AddEnumConst(int field, std::string name, int val){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->AddEnumConst(field, name, val);
}
void Spr::UTTypeDescIf::Print(std::ostream& os)const{
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->Print(os);
}
std::string Spr::UTTypeDescIf::GetTypeName()const{
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetTypeName();
}
void Spr::UTTypeDescIf::SetTypeName(const char* s){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SetTypeName(s);
}
size_t Spr::UTTypeDescIf::GetSize(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetSize();
}
bool Spr::UTTypeDescIf::IsPrimitive(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->IsPrimitive();
}
bool Spr::UTTypeDescIf::IsSimple(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->IsSimple();
}
int Spr::UTTypeDescIf::NFields(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->NFields();
}
Spr::UTTypeDescIf* Spr::UTTypeDescIf::GetFieldType(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldType(i);
}
int Spr::UTTypeDescIf::GetFieldLength(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldLength(i);
}
int Spr::UTTypeDescIf::GetFieldVectorSize(int i, const void* base){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldVectorSize(i, base);
}
const char* Spr::UTTypeDescIf::GetFieldLengthName(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldLengthName(i);
}
Spr::UTTypeDescIf::FieldType Spr::UTTypeDescIf::GetFieldVarType(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldVarType(i);
}
bool Spr::UTTypeDescIf::GetFieldIsReference(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldIsReference(i);
}
const char* Spr::UTTypeDescIf::GetFieldName(int i){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldName(i);
}
void* Spr::UTTypeDescIf::GetFieldAddress(int i, void* base, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldAddress(i, base, pos);
}
const void* Spr::UTTypeDescIf::GetFieldAddress(int i, const void* base, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldAddress(i, base, pos);
}
void* Spr::UTTypeDescIf::GetFieldAddressEx(int i, void* base, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetFieldAddressEx(i, base, pos);
}
std::string Spr::UTTypeDescIf::ReadToString(int i, void* base, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->ReadToString(i, base, pos);
}
void Spr::UTTypeDescIf::WriteFromString(std::string from, int i, void* base, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->WriteFromString(from, i, base, pos);
}
const IfInfo* Spr::UTTypeDescIf::GetIfInfoOfType(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->GetIfInfoOfType();
}
bool Spr::UTTypeDescIf::IsBool(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->IsBool();
}
bool Spr::UTTypeDescIf::IsNumber(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->IsNumber();
}
bool Spr::UTTypeDescIf::IsString(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->IsString();
}
bool Spr::UTTypeDescIf::ReadBool(const void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->ReadBool(ptr);
}
void Spr::UTTypeDescIf::WriteBool(bool val, void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->WriteBool(val, ptr);
}
double Spr::UTTypeDescIf::ReadNumber(const void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->ReadNumber(ptr);
}
void Spr::UTTypeDescIf::WriteNumber(double val, void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->WriteNumber(val, ptr);
}
std::string Spr::UTTypeDescIf::ReadString(const void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->ReadString(ptr);
}
void Spr::UTTypeDescIf::WriteString(const char* val, void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->WriteString(val, ptr);
}
void* Spr::UTTypeDescIf::Create(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->Create();
}
void Spr::UTTypeDescIf::Delete(void* ptr){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->Delete(ptr);
}
void* Spr::UTTypeDescIf::VectorPush(void* v){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->VectorPush(v);
}
void Spr::UTTypeDescIf::VectorPop(void* v){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->VectorPop(v);
}
void* Spr::UTTypeDescIf::VectorAt(void* v, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->VectorAt(v, pos);
}
const void* Spr::UTTypeDescIf::VectorAt(const void* v, int pos){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->VectorAt(v, pos);
}
size_t Spr::UTTypeDescIf::VectorSize(const void* v){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->VectorSize(v);
}
size_t Spr::UTTypeDescIf::SizeOfVector(){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->SizeOfVector();
}
void Spr::UTTypeDescIf::Write(std::ostream& os, void* base){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->Write(os, base);
}
void Spr::UTTypeDescIf::Read(std::istream& is, void* base){
	return	((UTTypeDesc*)(Object*)(ObjectIf*)this)->Read(is, base);
}
SPR_IFIMP1(UTTypeDescDb, Object);
void Spr::UTTypeDescDbIf::RegisterDesc(Spr::UTTypeDescIf* n){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->RegisterDesc(n);
}
void Spr::UTTypeDescDbIf::RegisterAlias(const char* src, const char* dest){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->RegisterAlias(src, dest);
}
void Spr::UTTypeDescDbIf::SetPrefix(std::string p){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->SetPrefix(p);
}
Spr::UTTypeDescIf* Spr::UTTypeDescDbIf::Find(std::string tn){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->Find(tn);
}
void Spr::UTTypeDescDbIf::Link(Spr::UTTypeDescDbIf* db){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->Link(db);
}
void Spr::UTTypeDescDbIf::LinkAll(){
	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->LinkAll();
}
bool Spr::UTTypeDescDbIf::LinkCheck(){
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->LinkCheck();
}
void Spr::UTTypeDescDbIf::Print(std::ostream& os)const{
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->Print(os);
}
std::string Spr::UTTypeDescDbIf::GetGroup()const{
	return	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->GetGroup();
}
void Spr::UTTypeDescDbIf::Clear(){
	((UTTypeDescDb*)(Object*)(ObjectIf*)this)->Clear();
}
SPR_IFIMP1(NameManager, NamedObject);
Spr::NamedObjectIf* Spr::NameManagerIf::FindObject(UTString name, UTString cls){
	return	((NameManager*)(Object*)(ObjectIf*)this)->FindObject(name, cls);
}
SPR_IFIMP1(Scene, NameManager);
SPR_IFIMP1(Sdk, NameManager);
SPR_IFIMP1(UTOptimizer, Object);
void Spr::UTOptimizerIf::SetDimension(int dimension){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->SetDimension(dimension);
}
int Spr::UTOptimizerIf::GetDimension(){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->GetDimension();
}
void Spr::UTOptimizerIf::SetInitialValue(const double* initialValue){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->SetInitialValue(initialValue);
}
void Spr::UTOptimizerIf::Initialize(){
	((UTOptimizer*)(Object*)(ObjectIf*)this)->Initialize();
}
double* Spr::UTOptimizerIf::GetPopulation(){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->GetPopulation();
}
void Spr::UTOptimizerIf::SetObjectiveFunctionValue(double value){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->SetObjectiveFunctionValue(value);
}
void Spr::UTOptimizerIf::Next(){
	((UTOptimizer*)(Object*)(ObjectIf*)this)->Next();
}
bool Spr::UTOptimizerIf::IsFinished(){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->IsFinished();
}
double* Spr::UTOptimizerIf::GetResult(){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->GetResult();
}
double Spr::UTOptimizerIf::GetFitness(){
	return	((UTOptimizer*)(Object*)(ObjectIf*)this)->GetFitness();
}
SPR_IFIMP1(UTCMAESOptimizer, UTOptimizer);
void Spr::UTCMAESOptimizerIf::SetInitialValue(const double* initialValue){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->SetInitialValue(initialValue);
}
void Spr::UTCMAESOptimizerIf::SetInitialStdDev(const double* initialStdDev){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->SetInitialStdDev(initialStdDev);
}
int Spr::UTCMAESOptimizerIf::GetCurrentGeneration(){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->GetCurrentGeneration();
}
int Spr::UTCMAESOptimizerIf::GetCurrentPopulation(){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->GetCurrentPopulation();
}
double Spr::UTCMAESOptimizerIf::GetCs(){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->GetCs();
}
double Spr::UTCMAESOptimizerIf::GetLambda(){
	return	((UTCMAESOptimizer*)(Object*)(ObjectIf*)this)->GetLambda();
}
SPR_IFIMP1(UTPerformanceMeasure, Object);
const char* Spr::UTPerformanceMeasureIf::GetName(){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->GetName();
}
int Spr::UTPerformanceMeasureIf::NCounter(){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->NCounter();
}
const char* Spr::UTPerformanceMeasureIf::GetNameOfCounter(int id){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->GetNameOfCounter(id);
}
std::string Spr::UTPerformanceMeasureIf::PrintAll(){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->PrintAll();
}
std::string Spr::UTPerformanceMeasureIf::Print(std::string name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Print(name);
}
std::string Spr::UTPerformanceMeasureIf::Print(int id){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Print(id);
}
void Spr::UTPerformanceMeasureIf::SetUnit(double u){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->SetUnit(u);
}
double Spr::UTPerformanceMeasureIf::GetUnit(){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->GetUnit();
}
double Spr::UTPerformanceMeasureIf::Time(int id){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Time(id);
}
double Spr::UTPerformanceMeasureIf::Time(const char* name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Time(name);
}
Spr::UTLongLong& Spr::UTPerformanceMeasureIf::Count(const char* name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Count(name);
}
Spr::UTLongLong& Spr::UTPerformanceMeasureIf::Count(int id){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->Count(id);
}
int Spr::UTPerformanceMeasureIf::GetId(std::string name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->GetId(name);
}
int Spr::UTPerformanceMeasureIf::FindId(std::string name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->FindId(name);
}
int Spr::UTPerformanceMeasureIf::CreateId(std::string name){
	return	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->CreateId(name);
}
void Spr::UTPerformanceMeasureIf::ClearCounts(){
	((UTPerformanceMeasure*)(Object*)(ObjectIf*)this)->ClearCounts();
}
SPR_IFIMP1(UTTimer, Object);
unsigned int Spr::UTTimerIf::GetID(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetID();
}
unsigned int Spr::UTTimerIf::GetResolution(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetResolution();
}
bool Spr::UTTimerIf::SetResolution(unsigned int r){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->SetResolution(r);
}
unsigned int Spr::UTTimerIf::GetInterval(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetInterval();
}
bool Spr::UTTimerIf::SetInterval(unsigned int i){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->SetInterval(i);
}
bool Spr::UTTimerIf::SetCallback(Spr::UTTimerIf::TimerFunc f, void* arg){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->SetCallback(f, arg);
}
Spr::UTTimerIf::TimerFunc Spr::UTTimerIf::GetCallback(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetCallback();
}
void* Spr::UTTimerIf::GetCallbackArg(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetCallbackArg();
}
Spr::UTTimerIf::Mode Spr::UTTimerIf::GetMode(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->GetMode();
}
bool Spr::UTTimerIf::SetMode(Spr::UTTimerIf::Mode m){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->SetMode(m);
}
bool Spr::UTTimerIf::IsStarted(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->IsStarted();
}
bool Spr::UTTimerIf::IsRunning(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->IsRunning();
}
bool Spr::UTTimerIf::Start(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->Start();
}
bool Spr::UTTimerIf::Stop(){
	return	((UTTimer*)(Object*)(ObjectIf*)this)->Stop();
}
void Spr::UTTimerIf::Call(){
	((UTTimer*)(Object*)(ObjectIf*)this)->Call();
}
SPR_OBJECTIMP0(Object);
SPR_OBJECTIMP1(NamedObject, Object);
SPR_OBJECTIMP1(SceneObject, NamedObject);
SPR_OBJECTIMP1(ObjectStates, Object);
SPR_OBJECTIMP1(NameManager, NamedObject);
SPR_OBJECTIMP1(Scene, NameManager);
SPR_OBJECTIMP1(Sdk, NameManager);
SPR_OBJECTIMP1(UTOptimizer, Object);
SPR_OBJECTIMP1(UTCMAESOptimizer, UTOptimizer);
SPR_OBJECTIMP1(UTPerformanceMeasure, Object);
SPR_OBJECTIMP1(UTTimer, Object);
SPR_OBJECTIMP1(UTTypeDesc, Object);
SPR_OBJECTIMP1(UTTypeDescDb, Object);
}
