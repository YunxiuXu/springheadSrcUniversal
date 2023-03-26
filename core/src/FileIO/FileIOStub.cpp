#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
#include "..\..\include\FileIO\SprFIFile.h"
#include "..\..\include\FileIO\SprFIImport.h"
#include "..\..\include\FileIO\SprFIOpStateHandler.h"
#include "..\..\include\FileIO\SprFISdk.h"
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
#include "..\FileIO\FIFile.h"
#include "..\FileIO\FIFileBinary.h"
#include "..\FileIO\FIFileCOLLADA.h"
#include "..\FileIO\FIFileCOLLADAHandler.h"
#include "..\FileIO\FIFileSpr.h"
#include "..\FileIO\FIFileVrml.h"
#include "..\FileIO\FIFileX.h"
#include "..\FileIO\FIImport.h"
#include "..\FileIO\FileIO.h"
#include "..\FileIO\FILoadContext.h"
#include "..\FileIO\FIOpStateHandler.h"
#include "..\FileIO\FISaveContext.h"
#include "..\FileIO\FISdk.h"
#include "..\FileIO\FISpirit.h"
namespace Spr{

void RegisterTypeDescFileIO(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::FIFileSprDesc* pFIFileSprDesc = NULL;
	desc = UTTypeDescIf::Create("FIFileSprDesc");
	desc->SetSize(sizeof(Spr::FIFileSprDesc));
	desc->SetIfInfo(FIFileSprIf::GetIfInfoStatic());
	((IfInfo*)FIFileSprIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FIFileSprDesc>);
	db->RegisterDesc(desc);
	Spr::FIFileXDesc* pFIFileXDesc = NULL;
	desc = UTTypeDescIf::Create("FIFileXDesc");
	desc->SetSize(sizeof(Spr::FIFileXDesc));
	desc->SetIfInfo(FIFileXIf::GetIfInfoStatic());
	((IfInfo*)FIFileXIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FIFileXDesc>);
	db->RegisterDesc(desc);
	Spr::FIFileVRMLDesc* pFIFileVRMLDesc = NULL;
	desc = UTTypeDescIf::Create("FIFileVRMLDesc");
	desc->SetSize(sizeof(Spr::FIFileVRMLDesc));
	desc->SetIfInfo(FIFileVRMLIf::GetIfInfoStatic());
	((IfInfo*)FIFileVRMLIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FIFileVRMLDesc>);
	db->RegisterDesc(desc);
	Spr::FIFileCOLLADADesc* pFIFileCOLLADADesc = NULL;
	desc = UTTypeDescIf::Create("FIFileCOLLADADesc");
	desc->SetSize(sizeof(Spr::FIFileCOLLADADesc));
	desc->SetIfInfo(FIFileCOLLADAIf::GetIfInfoStatic());
	((IfInfo*)FIFileCOLLADAIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FIFileCOLLADADesc>);
	db->RegisterDesc(desc);
	Spr::FIFileBinaryDesc* pFIFileBinaryDesc = NULL;
	desc = UTTypeDescIf::Create("FIFileBinaryDesc");
	desc->SetSize(sizeof(Spr::FIFileBinaryDesc));
	desc->SetIfInfo(FIFileBinaryIf::GetIfInfoStatic());
	((IfInfo*)FIFileBinaryIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FIFileBinaryDesc>);
	db->RegisterDesc(desc);
	Spr::ImportDesc* pImportDesc = NULL;
	desc = UTTypeDescIf::Create("ImportDesc");
	desc->SetSize(sizeof(Spr::ImportDesc));
	desc->SetIfInfo(ImportIf::GetIfInfoStatic());
	((IfInfo*)ImportIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::ImportDesc>);
	field = desc->AddField("", "string", "path", "");
	desc->SetOffset(field, int((char*)&(pImportDesc->path) - (char*)pImportDesc));
	db->RegisterDesc(desc);
	SprCOLLADA::physics_materialCommon* pphysics_materialCommon = NULL;
	desc = UTTypeDescIf::Create("physics_materialCommon");
	desc->SetSize(sizeof(SprCOLLADA::physics_materialCommon));
	desc->SetAccess(DBG_NEW UTAccess<SprCOLLADA::physics_materialCommon>);
	field = desc->AddField("", "float", "dynamic_friction", "");
	desc->SetOffset(field, int((char*)&(pphysics_materialCommon->dynamic_friction) - (char*)pphysics_materialCommon));
	field = desc->AddField("", "float", "restitution", "");
	desc->SetOffset(field, int((char*)&(pphysics_materialCommon->restitution) - (char*)pphysics_materialCommon));
	field = desc->AddField("", "float", "static_friction", "");
	desc->SetOffset(field, int((char*)&(pphysics_materialCommon->static_friction) - (char*)pphysics_materialCommon));
	db->RegisterDesc(desc);
	SprCOLLADA::physics_material* pphysics_material = NULL;
	desc = UTTypeDescIf::Create("physics_material");
	desc->SetSize(sizeof(SprCOLLADA::physics_material));
	desc->SetAccess(DBG_NEW UTAccess<SprCOLLADA::physics_material>);
	field = desc->AddField("", "physics_materialCommon", "technique_common", "");
	desc->SetOffset(field, int((char*)&(pphysics_material->technique_common) - (char*)pphysics_material));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(FIFile, Object);
bool Spr::FIFileIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFile*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFile*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
void Spr::FIFileIf::SetImport(ImportIf* import){
	return	((FIFile*)(Object*)(ObjectIf*)this)->SetImport(import);
}
ImportIf* Spr::FIFileIf::GetImport(){
	return	((FIFile*)(Object*)(ObjectIf*)this)->GetImport();
}
void Spr::FIFileIf::SetDSTR(bool f){
	return	((FIFile*)(Object*)(ObjectIf*)this)->SetDSTR(f);
}
SPR_IFIMP1(FIFileSpr, FIFile);
bool Spr::FIFileSprIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileSpr*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileSprIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileSpr*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
SPR_IFIMP1(FIFileX, FIFile);
bool Spr::FIFileXIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileX*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileXIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileX*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
SPR_IFIMP1(FIFileVRML, FIFile);
bool Spr::FIFileVRMLIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileVRML*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileVRMLIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileVRML*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
SPR_IFIMP1(FIFileCOLLADA, FIFile);
bool Spr::FIFileCOLLADAIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileCOLLADA*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileCOLLADAIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileCOLLADA*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
SPR_IFIMP1(FIFileBinary, FIFile);
bool Spr::FIFileBinaryIf::Load(Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileBinary*)(Object*)(ObjectIf*)this)->Load(objs, fn);
}
bool Spr::FIFileBinaryIf::Save(const Spr::ObjectIfs& objs, const char* fn){
	return	((FIFileBinary*)(Object*)(ObjectIf*)this)->Save(objs, fn);
}
SPR_IFIMP1(Import, Object);
void Spr::ImportIf::SetLoadOnly(bool on){
	return	((Import*)(Object*)(ObjectIf*)this)->SetLoadOnly(on);
}
SPR_IFIMP1(FIOpStateHandler, Object);
void Spr::FIOpStateHandlerIf::saveToFile(Spr::ObjectIf* objif, char* filename, float fileVersion){
	return	((FIOpStateHandler*)(Object*)(ObjectIf*)this)->saveToFile(objif, filename, fileVersion);
}
void Spr::FIOpStateHandlerIf::loadFromFile(Spr::ObjectIf* objif, char* filename, bool checkName, float fileVersion){
	return	((FIOpStateHandler*)(Object*)(ObjectIf*)this)->loadFromFile(objif, filename, checkName, fileVersion);
}
SPR_IFIMP1(FISdk, Sdk);
Spr::FIFileXIf* Spr::FISdkIf::CreateFileX(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileX();
}
Spr::FIFileSprIf* Spr::FISdkIf::CreateFileSpr(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileSpr();
}
Spr::FIFileVRMLIf* Spr::FISdkIf::CreateFileVRML(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileVRML();
}
Spr::FIFileCOLLADAIf* Spr::FISdkIf::CreateFileCOLLADA(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileCOLLADA();
}
Spr::FIFileBinaryIf* Spr::FISdkIf::CreateFileBinary(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileBinary();
}
Spr::FIFileIf* Spr::FISdkIf::CreateFile(const IfInfo* ii){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFile(ii);
}
Spr::FIFileIf* Spr::FISdkIf::CreateFileFromExt(UTString filename){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateFileFromExt(filename);
}
Spr::ImportIf* Spr::FISdkIf::CreateImport(){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateImport();
}
Spr::ImportIf* Spr::FISdkIf::CreateImport(Spr::ImportIf* parent, UTString path, Spr::ObjectIf* owner, const Spr::ObjectIfs& children){
	return	((FISdk*)(Object*)(ObjectIf*)this)->CreateImport(parent, path, owner, children);
}
bool Spr::FISdkIf::DelChildObject(Spr::ObjectIf* o){
	return	((FISdk*)(Object*)(ObjectIf*)this)->DelChildObject(o);
}
void Spr::FISdkIf::Clear(){
	((FISdk*)(Object*)(ObjectIf*)this)->Clear();
}
SPR_OBJECTIMP_ABST1(FIFile, Object);
SPR_OBJECTIMP1(FIFileBinary, FIFile);
SPR_OBJECTIMP1(FIFileCOLLADA, FIFile);
SPR_OBJECTIMP1(FIFileSpr, FIFile);
SPR_OBJECTIMP1(FIFileVRML, FIFile);
SPR_OBJECTIMP1(FIFileX, FIFile);
SPR_OBJECTIMP1(Import, Object);
SPR_OBJECTIMP1(FIOpStateHandler, Object);
SPR_OBJECTIMP1(FISdk, Sdk);
}
