#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
#include "..\..\include\Graphics\SprGRBlendMesh.h"
#include "..\..\include\Graphics\SprGRFrame.h"
#include "..\..\include\Graphics\SprGRMesh.h"
#include "..\..\include\Graphics\SprGRRender.h"
#include "..\..\include\Graphics\SprGRScene.h"
#include "..\..\include\Graphics\SprGRSdk.h"
#include "..\..\include\Graphics\SprGRShader.h"
#include "..\..\include\Graphics\SprGRSphere.h"
#include "..\..\include\Graphics\SprGRVertex.h"
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
#include "..\Graphics\Graphics.h"
#include "..\Graphics\GRBlendMesh.h"
#include "..\Graphics\GRDeviceGL.h"
#include "..\Graphics\GRDrawEllipsoid.h"
#include "..\Graphics\GRFrame.h"
#include "..\Graphics\GRLoadBmp.h"
#include "..\Graphics\GRMesh.h"
#include "..\Graphics\GRRender.h"
#include "..\Graphics\GRScene.h"
#include "..\Graphics\GRSdk.h"
#include "..\Graphics\GRSphere.h"
namespace Spr{

void RegisterTypeDescGraphics(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::GRBlendMeshDesc* pGRBlendMeshDesc = NULL;
	desc = UTTypeDescIf::Create("GRBlendMeshDesc");
	desc->SetSize(sizeof(Spr::GRBlendMeshDesc));
	desc->SetIfInfo(GRBlendMeshIf::GetIfInfoStatic());
	((IfInfo*)GRBlendMeshIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRBlendMeshDesc>);
	field = desc->AddField("vector", "Vec3f", "positions", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->positions) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec3f", "normals", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->normals) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec4f", "colors", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->colors) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec2f", "texCoords", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->texCoords) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "size_t", "faces", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->faces) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec4f", "blends", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->blends) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec4f", "matrixIndices", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->matrixIndices) - (char*)pGRBlendMeshDesc));
	field = desc->AddField("vector", "Vec4f", "numMatrix", "");
	desc->SetOffset(field, int((char*)&(pGRBlendMeshDesc->numMatrix) - (char*)pGRBlendMeshDesc));
	db->RegisterDesc(desc);
	Spr::GRVisualDesc* pGRVisualDesc = NULL;
	desc = UTTypeDescIf::Create("GRVisualDesc");
	desc->SetSize(sizeof(Spr::GRVisualDesc));
	desc->SetIfInfo(GRVisualIf::GetIfInfoStatic());
	((IfInfo*)GRVisualIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRVisualDesc>);
	db->RegisterDesc(desc);
	Spr::GRFrameTransformMatrix* pGRFrameTransformMatrix = NULL;
	desc = UTTypeDescIf::Create("GRFrameTransformMatrix");
	desc->SetSize(sizeof(Spr::GRFrameTransformMatrix));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRFrameTransformMatrix>);
	field = desc->AddField("", "Affinef", "transform", "");
	desc->SetOffset(field, int((char*)&(pGRFrameTransformMatrix->transform) - (char*)pGRFrameTransformMatrix));
	db->RegisterDesc(desc);
	Spr::GRFrameDesc* pGRFrameDesc = NULL;
	desc = UTTypeDescIf::Create("GRFrameDesc");
	desc->SetSize(sizeof(Spr::GRFrameDesc));
	desc->SetIfInfo(GRFrameIf::GetIfInfoStatic());
	((IfInfo*)GRFrameIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRFrameDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRFrameDesc - (char*)pGRFrameDesc));
	field = desc->AddField("", "Affinef", "transform", "");
	desc->SetOffset(field, int((char*)&(pGRFrameDesc->transform) - (char*)pGRFrameDesc));
	db->RegisterDesc(desc);
	Spr::GRDummyFrameDesc* pGRDummyFrameDesc = NULL;
	desc = UTTypeDescIf::Create("GRDummyFrameDesc");
	desc->SetSize(sizeof(Spr::GRDummyFrameDesc));
	desc->SetIfInfo(GRDummyFrameIf::GetIfInfoStatic());
	((IfInfo*)GRDummyFrameIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRDummyFrameDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRDummyFrameDesc - (char*)pGRDummyFrameDesc));
	db->RegisterDesc(desc);
	Spr::GRKey* pGRKey = NULL;
	desc = UTTypeDescIf::Create("GRKey");
	desc->SetSize(sizeof(Spr::GRKey));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRKey>);
	field = desc->AddField("", "unsigned", "time", "");
	desc->SetOffset(field, int((char*)&(pGRKey->time) - (char*)pGRKey));
	field = desc->AddField("vector", "float", "values", "");
	desc->SetOffset(field, int((char*)&(pGRKey->values) - (char*)pGRKey));
	db->RegisterDesc(desc);
	Spr::GRAnimationKey* pGRAnimationKey = NULL;
	desc = UTTypeDescIf::Create("GRAnimationKey");
	desc->SetSize(sizeof(Spr::GRAnimationKey));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRAnimationKey>);
	field = desc->AddField("", "int", "keyType", "");
	desc->SetOffset(field, int((char*)&(pGRAnimationKey->keyType) - (char*)pGRAnimationKey));
	field = desc->AddField("vector", "GRKey", "keys", "");
	desc->SetOffset(field, int((char*)&(pGRAnimationKey->keys) - (char*)pGRAnimationKey));
	db->RegisterDesc(desc);
	Spr::GRAnimationDesc* pGRAnimationDesc = NULL;
	desc = UTTypeDescIf::Create("GRAnimationDesc");
	desc->SetSize(sizeof(Spr::GRAnimationDesc));
	desc->SetIfInfo(GRAnimationIf::GetIfInfoStatic());
	((IfInfo*)GRAnimationIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRAnimationDesc>);
	field = desc->AddField("vector", "GRAnimationKey", "keys", "");
	desc->SetOffset(field, int((char*)&(pGRAnimationDesc->keys) - (char*)pGRAnimationDesc));
	db->RegisterDesc(desc);
	Spr::GRAnimationSetDesc* pGRAnimationSetDesc = NULL;
	desc = UTTypeDescIf::Create("GRAnimationSetDesc");
	desc->SetSize(sizeof(Spr::GRAnimationSetDesc));
	desc->SetIfInfo(GRAnimationSetIf::GetIfInfoStatic());
	((IfInfo*)GRAnimationSetIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRAnimationSetDesc>);
	db->RegisterDesc(desc);
	Spr::GRAnimationControllerDesc* pGRAnimationControllerDesc = NULL;
	desc = UTTypeDescIf::Create("GRAnimationControllerDesc");
	desc->SetSize(sizeof(Spr::GRAnimationControllerDesc));
	desc->SetIfInfo(GRAnimationControllerIf::GetIfInfoStatic());
	((IfInfo*)GRAnimationControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRAnimationControllerDesc>);
	db->RegisterDesc(desc);
	Spr::GRMeshFace* pGRMeshFace = NULL;
	desc = UTTypeDescIf::Create("GRMeshFace");
	desc->SetSize(sizeof(Spr::GRMeshFace));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRMeshFace>);
	field = desc->AddField("", "int", "nVertices", "");
	desc->SetOffset(field, int((char*)&(pGRMeshFace->nVertices) - (char*)pGRMeshFace));
	field = desc->AddField("", "int", "indices", "4");
	desc->SetOffset(field, int((char*)&(pGRMeshFace->indices) - (char*)pGRMeshFace));
	db->RegisterDesc(desc);
	Spr::GRSkinWeightDesc* pGRSkinWeightDesc = NULL;
	desc = UTTypeDescIf::Create("GRSkinWeightDesc");
	desc->SetSize(sizeof(Spr::GRSkinWeightDesc));
	desc->SetIfInfo(GRSkinWeightIf::GetIfInfoStatic());
	((IfInfo*)GRSkinWeightIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRSkinWeightDesc>);
	field = desc->AddField("", "Affinef", "offset", "");
	desc->SetOffset(field, int((char*)&(pGRSkinWeightDesc->offset) - (char*)pGRSkinWeightDesc));
	field = desc->AddField("vector", "unsigned", "indices", "");
	desc->SetOffset(field, int((char*)&(pGRSkinWeightDesc->indices) - (char*)pGRSkinWeightDesc));
	field = desc->AddField("vector", "float", "weights", "");
	desc->SetOffset(field, int((char*)&(pGRSkinWeightDesc->weights) - (char*)pGRSkinWeightDesc));
	db->RegisterDesc(desc);
	Spr::GRMeshDesc* pGRMeshDesc = NULL;
	desc = UTTypeDescIf::Create("GRMeshDesc");
	desc->SetSize(sizeof(Spr::GRMeshDesc));
	desc->SetIfInfo(GRMeshIf::GetIfInfoStatic());
	((IfInfo*)GRMeshIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRMeshDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRMeshDesc - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "Vec3f", "vertices", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->vertices) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "GRMeshFace", "faces", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->faces) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "Vec3f", "normals", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->normals) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "GRMeshFace", "faceNormals", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->faceNormals) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "Vec4f", "colors", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->colors) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "Vec2f", "texCoords", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->texCoords) - (char*)pGRMeshDesc));
	field = desc->AddField("vector", "int", "materialList", "");
	desc->SetOffset(field, int((char*)&(pGRMeshDesc->materialList) - (char*)pGRMeshDesc));
	db->RegisterDesc(desc);
	Spr::GRLightDesc* pGRLightDesc = NULL;
	desc = UTTypeDescIf::Create("GRLightDesc");
	desc->SetSize(sizeof(Spr::GRLightDesc));
	desc->SetIfInfo(GRLightIf::GetIfInfoStatic());
	((IfInfo*)GRLightIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRLightDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRLightDesc - (char*)pGRLightDesc));
	field = desc->AddField("", "Vec4f", "ambient", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->ambient) - (char*)pGRLightDesc));
	field = desc->AddField("", "Vec4f", "diffuse", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->diffuse) - (char*)pGRLightDesc));
	field = desc->AddField("", "Vec4f", "specular", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->specular) - (char*)pGRLightDesc));
	field = desc->AddField("", "Vec4f", "position", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->position) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "range", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->range) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "attenuation0", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->attenuation0) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "attenuation1", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->attenuation1) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "attenuation2", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->attenuation2) - (char*)pGRLightDesc));
	field = desc->AddField("", "Vec3f", "spotDirection", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->spotDirection) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "spotFalloff", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->spotFalloff) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "spotInner", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->spotInner) - (char*)pGRLightDesc));
	field = desc->AddField("", "float", "spotCutoff", "");
	desc->SetOffset(field, int((char*)&(pGRLightDesc->spotCutoff) - (char*)pGRLightDesc));
	db->RegisterDesc(desc);
	Spr::GRMaterialDesc* pGRMaterialDesc = NULL;
	desc = UTTypeDescIf::Create("GRMaterialDesc");
	desc->SetSize(sizeof(Spr::GRMaterialDesc));
	desc->SetIfInfo(GRMaterialIf::GetIfInfoStatic());
	((IfInfo*)GRMaterialIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRMaterialDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRMaterialDesc - (char*)pGRMaterialDesc));
	field = desc->AddField("", "Vec4f", "ambient", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->ambient) - (char*)pGRMaterialDesc));
	field = desc->AddField("", "Vec4f", "diffuse", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->diffuse) - (char*)pGRMaterialDesc));
	field = desc->AddField("", "Vec4f", "specular", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->specular) - (char*)pGRMaterialDesc));
	field = desc->AddField("", "Vec4f", "emissive", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->emissive) - (char*)pGRMaterialDesc));
	field = desc->AddField("", "float", "power", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->power) - (char*)pGRMaterialDesc));
	field = desc->AddField("", "string", "texname", "");
	desc->SetOffset(field, int((char*)&(pGRMaterialDesc->texname) - (char*)pGRMaterialDesc));
	db->RegisterDesc(desc);
	Spr::GRCameraDesc* pGRCameraDesc = NULL;
	desc = UTTypeDescIf::Create("GRCameraDesc");
	desc->SetSize(sizeof(Spr::GRCameraDesc));
	desc->SetIfInfo(GRCameraIf::GetIfInfoStatic());
	((IfInfo*)GRCameraIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRCameraDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRCameraDesc - (char*)pGRCameraDesc));
	field = desc->AddField("", "Vec2f", "size", "");
	desc->SetOffset(field, int((char*)&(pGRCameraDesc->size) - (char*)pGRCameraDesc));
	field = desc->AddField("", "Vec2f", "center", "");
	desc->SetOffset(field, int((char*)&(pGRCameraDesc->center) - (char*)pGRCameraDesc));
	field = desc->AddField("", "float", "front", "");
	desc->SetOffset(field, int((char*)&(pGRCameraDesc->front) - (char*)pGRCameraDesc));
	field = desc->AddField("", "float", "back", "");
	desc->SetOffset(field, int((char*)&(pGRCameraDesc->back) - (char*)pGRCameraDesc));
	field = desc->AddField("", "int", "type", "");
	desc->SetOffset(field, int((char*)&(pGRCameraDesc->type) - (char*)pGRCameraDesc));
	db->RegisterDesc(desc);
	Spr::GRShadowLightDesc* pGRShadowLightDesc = NULL;
	desc = UTTypeDescIf::Create("GRShadowLightDesc");
	desc->SetSize(sizeof(Spr::GRShadowLightDesc));
	desc->SetIfInfo(GRShadowLightIf::GetIfInfoStatic());
	((IfInfo*)GRShadowLightIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRShadowLightDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRShadowLightDesc - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "bool", "directional", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->directional) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "Vec3f", "position", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->position) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "Vec3f", "lookat", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->lookat) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "Vec3f", "up", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->up) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "Vec2f", "size", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->size) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "float", "fov", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->fov) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "float", "front", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->front) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "float", "back", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->back) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "int", "texWidth", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->texWidth) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "int", "texHeight", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->texHeight) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "float", "offset", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->offset) - (char*)pGRShadowLightDesc));
	field = desc->AddField("", "Vec4f", "color", "");
	desc->SetOffset(field, int((char*)&(pGRShadowLightDesc->color) - (char*)pGRShadowLightDesc));
	db->RegisterDesc(desc);
	Spr::GRSceneDesc* pGRSceneDesc = NULL;
	desc = UTTypeDescIf::Create("GRSceneDesc");
	desc->SetSize(sizeof(Spr::GRSceneDesc));
	desc->SetIfInfo(GRSceneIf::GetIfInfoStatic());
	((IfInfo*)GRSceneIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRSceneDesc>);
	db->RegisterDesc(desc);
	Spr::GRSdkDesc* pGRSdkDesc = NULL;
	desc = UTTypeDescIf::Create("GRSdkDesc");
	desc->SetSize(sizeof(Spr::GRSdkDesc));
	desc->SetIfInfo(GRSdkIf::GetIfInfoStatic());
	((IfInfo*)GRSdkIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRSdkDesc>);
	db->RegisterDesc(desc);
	Spr::SFBlendLocation* pSFBlendLocation = NULL;
	desc = UTTypeDescIf::Create("SFBlendLocation");
	desc->SetSize(sizeof(Spr::SFBlendLocation));
	desc->SetAccess(DBG_NEW UTAccess<Spr::SFBlendLocation>);
	field = desc->AddField("", "unsigned", "uBlendMatrix", "");
	desc->SetOffset(field, int((char*)&(pSFBlendLocation->uBlendMatrix) - (char*)pSFBlendLocation));
	field = desc->AddField("", "unsigned", "aWeight", "");
	desc->SetOffset(field, int((char*)&(pSFBlendLocation->aWeight) - (char*)pSFBlendLocation));
	field = desc->AddField("", "unsigned", "aMatrixIndices", "");
	desc->SetOffset(field, int((char*)&(pSFBlendLocation->aMatrixIndices) - (char*)pSFBlendLocation));
	field = desc->AddField("", "unsigned", "aNumMatrix", "");
	desc->SetOffset(field, int((char*)&(pSFBlendLocation->aNumMatrix) - (char*)pSFBlendLocation));
	db->RegisterDesc(desc);
	Spr::GRShaderDesc* pGRShaderDesc = NULL;
	desc = UTTypeDescIf::Create("GRShaderDesc");
	desc->SetSize(sizeof(Spr::GRShaderDesc));
	desc->SetIfInfo(GRShaderIf::GetIfInfoStatic());
	((IfInfo*)GRShaderIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRShaderDesc>);
	field = desc->AddField("", "string", "vsname", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->vsname) - (char*)pGRShaderDesc));
	field = desc->AddField("", "string", "fsname", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->fsname) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bEnableLighting", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bEnableLighting) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bEnableTexture2D", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bEnableTexture2D) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bEnableTexture3D", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bEnableTexture3D) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bShadowCreate", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bShadowCreate) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bShadowRender", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bShadowRender) - (char*)pGRShaderDesc));
	field = desc->AddField("", "bool", "bEnableBlending", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->bEnableBlending) - (char*)pGRShaderDesc));
	field = desc->AddField("", "int", "numBlendMatrices", "");
	desc->SetOffset(field, int((char*)&(pGRShaderDesc->numBlendMatrices) - (char*)pGRShaderDesc));
	db->RegisterDesc(desc);
	Spr::GRShaderFormat* pGRShaderFormat = NULL;
	desc = UTTypeDescIf::Create("GRShaderFormat");
	desc->SetSize(sizeof(Spr::GRShaderFormat));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRShaderFormat>);
	db->RegisterDesc(desc);
	Spr::GRSphereDesc* pGRSphereDesc = NULL;
	desc = UTTypeDescIf::Create("GRSphereDesc");
	desc->SetSize(sizeof(Spr::GRSphereDesc));
	desc->SetIfInfo(GRSphereIf::GetIfInfoStatic());
	((IfInfo*)GRSphereIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRSphereDesc>);
	field = desc->AddBase("GRVisualDesc");
	desc->SetOffset(field, int((char*)(GRVisualDesc*)pGRSphereDesc - (char*)pGRSphereDesc));
	field = desc->AddField("", "float", "radius", "");
	desc->SetOffset(field, int((char*)&(pGRSphereDesc->radius) - (char*)pGRSphereDesc));
	field = desc->AddField("", "int", "slices", "");
	desc->SetOffset(field, int((char*)&(pGRSphereDesc->slices) - (char*)pGRSphereDesc));
	field = desc->AddField("", "int", "stacks", "");
	desc->SetOffset(field, int((char*)&(pGRSphereDesc->stacks) - (char*)pGRSphereDesc));
	db->RegisterDesc(desc);
	Spr::GRVertexElement* pGRVertexElement = NULL;
	desc = UTTypeDescIf::Create("GRVertexElement");
	desc->SetSize(sizeof(Spr::GRVertexElement));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRVertexElement>);
	field = desc->AddField("", "short", "stream", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->stream) - (char*)pGRVertexElement));
	field = desc->AddField("", "short", "offset", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->offset) - (char*)pGRVertexElement));
	field = desc->AddField("", "unsigned char", "type", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->type) - (char*)pGRVertexElement));
	field = desc->AddField("", "unsigned char", "method", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->method) - (char*)pGRVertexElement));
	field = desc->AddField("", "unsigned char", "usage", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->usage) - (char*)pGRVertexElement));
	field = desc->AddField("", "unsigned char", "usageIndex", "");
	desc->SetOffset(field, int((char*)&(pGRVertexElement->usageIndex) - (char*)pGRVertexElement));
	db->RegisterDesc(desc);
	Spr::GRVertexArray* pGRVertexArray = NULL;
	desc = UTTypeDescIf::Create("GRVertexArray");
	desc->SetSize(sizeof(Spr::GRVertexArray));
	desc->SetAccess(DBG_NEW UTAccess<Spr::GRVertexArray>);
	field = desc->AddField("", "GRVertexElement", "format", "");
	desc->SetOffset(field, int((char*)&(pGRVertexArray->format) - (char*)pGRVertexArray));
	field = desc->AddField("pointer", "void", "buffer", "");
	desc->SetOffset(field, int((char*)&(pGRVertexArray->buffer) - (char*)pGRVertexArray));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(GRBlendMesh, GRVisual);
SPR_IFIMP1(GRVisual, SceneObject);
void Spr::GRVisualIf::Render(Spr::GRRenderIf* r){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->Render(r);
}
void Spr::GRVisualIf::Rendered(Spr::GRRenderIf* r){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->Rendered(r);
}
void Spr::GRVisualIf::Enable(bool on){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->Enable(on);
}
bool Spr::GRVisualIf::IsEnabled(){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->IsEnabled();
}
Spr::GRMaterialIf* Spr::GRVisualIf::GetMaterial(){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->GetMaterial();
}
void Spr::GRVisualIf::SetMaterial(Spr::GRMaterialIf* mat){
	return	((GRVisual*)(Object*)(ObjectIf*)this)->SetMaterial(mat);
}
SPR_IFIMP1(GRFrame, GRVisual);
Spr::GRFrameIf* Spr::GRFrameIf::GetParent(){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->GetParent();
}
void Spr::GRFrameIf::SetParent(Spr::GRFrameIf* fr){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->SetParent(fr);
}
int Spr::GRFrameIf::NChildren(){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->NChildren();
}
Spr::GRVisualIf** Spr::GRFrameIf::GetChildren(){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->GetChildren();
}
Affinef Spr::GRFrameIf::GetTransform(){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->GetTransform();
}
Affinef Spr::GRFrameIf::GetWorldTransform(){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->GetWorldTransform();
}
void Spr::GRFrameIf::SetTransform(const Affinef& af){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->SetTransform(af);
}
bool Spr::GRFrameIf::CalcBBox(Vec3f& bbmin, Vec3f& bbmax, const Affinef& aff){
	return	((GRFrame*)(Object*)(ObjectIf*)this)->CalcBBox(bbmin, bbmax, aff);
}
SPR_IFIMP1(GRDummyFrame, GRVisual);
SPR_IFIMP1(GRAnimation, SceneObject);
void Spr::GRAnimationIf::BlendPose(float time, float weight){
	return	((GRAnimation*)(Object*)(ObjectIf*)this)->BlendPose(time, weight);
}
void Spr::GRAnimationIf::ResetPose(){
	((GRAnimation*)(Object*)(ObjectIf*)this)->ResetPose();
}
void Spr::GRAnimationIf::LoadInitialPose(){
	((GRAnimation*)(Object*)(ObjectIf*)this)->LoadInitialPose();
}
Spr::GRAnimationKey Spr::GRAnimationIf::GetAnimationKey(int n){
	return	((GRAnimation*)(Object*)(ObjectIf*)this)->GetAnimationKey(n);
}
int Spr::GRAnimationIf::NAnimationKey(){
	return	((GRAnimation*)(Object*)(ObjectIf*)this)->NAnimationKey();
}
void Spr::GRAnimationIf::DeletePose(float t){
	return	((GRAnimation*)(Object*)(ObjectIf*)this)->DeletePose(t);
}
SPR_IFIMP1(GRAnimationSet, SceneObject);
void Spr::GRAnimationSetIf::BlendPose(float time, float weight){
	return	((GRAnimationSet*)(Object*)(ObjectIf*)this)->BlendPose(time, weight);
}
void Spr::GRAnimationSetIf::ResetPose(){
	((GRAnimationSet*)(Object*)(ObjectIf*)this)->ResetPose();
}
void Spr::GRAnimationSetIf::LoadInitialPose(){
	((GRAnimationSet*)(Object*)(ObjectIf*)this)->LoadInitialPose();
}
Spr::ObjectIf* Spr::GRAnimationSetIf::GetChildObject(size_t p){
	return	((GRAnimationSet*)(Object*)(ObjectIf*)this)->GetChildObject(p);
}
void Spr::GRAnimationSetIf::SetCurrentAnimationPose(float t){
	return	((GRAnimationSet*)(Object*)(ObjectIf*)this)->SetCurrentAnimationPose(t);
}
void Spr::GRAnimationSetIf::DeleteAnimationPose(float t){
	return	((GRAnimationSet*)(Object*)(ObjectIf*)this)->DeleteAnimationPose(t);
}
float Spr::GRAnimationSetIf::GetLastKeyTime(){
	return	((GRAnimationSet*)(Object*)(ObjectIf*)this)->GetLastKeyTime();
}
SPR_IFIMP1(GRAnimationController, SceneObject);
void Spr::GRAnimationControllerIf::BlendPose(UTString name, float time, float weight){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->BlendPose(name, time, weight);
}
void Spr::GRAnimationControllerIf::ResetPose(){
	((GRAnimationController*)(Object*)(ObjectIf*)this)->ResetPose();
}
void Spr::GRAnimationControllerIf::LoadInitialPose(){
	((GRAnimationController*)(Object*)(ObjectIf*)this)->LoadInitialPose();
}
bool Spr::GRAnimationControllerIf::AddChildObject(Spr::ObjectIf* o){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->AddChildObject(o);
}
bool Spr::GRAnimationControllerIf::DelChildObject(Spr::ObjectIf* o){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->DelChildObject(o);
}
size_t Spr::GRAnimationControllerIf::NChildObject(){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->NChildObject();
}
Spr::ObjectIf* Spr::GRAnimationControllerIf::GetChildObject(size_t p){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->GetChildObject(p);
}
Spr::GRAnimationSetIf* Spr::GRAnimationControllerIf::GetAnimationSet(size_t p){
	return	((GRAnimationController*)(Object*)(ObjectIf*)this)->GetAnimationSet(p);
}
SPR_IFIMP1(GRSkinWeight, GRVisual);
SPR_IFIMP1(GRMesh, GRVisual);
int Spr::GRMeshIf::NVertex(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->NVertex();
}
int Spr::GRMeshIf::NTriangle(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->NTriangle();
}
int Spr::GRMeshIf::NFace(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->NFace();
}
Vec3f* Spr::GRMeshIf::GetVertices(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetVertices();
}
Vec3f* Spr::GRMeshIf::GetNormals(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetNormals();
}
Vec4f* Spr::GRMeshIf::GetColors(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetColors();
}
Vec2f* Spr::GRMeshIf::GetTexCoords(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetTexCoords();
}
Spr::GRMeshFace* Spr::GRMeshIf::GetFaces(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetFaces();
}
Spr::GRMeshFace* Spr::GRMeshIf::GetFaceNormals(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetFaceNormals();
}
int* Spr::GRMeshIf::GetMaterialIndices(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->GetMaterialIndices();
}
void Spr::GRMeshIf::SwitchCoordinate(){
	((GRMesh*)(Object*)(ObjectIf*)this)->SwitchCoordinate();
}
void Spr::GRMeshIf::EnableTex3D(bool on){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->EnableTex3D(on);
}
bool Spr::GRMeshIf::IsTex3D(){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->IsTex3D();
}
Spr::GRSkinWeightIf* Spr::GRMeshIf::CreateSkinWeight(const Spr::GRSkinWeightDesc& desc){
	return	((GRMesh*)(Object*)(ObjectIf*)this)->CreateSkinWeight(desc);
}
SPR_IFIMP1(GRLight, GRVisual);
SPR_IFIMP1(GRMaterial, GRVisual);
bool Spr::GRMaterialIf::IsOpaque()const{
	return	((GRMaterial*)(Object*)(ObjectIf*)this)->IsOpaque();
}
SPR_IFIMP1(GRCamera, GRVisual);
Spr::GRFrameIf* Spr::GRCameraIf::GetFrame(){
	return	((GRCamera*)(Object*)(ObjectIf*)this)->GetFrame();
}
void Spr::GRCameraIf::SetFrame(Spr::GRFrameIf* fr){
	return	((GRCamera*)(Object*)(ObjectIf*)this)->SetFrame(fr);
}
SPR_IFIMP1(GRShadowLight, GRVisual);
SPR_IFIMP1(GRRenderBase, Object);
void Spr::GRRenderBaseIf::SetViewport(Vec2f pos, Vec2f sz){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetViewport(pos, sz);
}
Vec2f Spr::GRRenderBaseIf::GetViewportPos(){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetViewportPos();
}
Vec2f Spr::GRRenderBaseIf::GetViewportSize(){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetViewportSize();
}
void Spr::GRRenderBaseIf::ClearBuffer(bool color, bool depth){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->ClearBuffer(color, depth);
}
void Spr::GRRenderBaseIf::SwapBuffers(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->SwapBuffers();
}
void Spr::GRRenderBaseIf::GetClearColor(Vec4f& color){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetClearColor(color);
}
void Spr::GRRenderBaseIf::SetClearColor(const Vec4f& color){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetClearColor(color);
}
void Spr::GRRenderBaseIf::BeginScene(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->BeginScene();
}
void Spr::GRRenderBaseIf::EndScene(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->EndScene();
}
void Spr::GRRenderBaseIf::SetViewMatrix(const Affinef& afv){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetViewMatrix(afv);
}
void Spr::GRRenderBaseIf::GetViewMatrix(Affinef& afv){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetViewMatrix(afv);
}
void Spr::GRRenderBaseIf::SetProjectionMatrix(const Affinef& afp){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetProjectionMatrix(afp);
}
void Spr::GRRenderBaseIf::GetProjectionMatrix(Affinef& afp){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetProjectionMatrix(afp);
}
void Spr::GRRenderBaseIf::PushProjectionMatrix(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->PushProjectionMatrix();
}
void Spr::GRRenderBaseIf::PopProjectionMatrix(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->PopProjectionMatrix();
}
void Spr::GRRenderBaseIf::SetModelMatrix(const Affinef& afw){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetModelMatrix(afw);
}
void Spr::GRRenderBaseIf::GetModelMatrix(Affinef& afw){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->GetModelMatrix(afw);
}
void Spr::GRRenderBaseIf::MultModelMatrix(const Affinef& afw){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->MultModelMatrix(afw);
}
void Spr::GRRenderBaseIf::PushModelMatrix(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->PushModelMatrix();
}
void Spr::GRRenderBaseIf::PopModelMatrix(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->PopModelMatrix();
}
void Spr::GRRenderBaseIf::ClearBlendMatrix(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->ClearBlendMatrix();
}
void Spr::GRRenderBaseIf::SetBlendMatrix(const Affinef& afb, unsigned int id){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetBlendMatrix(afb, id);
}
void Spr::GRRenderBaseIf::SetVertexFormat(const GRVertexElement* e){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetVertexFormat(e);
}
void Spr::GRRenderBaseIf::DrawDirect(Spr::GRRenderBaseIf::TPrimitiveType ty, void* vtx, size_t count, size_t stride){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawDirect(ty, vtx, count, stride);
}
void Spr::GRRenderBaseIf::DrawIndexed(Spr::GRRenderBaseIf::TPrimitiveType ty, GLuint* idx, void* vtx, size_t count, size_t stride){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawIndexed(ty, idx, vtx, count, stride);
}
void Spr::GRRenderBaseIf::DrawArrays(Spr::GRRenderBaseIf::TPrimitiveType ty, GRVertexArray* arrays, size_t count){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawArrays(ty, arrays, count);
}
void Spr::GRRenderBaseIf::DrawArrays(Spr::GRRenderBaseIf::TPrimitiveType ty, size_t* idx, GRVertexArray* arrays, size_t count){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawArrays(ty, idx, arrays, count);
}
void Spr::GRRenderBaseIf::DrawPoint(Vec3f p){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawPoint(p);
}
void Spr::GRRenderBaseIf::DrawLine(Vec3f p0, Vec3f p1){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawLine(p0, p1);
}
void Spr::GRRenderBaseIf::DrawSpline(Vec3f p0, Vec3f v0, Vec3f p1, Vec3f v1, int ndiv){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawSpline(p0, v0, p1, v1, ndiv);
}
void Spr::GRRenderBaseIf::DrawArrow(Vec3f p0, Vec3f p1, float rbar, float rhead, float lhead, int slice, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawArrow(p0, p1, rbar, rhead, lhead, slice, solid);
}
void Spr::GRRenderBaseIf::DrawBox(float sx, float sy, float sz, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawBox(sx, sy, sz, solid);
}
void Spr::GRRenderBaseIf::DrawSphere(float radius, int slices, int stacks, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawSphere(radius, slices, stacks, solid);
}
void Spr::GRRenderBaseIf::DrawEllipsoid(Vec3f radius, int slices, int stacks, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawEllipsoid(radius, slices, stacks, solid);
}
void Spr::GRRenderBaseIf::DrawCone(float radius, float height, int slice, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawCone(radius, height, slice, solid);
}
void Spr::GRRenderBaseIf::DrawCylinder(float radius, float height, int slice, bool solid, bool cap){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawCylinder(radius, height, slice, solid, cap);
}
void Spr::GRRenderBaseIf::DrawDisk(float radius, int slice, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawDisk(radius, slice, solid);
}
void Spr::GRRenderBaseIf::DrawCapsule(float radius, float height, int slice, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawCapsule(radius, height, slice, solid);
}
void Spr::GRRenderBaseIf::DrawRoundCone(float rbottom, float rtop, float height, int slice, bool solid){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawRoundCone(rbottom, rtop, height, slice, solid);
}
void Spr::GRRenderBaseIf::DrawGrid(float size, int slice, float lineWidth){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawGrid(size, slice, lineWidth);
}
void Spr::GRRenderBaseIf::DrawCurve(const Curve3f& curve){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawCurve(curve);
}
int Spr::GRRenderBaseIf::StartList(){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->StartList();
}
void Spr::GRRenderBaseIf::EndList(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->EndList();
}
void Spr::GRRenderBaseIf::DrawList(int i){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawList(i);
}
void Spr::GRRenderBaseIf::ReleaseList(int i){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->ReleaseList(i);
}
void Spr::GRRenderBaseIf::SetFont(const Spr::GRFont& font){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetFont(font);
}
void Spr::GRRenderBaseIf::DrawFont(Vec2f pos, const std::string str){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawFont(pos, str);
}
void Spr::GRRenderBaseIf::DrawFont(Vec3f pos, const std::string str){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->DrawFont(pos, str);
}
void Spr::GRRenderBaseIf::SetMaterial(const Spr::GRMaterialDesc& mat){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetMaterial(mat);
}
void Spr::GRRenderBaseIf::SetMaterial(const Spr::GRMaterialIf* mat){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetMaterial(mat);
}
void Spr::GRRenderBaseIf::SetMaterial(int matname){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetMaterial(matname);
}
void Spr::GRRenderBaseIf::SetMaterial(int matname, float alpha){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetMaterial(matname, alpha);
}
void Spr::GRRenderBaseIf::SetPointSize(float sz, bool smooth){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetPointSize(sz, smooth);
}
void Spr::GRRenderBaseIf::SetLineWidth(float w, bool smooth){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetLineWidth(w, smooth);
}
void Spr::GRRenderBaseIf::PushLight(const Spr::GRLightDesc& light){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->PushLight(light);
}
void Spr::GRRenderBaseIf::PushLight(const Spr::GRLightIf* light){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->PushLight(light);
}
void Spr::GRRenderBaseIf::PopLight(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->PopLight();
}
int Spr::GRRenderBaseIf::NLights(){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->NLights();
}
void Spr::GRRenderBaseIf::SetDepthWrite(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetDepthWrite(b);
}
void Spr::GRRenderBaseIf::SetDepthTest(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetDepthTest(b);
}
void Spr::GRRenderBaseIf::SetDepthFunc(Spr::GRRenderBaseIf::TDepthFunc f){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetDepthFunc(f);
}
void Spr::GRRenderBaseIf::SetAlphaTest(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetAlphaTest(b);
}
void Spr::GRRenderBaseIf::SetAlphaMode(Spr::GRRenderBaseIf::TBlendFunc src, Spr::GRRenderBaseIf::TBlendFunc dest){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetAlphaMode(src, dest);
}
void Spr::GRRenderBaseIf::SetLighting(bool l){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetLighting(l);
}
void Spr::GRRenderBaseIf::SetTexture2D(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetTexture2D(b);
}
void Spr::GRRenderBaseIf::SetTexture3D(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetTexture3D(b);
}
unsigned int Spr::GRRenderBaseIf::LoadTexture(const std::string filename){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->LoadTexture(filename);
}
void Spr::GRRenderBaseIf::SetTextureImage(const std::string id, int components, int xsize, int ysize, int format, const char* tb){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetTextureImage(id, components, xsize, ysize, format, tb);
}
void Spr::GRRenderBaseIf::SetBlending(bool b){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetBlending(b);
}
GRShaderIf* Spr::GRRenderBaseIf::CreateShader(const GRShaderDesc& sd){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->CreateShader(sd);
}
bool Spr::GRRenderBaseIf::SetShader(GRShaderIf* shader){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetShader(shader);
}
void Spr::GRRenderBaseIf::SetShadowLight(const Spr::GRShadowLightDesc& sld){
	return	((GRRenderBase*)(Object*)(ObjectIf*)this)->SetShadowLight(sld);
}
void Spr::GRRenderBaseIf::EnterShadowMapGeneration(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->EnterShadowMapGeneration();
}
void Spr::GRRenderBaseIf::LeaveShadowMapGeneration(){
	((GRRenderBase*)(Object*)(ObjectIf*)this)->LeaveShadowMapGeneration();
}
SPR_IFIMP1(GRRender, GRRenderBase);
void Spr::GRRenderIf::SetDevice(Spr::GRDeviceIf* dev){
	return	((GRRender*)(Object*)(ObjectIf*)this)->SetDevice(dev);
}
Spr::GRDeviceIf* Spr::GRRenderIf::GetDevice(){
	return	((GRRender*)(Object*)(ObjectIf*)this)->GetDevice();
}
void Spr::GRRenderIf::SetCamera(const Spr::GRCameraDesc& cam){
	return	((GRRender*)(Object*)(ObjectIf*)this)->SetCamera(cam);
}
const Spr::GRCameraDesc& Spr::GRRenderIf::GetCamera(){
	return	((GRRender*)(Object*)(ObjectIf*)this)->GetCamera();
}
void Spr::GRRenderIf::Reshape(Vec2f pos, Vec2f screenSize){
	return	((GRRender*)(Object*)(ObjectIf*)this)->Reshape(pos, screenSize);
}
Vec2f Spr::GRRenderIf::GetPixelSize(){
	return	((GRRender*)(Object*)(ObjectIf*)this)->GetPixelSize();
}
Vec4f Spr::GRRenderIf::GetReservedColor(int matname){
	return	((GRRender*)(Object*)(ObjectIf*)this)->GetReservedColor(matname);
}
Vec3f Spr::GRRenderIf::ScreenToCamera(int x, int y, float depth, bool LorR){
	return	((GRRender*)(Object*)(ObjectIf*)this)->ScreenToCamera(x, y, depth, LorR);
}
void Spr::GRRenderIf::EnterScreenCoordinate(){
	((GRRender*)(Object*)(ObjectIf*)this)->EnterScreenCoordinate();
}
void Spr::GRRenderIf::LeaveScreenCoordinate(){
	((GRRender*)(Object*)(ObjectIf*)this)->LeaveScreenCoordinate();
}
SPR_IFIMP1(GRDevice, GRRenderBase);
void Spr::GRDeviceIf::Init(){
	((GRDevice*)(Object*)(ObjectIf*)this)->Init();
}
void Spr::GRDeviceIf::Print(std::ostream& os)const{
	return	((GRDevice*)(Object*)(ObjectIf*)this)->Print(os);
}
SPR_IFIMP1(GRDeviceGL, GRDevice);
bool Spr::GRDeviceGLIf::CheckGLVersion(int major, int minor){
	return	((GRDeviceGL*)(Object*)(ObjectIf*)this)->CheckGLVersion(major, minor);
}
int Spr::GRDeviceGLIf::GetGLMajorVersion(){
	return	((GRDeviceGL*)(Object*)(ObjectIf*)this)->GetGLMajorVersion();
}
int Spr::GRDeviceGLIf::GetGLMinorVersion(){
	return	((GRDeviceGL*)(Object*)(ObjectIf*)this)->GetGLMinorVersion();
}
void Spr::GRDeviceGLIf::SetGLVersion(int major, int minor){
	return	((GRDeviceGL*)(Object*)(ObjectIf*)this)->SetGLVersion(major, minor);
}
SPR_IFIMP1(GRScene, Scene);
void Spr::GRSceneIf::Render(Spr::GRRenderIf* r){
	return	((GRScene*)(Object*)(ObjectIf*)this)->Render(r);
}
Spr::GRFrameIf* Spr::GRSceneIf::GetWorld(){
	return	((GRScene*)(Object*)(ObjectIf*)this)->GetWorld();
}
Spr::GRCameraIf* Spr::GRSceneIf::GetCamera(){
	return	((GRScene*)(Object*)(ObjectIf*)this)->GetCamera();
}
void Spr::GRSceneIf::SetCamera(const Spr::GRCameraDesc& desc){
	return	((GRScene*)(Object*)(ObjectIf*)this)->SetCamera(desc);
}
Spr::GRAnimationControllerIf* Spr::GRSceneIf::GetAnimationController(){
	return	((GRScene*)(Object*)(ObjectIf*)this)->GetAnimationController();
}
Spr::GRVisualIf* Spr::GRSceneIf::CreateVisual(const IfInfo* info, const Spr::GRVisualDesc& desc, Spr::GRFrameIf* parent){
	return	((GRScene*)(Object*)(ObjectIf*)this)->CreateVisual(info, desc, parent);
}
Spr::GRSdkIf* Spr::GRSceneIf::GetSdk(){
	return	((GRScene*)(Object*)(ObjectIf*)this)->GetSdk();
}
SPR_IFIMP1(GRSdk, Sdk);
Spr::GRRenderIf* Spr::GRSdkIf::CreateRender(){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->CreateRender();
}
Spr::GRDeviceGLIf* Spr::GRSdkIf::CreateDeviceGL(){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->CreateDeviceGL();
}
Spr::GRSceneIf* Spr::GRSdkIf::CreateScene(const Spr::GRSceneDesc& desc){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->CreateScene(desc);
}
Spr::GRSceneIf* Spr::GRSdkIf::GetScene(size_t i){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->GetScene(i);
}
size_t Spr::GRSdkIf::NScene(){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->NScene();
}
void Spr::GRSdkIf::MergeScene(Spr::GRSceneIf* scene0, Spr::GRSceneIf* scene1){
	return	((GRSdk*)(Object*)(ObjectIf*)this)->MergeScene(scene0, scene1);
}
SPR_IFIMP1(GRShader, Object);
int Spr::GRShaderIf::GetProgramID(){
	return	((GRShader*)(Object*)(ObjectIf*)this)->GetProgramID();
}
SPR_IFIMP1(GRSphere, GRVisual);
SPR_OBJECTIMP1(GRBlendMesh, GRVisual);
SPR_OBJECTIMP1(GRDeviceGL, GRDevice);
SPR_OBJECTIMP_ABST1(GRVisual, SceneObject);
SPR_OBJECTIMP1(GRFrame, GRVisual);
SPR_OBJECTIMP1(GRDummyFrame, GRVisual);
SPR_OBJECTIMP1(GRAnimation, SceneObject);
SPR_OBJECTIMP1(GRAnimationSet, SceneObject);
SPR_OBJECTIMP1(GRAnimationController, SceneObject);
SPR_OBJECTIMP1(GRSkinWeight, GRVisual);
SPR_OBJECTIMP1(GRMesh, GRVisual);
SPR_OBJECTIMP1(GRCamera, GRVisual);
SPR_OBJECTIMP1(GRLight, GRVisual);
SPR_OBJECTIMP1(GRMaterial, GRVisual);
SPR_OBJECTIMP1(GRShader, Object);
SPR_OBJECTIMP1(GRShadowLight, Object);
SPR_OBJECTIMP_ABST1(GRRenderBase, Object);
SPR_OBJECTIMP1(GRRender, GRRenderBase);
SPR_OBJECTIMP_ABST1(GRDevice, GRRenderBase);
SPR_OBJECTIMP1(GRScene, Scene);
SPR_OBJECTIMP1(GRSdk, Sdk);
SPR_OBJECTIMP1(GRSphere, GRVisual);
}
