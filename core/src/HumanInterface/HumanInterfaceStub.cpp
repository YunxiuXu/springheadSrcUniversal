#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
#include "..\..\include\HumanInterface\SprHIBase.h"
#include "..\..\include\HumanInterface\SprHIDevice.h"
#include "..\..\include\HumanInterface\SprHIDRUart.h"
#include "..\..\include\HumanInterface\SprHIDRUsb.h"
#include "..\..\include\HumanInterface\SprHIJoyStick.h"
#include "..\..\include\HumanInterface\SprHIKeyMouse.h"
#include "..\..\include\HumanInterface\SprHILeap.h"
#include "..\..\include\HumanInterface\SprHINovint.h"
#include "..\..\include\HumanInterface\SprHISdk.h"
#include "..\..\include\HumanInterface\SprHISkeletonSensor.h"
#include "..\..\include\HumanInterface\SprHISpaceNavigator.h"
#include "..\..\include\HumanInterface\SprHISpidar.h"
#include "..\..\include\HumanInterface\SprHITrackball.h"
#include "..\..\include\HumanInterface\SprHIXbox360Controller.h"
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
#include "..\HumanInterface\Device.h"
#include "..\HumanInterface\DRADAPIO.h"
#include "..\HumanInterface\DRContecIsaCounter.h"
#include "..\HumanInterface\DRContecIsaDa.h"
#include "..\HumanInterface\DRCyUsb20Sh4.h"
#include "..\HumanInterface\DRKeyMouseWin32.h"
#include "..\HumanInterface\DRNittaForce.h"
#include "..\HumanInterface\DRPortIO.h"
#include "..\HumanInterface\DRTokin3D.h"
#include "..\HumanInterface\DRUartMotorDriver.h"
#include "..\HumanInterface\DRUPP.h"
#include "..\HumanInterface\DRUsb20Sh4.h"
#include "..\HumanInterface\DRUsb20Simple.h"
#include "..\HumanInterface\DRUsbH8Simple.h"
#include "..\HumanInterface\DRUsbH8SimpleDef.h"
#include "..\HumanInterface\DRWinDriver.h"
#include "..\HumanInterface\HIBase.h"
#include "..\HumanInterface\HIDevice.h"
#include "..\HumanInterface\HILeap.h"
#include "..\HumanInterface\HINovintFalcon.h"
#include "..\HumanInterface\HISdk.h"
#include "..\HumanInterface\HISkeletonSensor.h"
#include "..\HumanInterface\HISpaceNavigator.h"
#include "..\HumanInterface\HISpidar.h"
#include "..\HumanInterface\HISpidarCalc.h"
#include "..\HumanInterface\HISpidarMotor.h"
#include "..\HumanInterface\HITrackball.h"
#include "..\HumanInterface\HIXbox360Controller.h"
#include "..\HumanInterface\HumanInterface.h"
namespace Spr{

void RegisterTypeDescHumanInterface(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::HIHapticDummyDesc* pHIHapticDummyDesc = NULL;
	desc = UTTypeDescIf::Create("HIHapticDummyDesc");
	desc->SetSize(sizeof(Spr::HIHapticDummyDesc));
	desc->SetIfInfo(HIHapticDummyIf::GetIfInfoStatic());
	((IfInfo*)HIHapticDummyIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HIHapticDummyDesc>);
	field = desc->AddField("", "Posed", "pose", "");
	desc->SetOffset(field, int((char*)&(pHIHapticDummyDesc->pose) - (char*)pHIHapticDummyDesc));
	db->RegisterDesc(desc);
	Spr::DVPortEnum* pDVPortEnum = NULL;
	desc = UTTypeDescIf::Create("DVPortEnum");
	desc->SetSize(sizeof(Spr::DVPortEnum));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVPortEnum>);
	db->RegisterDesc(desc);
	Spr::DRUARTMotorDriverDesc* pDRUARTMotorDriverDesc = NULL;
	desc = UTTypeDescIf::Create("DRUARTMotorDriverDesc");
	desc->SetSize(sizeof(Spr::DRUARTMotorDriverDesc));
	desc->SetIfInfo(DRUARTMotorDriverIf::GetIfInfoStatic());
	((IfInfo*)DRUARTMotorDriverIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::DRUARTMotorDriverDesc>);
	field = desc->AddField("", "int", "port", "");
	desc->SetOffset(field, int((char*)&(pDRUARTMotorDriverDesc->port) - (char*)pDRUARTMotorDriverDesc));
	db->RegisterDesc(desc);
	Spr::DRUsb20SimpleDesc* pDRUsb20SimpleDesc = NULL;
	desc = UTTypeDescIf::Create("DRUsb20SimpleDesc");
	desc->SetSize(sizeof(Spr::DRUsb20SimpleDesc));
	desc->SetIfInfo(DRUsb20SimpleIf::GetIfInfoStatic());
	((IfInfo*)DRUsb20SimpleIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::DRUsb20SimpleDesc>);
	field = desc->AddField("", "int", "channel", "");
	desc->SetOffset(field, int((char*)&(pDRUsb20SimpleDesc->channel) - (char*)pDRUsb20SimpleDesc));
	db->RegisterDesc(desc);
	Spr::DRUsb20Sh4Desc* pDRUsb20Sh4Desc = NULL;
	desc = UTTypeDescIf::Create("DRUsb20Sh4Desc");
	desc->SetSize(sizeof(Spr::DRUsb20Sh4Desc));
	desc->SetIfInfo(DRUsb20Sh4If::GetIfInfoStatic());
	((IfInfo*)DRUsb20Sh4If::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::DRUsb20Sh4Desc>);
	field = desc->AddBase("DRUsb20SimpleDesc");
	desc->SetOffset(field, int((char*)(DRUsb20SimpleDesc*)pDRUsb20Sh4Desc - (char*)pDRUsb20Sh4Desc));
	db->RegisterDesc(desc);
	Spr::DRCyUsb20Sh4Desc* pDRCyUsb20Sh4Desc = NULL;
	desc = UTTypeDescIf::Create("DRCyUsb20Sh4Desc");
	desc->SetSize(sizeof(Spr::DRCyUsb20Sh4Desc));
	desc->SetIfInfo(DRCyUsb20Sh4If::GetIfInfoStatic());
	((IfInfo*)DRCyUsb20Sh4If::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::DRCyUsb20Sh4Desc>);
	field = desc->AddBase("DRUsb20Sh4Desc");
	desc->SetOffset(field, int((char*)(DRUsb20Sh4Desc*)pDRCyUsb20Sh4Desc - (char*)pDRCyUsb20Sh4Desc));
	db->RegisterDesc(desc);
	Spr::DVJoyStickMask* pDVJoyStickMask = NULL;
	desc = UTTypeDescIf::Create("DVJoyStickMask");
	desc->SetSize(sizeof(Spr::DVJoyStickMask));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVJoyStickMask>);
	db->RegisterDesc(desc);
	Spr::DVJoyStickCallback* pDVJoyStickCallback = NULL;
	desc = UTTypeDescIf::Create("DVJoyStickCallback");
	desc->SetSize(sizeof(Spr::DVJoyStickCallback));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVJoyStickCallback>);
	db->RegisterDesc(desc);
	Spr::DVButtonMask* pDVButtonMask = NULL;
	desc = UTTypeDescIf::Create("DVButtonMask");
	desc->SetSize(sizeof(Spr::DVButtonMask));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVButtonMask>);
	db->RegisterDesc(desc);
	Spr::DVButtonSt* pDVButtonSt = NULL;
	desc = UTTypeDescIf::Create("DVButtonSt");
	desc->SetSize(sizeof(Spr::DVButtonSt));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVButtonSt>);
	db->RegisterDesc(desc);
	Spr::DVKeySt* pDVKeySt = NULL;
	desc = UTTypeDescIf::Create("DVKeySt");
	desc->SetSize(sizeof(Spr::DVKeySt));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVKeySt>);
	db->RegisterDesc(desc);
	Spr::DVKeyCode* pDVKeyCode = NULL;
	desc = UTTypeDescIf::Create("DVKeyCode");
	desc->SetSize(sizeof(Spr::DVKeyCode));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVKeyCode>);
	db->RegisterDesc(desc);
	Spr::DVKeyMouseCallback* pDVKeyMouseCallback = NULL;
	desc = UTTypeDescIf::Create("DVKeyMouseCallback");
	desc->SetSize(sizeof(Spr::DVKeyMouseCallback));
	desc->SetAccess(DBG_NEW UTAccess<Spr::DVKeyMouseCallback>);
	db->RegisterDesc(desc);
	Spr::DRKeyMouseWin32Desc* pDRKeyMouseWin32Desc = NULL;
	desc = UTTypeDescIf::Create("DRKeyMouseWin32Desc");
	desc->SetSize(sizeof(Spr::DRKeyMouseWin32Desc));
	desc->SetIfInfo(DRKeyMouseWin32If::GetIfInfoStatic());
	((IfInfo*)DRKeyMouseWin32If::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::DRKeyMouseWin32Desc>);
	db->RegisterDesc(desc);
	Spr::HILeapDesc* pHILeapDesc = NULL;
	desc = UTTypeDescIf::Create("HILeapDesc");
	desc->SetSize(sizeof(Spr::HILeapDesc));
	desc->SetIfInfo(HILeapIf::GetIfInfoStatic());
	((IfInfo*)HILeapIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HILeapDesc>);
	db->RegisterDesc(desc);
	Spr::HILeapUDPDesc* pHILeapUDPDesc = NULL;
	desc = UTTypeDescIf::Create("HILeapUDPDesc");
	desc->SetSize(sizeof(Spr::HILeapUDPDesc));
	desc->SetIfInfo(HILeapUDPIf::GetIfInfoStatic());
	((IfInfo*)HILeapUDPIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HILeapUDPDesc>);
	db->RegisterDesc(desc);
	Spr::HINovintFalconDesc* pHINovintFalconDesc = NULL;
	desc = UTTypeDescIf::Create("HINovintFalconDesc");
	desc->SetSize(sizeof(Spr::HINovintFalconDesc));
	desc->SetIfInfo(HINovintFalconIf::GetIfInfoStatic());
	((IfInfo*)HINovintFalconIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HINovintFalconDesc>);
	db->RegisterDesc(desc);
	Spr::HISdkDesc* pHISdkDesc = NULL;
	desc = UTTypeDescIf::Create("HISdkDesc");
	desc->SetSize(sizeof(Spr::HISdkDesc));
	desc->SetIfInfo(HISdkIf::GetIfInfoStatic());
	((IfInfo*)HISdkIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISdkDesc>);
	db->RegisterDesc(desc);
	Spr::HISpaceNavigatorDesc* pHISpaceNavigatorDesc = NULL;
	desc = UTTypeDescIf::Create("HISpaceNavigatorDesc");
	desc->SetSize(sizeof(Spr::HISpaceNavigatorDesc));
	desc->SetIfInfo(HISpaceNavigatorIf::GetIfInfoStatic());
	((IfInfo*)HISpaceNavigatorIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpaceNavigatorDesc>);
	field = desc->AddField("pointer", "void", "hWnd", "");
	desc->SetOffset(field, int((char*)&(pHISpaceNavigatorDesc->hWnd) - (char*)pHISpaceNavigatorDesc));
	field = desc->AddField("", "float", "maxVelocity", "");
	desc->SetOffset(field, int((char*)&(pHISpaceNavigatorDesc->maxVelocity) - (char*)pHISpaceNavigatorDesc));
	field = desc->AddField("", "float", "maxAngularVelocity", "");
	desc->SetOffset(field, int((char*)&(pHISpaceNavigatorDesc->maxAngularVelocity) - (char*)pHISpaceNavigatorDesc));
	db->RegisterDesc(desc);
	Spr::HISpidarMotorDesc* pHISpidarMotorDesc = NULL;
	desc = UTTypeDescIf::Create("HISpidarMotorDesc");
	desc->SetSize(sizeof(Spr::HISpidarMotorDesc));
	desc->SetIfInfo(HISpidarMotorIf::GetIfInfoStatic());
	((IfInfo*)HISpidarMotorIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpidarMotorDesc>);
	field = desc->AddField("", "int", "ch", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->ch) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "float", "maxForce", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->maxForce) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "float", "minForce", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->minForce) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "float", "voltPerNewton", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->voltPerNewton) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "float", "currentPerVolt", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->currentPerVolt) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "float", "lengthPerPulse", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->lengthPerPulse) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "Vec3f", "pos", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->pos) - (char*)pHISpidarMotorDesc));
	field = desc->AddField("", "Vec3f", "jointPos", "");
	desc->SetOffset(field, int((char*)&(pHISpidarMotorDesc->jointPos) - (char*)pHISpidarMotorDesc));
	db->RegisterDesc(desc);
	Spr::HISpidarDesc* pHISpidarDesc = NULL;
	desc = UTTypeDescIf::Create("HISpidarDesc");
	desc->SetSize(sizeof(Spr::HISpidarDesc));
	desc->SetIfInfo(HISpidarIf::GetIfInfoStatic());
	((IfInfo*)HISpidarIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpidarDesc>);
	field = desc->AddField("", "string", "type", "");
	desc->SetOffset(field, int((char*)&(pHISpidarDesc->type) - (char*)pHISpidarDesc));
	field = desc->AddField("vector", "HISpidarMotorDesc", "motors", "");
	desc->SetOffset(field, int((char*)&(pHISpidarDesc->motors) - (char*)pHISpidarDesc));
	field = desc->AddField("", "int", "nButton", "");
	desc->SetOffset(field, int((char*)&(pHISpidarDesc->nButton) - (char*)pHISpidarDesc));
	db->RegisterDesc(desc);
	Spr::HISpidar4Desc* pHISpidar4Desc = NULL;
	desc = UTTypeDescIf::Create("HISpidar4Desc");
	desc->SetSize(sizeof(Spr::HISpidar4Desc));
	desc->SetIfInfo(HISpidar4If::GetIfInfoStatic());
	((IfInfo*)HISpidar4If::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpidar4Desc>);
	field = desc->AddBase("HISpidarDesc");
	desc->SetOffset(field, int((char*)(HISpidarDesc*)pHISpidar4Desc - (char*)pHISpidar4Desc));
	db->RegisterDesc(desc);
	Spr::HISpidar4DDesc* pHISpidar4DDesc = NULL;
	desc = UTTypeDescIf::Create("HISpidar4DDesc");
	desc->SetSize(sizeof(Spr::HISpidar4DDesc));
	desc->SetIfInfo(HISpidar4DIf::GetIfInfoStatic());
	((IfInfo*)HISpidar4DIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpidar4DDesc>);
	field = desc->AddBase("HISpidar4Desc");
	desc->SetOffset(field, int((char*)(HISpidar4Desc*)pHISpidar4DDesc - (char*)pHISpidar4DDesc));
	db->RegisterDesc(desc);
	Spr::HISpidarGDesc* pHISpidarGDesc = NULL;
	desc = UTTypeDescIf::Create("HISpidarGDesc");
	desc->SetSize(sizeof(Spr::HISpidarGDesc));
	desc->SetIfInfo(HISpidarGIf::GetIfInfoStatic());
	((IfInfo*)HISpidarGIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HISpidarGDesc>);
	field = desc->AddBase("HISpidarDesc");
	desc->SetOffset(field, int((char*)(HISpidarDesc*)pHISpidarGDesc - (char*)pHISpidarGDesc));
	db->RegisterDesc(desc);
	Spr::HITrackballDesc* pHITrackballDesc = NULL;
	desc = UTTypeDescIf::Create("HITrackballDesc");
	desc->SetSize(sizeof(Spr::HITrackballDesc));
	desc->SetIfInfo(HITrackballIf::GetIfInfoStatic());
	((IfInfo*)HITrackballIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HITrackballDesc>);
	field = desc->AddField("", "bool", "trackball", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->trackball) - (char*)pHITrackballDesc));
	field = desc->AddField("", "Vec3f", "target", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->target) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "longitude", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->longitude) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "latitude", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->latitude) - (char*)pHITrackballDesc));
	field = desc->AddField("", "Vec2f", "lonRange", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->lonRange) - (char*)pHITrackballDesc));
	field = desc->AddField("", "Vec2f", "latRange", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->latRange) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "distance", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->distance) - (char*)pHITrackballDesc));
	field = desc->AddField("", "Vec2f", "distRange", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->distRange) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "rotGain", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->rotGain) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "zoomGain", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->zoomGain) - (char*)pHITrackballDesc));
	field = desc->AddField("", "float", "trnGain", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->trnGain) - (char*)pHITrackballDesc));
	field = desc->AddField("", "int", "rotMask", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->rotMask) - (char*)pHITrackballDesc));
	field = desc->AddField("", "int", "zoomMask", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->zoomMask) - (char*)pHITrackballDesc));
	field = desc->AddField("", "int", "trnMask", "");
	desc->SetOffset(field, int((char*)&(pHITrackballDesc->trnMask) - (char*)pHITrackballDesc));
	db->RegisterDesc(desc);
	Spr::HITrackballCallback* pHITrackballCallback = NULL;
	desc = UTTypeDescIf::Create("HITrackballCallback");
	desc->SetSize(sizeof(Spr::HITrackballCallback));
	desc->SetAccess(DBG_NEW UTAccess<Spr::HITrackballCallback>);
	db->RegisterDesc(desc);
	Spr::HIXbox360ControllerDesc* pHIXbox360ControllerDesc = NULL;
	desc = UTTypeDescIf::Create("HIXbox360ControllerDesc");
	desc->SetSize(sizeof(Spr::HIXbox360ControllerDesc));
	desc->SetIfInfo(HIXbox360ControllerIf::GetIfInfoStatic());
	((IfInfo*)HIXbox360ControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::HIXbox360ControllerDesc>);
	field = desc->AddField("", "float", "maxVelocity", "");
	desc->SetOffset(field, int((char*)&(pHIXbox360ControllerDesc->maxVelocity) - (char*)pHIXbox360ControllerDesc));
	field = desc->AddField("", "float", "maxAngularVelocity", "");
	desc->SetOffset(field, int((char*)&(pHIXbox360ControllerDesc->maxAngularVelocity) - (char*)pHIXbox360ControllerDesc));
	db->RegisterDesc(desc);
	Spr::LeapBone* pLeapBone = NULL;
	desc = UTTypeDescIf::Create("LeapBone");
	desc->SetSize(sizeof(Spr::LeapBone));
	desc->SetAccess(DBG_NEW UTAccess<Spr::LeapBone>);
	field = desc->AddField("", "Vec3d", "position", "");
	desc->SetOffset(field, int((char*)&(pLeapBone->position) - (char*)pLeapBone));
	field = desc->AddField("", "Vec3d", "direction", "");
	desc->SetOffset(field, int((char*)&(pLeapBone->direction) - (char*)pLeapBone));
	field = desc->AddField("", "double", "length", "");
	desc->SetOffset(field, int((char*)&(pLeapBone->length) - (char*)pLeapBone));
	db->RegisterDesc(desc);
	Spr::LeapFinger* pLeapFinger = NULL;
	desc = UTTypeDescIf::Create("LeapFinger");
	desc->SetSize(sizeof(Spr::LeapFinger));
	desc->SetAccess(DBG_NEW UTAccess<Spr::LeapFinger>);
	field = desc->AddField("", "LeapBone", "bones", "BONE_NUM");
	desc->SetOffset(field, int((char*)&(pLeapFinger->bones) - (char*)pLeapFinger));
	db->RegisterDesc(desc);
	Spr::LeapHand* pLeapHand = NULL;
	desc = UTTypeDescIf::Create("LeapHand");
	desc->SetSize(sizeof(Spr::LeapHand));
	desc->SetAccess(DBG_NEW UTAccess<Spr::LeapHand>);
	field = desc->AddField("HandKind", "enum", "handKind", "");
	desc->AddEnumConst(field, "RIGHT_HAND", Spr::LeapHand::RIGHT_HAND);
	desc->AddEnumConst(field, "LEFT_HAND", Spr::LeapHand::LEFT_HAND);
	desc->SetOffset(field, int((char*)&(pLeapHand->handKind) - (char*)pLeapHand));
	field = desc->AddField("", "Vec3d", "position", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->position) - (char*)pLeapHand));
	field = desc->AddField("", "Vec3d", "direction", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->direction) - (char*)pLeapHand));
	field = desc->AddField("", "Quaterniond", "orientation", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->orientation) - (char*)pLeapHand));
	field = desc->AddField("", "LeapFinger", "leapFingers", "FINGER_NUM");
	desc->SetOffset(field, int((char*)&(pLeapHand->leapFingers) - (char*)pLeapHand));
	field = desc->AddField("", "int", "recFingersNum", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->recFingersNum) - (char*)pLeapHand));
	field = desc->AddField("", "float", "confidence", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->confidence) - (char*)pLeapHand));
	field = desc->AddField("", "float", "grabStrength", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->grabStrength) - (char*)pLeapHand));
	field = desc->AddField("", "bool", "isTracked", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->isTracked) - (char*)pLeapHand));
	field = desc->AddField("", "int", "originalLeapHandID", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->originalLeapHandID) - (char*)pLeapHand));
	field = desc->AddField("", "int", "bufID", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->bufID) - (char*)pLeapHand));
	field = desc->AddField("", "int", "leapID", "");
	desc->SetOffset(field, int((char*)&(pLeapHand->leapID) - (char*)pLeapHand));
	db->RegisterDesc(desc);
	Spr::LeapFrame* pLeapFrame = NULL;
	desc = UTTypeDescIf::Create("LeapFrame");
	desc->SetSize(sizeof(Spr::LeapFrame));
	desc->SetAccess(DBG_NEW UTAccess<Spr::LeapFrame>);
	field = desc->AddField("vector", "LeapHand", "leapHands", "");
	desc->SetOffset(field, int((char*)&(pLeapFrame->leapHands) - (char*)pLeapFrame));
	field = desc->AddField("", "int", "recHandsNum", "");
	desc->SetOffset(field, int((char*)&(pLeapFrame->recHandsNum) - (char*)pLeapFrame));
	field = desc->AddField("", "int", "leapID", "");
	desc->SetOffset(field, int((char*)&(pLeapFrame->leapID) - (char*)pLeapFrame));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(HIBase, NamedObject);
bool Spr::HIBaseIf::BeforeCalibration(){
	return	((HIBase*)(Object*)(ObjectIf*)this)->BeforeCalibration();
}
bool Spr::HIBaseIf::Calibration(){
	return	((HIBase*)(Object*)(ObjectIf*)this)->Calibration();
}
bool Spr::HIBaseIf::AfterCalibration(){
	return	((HIBase*)(Object*)(ObjectIf*)this)->AfterCalibration();
}
void Spr::HIBaseIf::AddDeviceDependency(HIRealDeviceIf* rd){
	return	((HIBase*)(Object*)(ObjectIf*)this)->AddDeviceDependency(rd);
}
void Spr::HIBaseIf::ClearDeviceDependency(){
	((HIBase*)(Object*)(ObjectIf*)this)->ClearDeviceDependency();
}
void Spr::HIBaseIf::Update(float dt){
	return	((HIBase*)(Object*)(ObjectIf*)this)->Update(dt);
}
bool Spr::HIBaseIf::IsGood(){
	return	((HIBase*)(Object*)(ObjectIf*)this)->IsGood();
}
bool Spr::HIBaseIf::Init(const void* desc){
	return	((HIBase*)(Object*)(ObjectIf*)this)->Init(desc);
}
SPR_IFIMP1(HIHapticDummy, HIHaptic);
void Spr::HIHapticDummyIf::SetPose(Posed p){
	return	((HIHapticDummy*)(Object*)(ObjectIf*)this)->SetPose(p);
}
void Spr::HIHapticDummyIf::SetVelocity(Vec3d v){
	return	((HIHapticDummy*)(Object*)(ObjectIf*)this)->SetVelocity(v);
}
void Spr::HIHapticDummyIf::SetAngularVelocity(Vec3d v){
	return	((HIHapticDummy*)(Object*)(ObjectIf*)this)->SetAngularVelocity(v);
}
SPR_IFIMP1(HIDevice, NamedObject);
void Spr::HIDeviceIf::SetName(const char* n){
	return	((HIDevice*)(Object*)(ObjectIf*)this)->SetName(n);
}
SPR_IFIMP1(HIRealDevice, HIDevice);
bool Spr::HIRealDeviceIf::Init(){
	return	((HIRealDevice*)(Object*)(ObjectIf*)this)->Init();
}
Spr::HIVirtualDeviceIf* Spr::HIRealDeviceIf::Rent(const IfInfo* ii, const char* name, int portNo){
	return	((HIRealDevice*)(Object*)(ObjectIf*)this)->Rent(ii, name, portNo);
}
bool Spr::HIRealDeviceIf::Return(Spr::HIVirtualDeviceIf* dv){
	return	((HIRealDevice*)(Object*)(ObjectIf*)this)->Return(dv);
}
void Spr::HIRealDeviceIf::Update(){
	((HIRealDevice*)(Object*)(ObjectIf*)this)->Update();
}
SPR_IFIMP1(HIVirtualDevice, HIDevice);
int Spr::HIVirtualDeviceIf::GetPortNo()const{
	return	((HIVirtualDevice*)(Object*)(ObjectIf*)this)->GetPortNo();
}
bool Spr::HIVirtualDeviceIf::IsUsed(){
	return	((HIVirtualDevice*)(Object*)(ObjectIf*)this)->IsUsed();
}
Spr::HIRealDeviceIf* Spr::HIVirtualDeviceIf::GetRealDevice(){
	return	((HIVirtualDevice*)(Object*)(ObjectIf*)this)->GetRealDevice();
}
void Spr::HIVirtualDeviceIf::Update(){
	((HIVirtualDevice*)(Object*)(ObjectIf*)this)->Update();
}
SPR_IFIMP1(DVAd, HIVirtualDevice);
int Spr::DVAdIf::Digit(){
	return	((DVAd*)(Object*)(ObjectIf*)this)->Digit();
}
float Spr::DVAdIf::Voltage(){
	return	((DVAd*)(Object*)(ObjectIf*)this)->Voltage();
}
SPR_IFIMP1(DVDa, HIVirtualDevice);
void Spr::DVDaIf::Digit(int d){
	return	((DVDa*)(Object*)(ObjectIf*)this)->Digit(d);
}
void Spr::DVDaIf::Voltage(float volt){
	return	((DVDa*)(Object*)(ObjectIf*)this)->Voltage(volt);
}
SPR_IFIMP1(DVCounter, HIVirtualDevice);
void Spr::DVCounterIf::Count(long count){
	return	((DVCounter*)(Object*)(ObjectIf*)this)->Count(count);
}
long Spr::DVCounterIf::Count(){
	return	((DVCounter*)(Object*)(ObjectIf*)this)->Count();
}
SPR_IFIMP1(DVPio, HIVirtualDevice);
int Spr::DVPioIf::Get(){
	return	((DVPio*)(Object*)(ObjectIf*)this)->Get();
}
void Spr::DVPioIf::Set(int l){
	return	((DVPio*)(Object*)(ObjectIf*)this)->Set(l);
}
SPR_IFIMP1(DVForce, HIVirtualDevice);
int Spr::DVForceIf::GetDOF(){
	return	((DVForce*)(Object*)(ObjectIf*)this)->GetDOF();
}
float Spr::DVForceIf::GetForce(int ch){
	return	((DVForce*)(Object*)(ObjectIf*)this)->GetForce(ch);
}
void Spr::DVForceIf::GetForce3(Vec3f& f){
	return	((DVForce*)(Object*)(ObjectIf*)this)->GetForce3(f);
}
void Spr::DVForceIf::GetForce6(Vec3f& f, Vec3f& t){
	return	((DVForce*)(Object*)(ObjectIf*)this)->GetForce6(f, t);
}
SPR_IFIMP1(DRUARTMotorDriver, HIRealDevice);
int Spr::DRUARTMotorDriverIf::NMotor(){
	return	((DRUARTMotorDriver*)(Object*)(ObjectIf*)this)->NMotor();
}
int Spr::DRUARTMotorDriverIf::NForce(){
	return	((DRUARTMotorDriver*)(Object*)(ObjectIf*)this)->NForce();
}
long Spr::DRUARTMotorDriverIf::ReadForce(int ch){
	return	((DRUARTMotorDriver*)(Object*)(ObjectIf*)this)->ReadForce(ch);
}
SPR_IFIMP1(DRUsb20Simple, HIRealDevice);
SPR_IFIMP1(DRUsb20Sh4, HIRealDevice);
SPR_IFIMP1(DRCyUsb20Sh4, DRUsb20Sh4);
SPR_IFIMP1(DVJoyStick, HIVirtualDevice);
void Spr::DVJoyStickIf::AddCallback(Spr::DVJoyStickCallback* cb){
	return	((DVJoyStick*)(Object*)(ObjectIf*)this)->AddCallback(cb);
}
void Spr::DVJoyStickIf::RemoveCallback(Spr::DVJoyStickCallback* cb){
	return	((DVJoyStick*)(Object*)(ObjectIf*)this)->RemoveCallback(cb);
}
void Spr::DVJoyStickIf::SetPollInterval(int ms){
	return	((DVJoyStick*)(Object*)(ObjectIf*)this)->SetPollInterval(ms);
}
int Spr::DVJoyStickIf::GetPollInterval(){
	return	((DVJoyStick*)(Object*)(ObjectIf*)this)->GetPollInterval();
}
SPR_IFIMP1(DVKeyMouse, HIVirtualDevice);
void Spr::DVKeyMouseIf::AddCallback(Spr::DVKeyMouseCallback* cb){
	return	((DVKeyMouse*)(Object*)(ObjectIf*)this)->AddCallback(cb);
}
void Spr::DVKeyMouseIf::RemoveCallback(Spr::DVKeyMouseCallback* cb){
	return	((DVKeyMouse*)(Object*)(ObjectIf*)this)->RemoveCallback(cb);
}
int Spr::DVKeyMouseIf::GetKeyState(int key){
	return	((DVKeyMouse*)(Object*)(ObjectIf*)this)->GetKeyState(key);
}
void Spr::DVKeyMouseIf::GetMousePosition(int& x, int& y, int& time, int count){
	return	((DVKeyMouse*)(Object*)(ObjectIf*)this)->GetMousePosition(x, y, time, count);
}
SPR_IFIMP1(DRKeyMouseWin32, HIRealDevice);
bool Spr::DRKeyMouseWin32If::PreviewMessage(void* m){
	return	((DRKeyMouseWin32*)(Object*)(ObjectIf*)this)->PreviewMessage(m);
}
SPR_IFIMP1(HILeap, HISkeletonSensor);
SPR_IFIMP1(HILeapUDP, HISkeletonSensor);
bool Spr::HILeapUDPIf::calibrate(int formerLeapID){
	return	((HILeapUDP*)(Object*)(ObjectIf*)this)->calibrate(formerLeapID);
}
SPR_IFIMP1(HISdk, NameManager);
Spr::HIVirtualDeviceIf* Spr::HISdkIf::RentVirtualDevice(const IfInfo* ii, const char* rname, int portNum){
	return	((HISdk*)(Object*)(ObjectIf*)this)->RentVirtualDevice(ii, rname, portNum);
}
Spr::HIVirtualDeviceIf* Spr::HISdkIf::RentVirtualDevice(const char* itype, const char* rname, int portNum){
	return	((HISdk*)(Object*)(ObjectIf*)this)->RentVirtualDevice(itype, rname, portNum);
}
bool Spr::HISdkIf::ReturnVirtualDevice(Spr::HIVirtualDeviceIf* dev){
	return	((HISdk*)(Object*)(ObjectIf*)this)->ReturnVirtualDevice(dev);
}
Spr::HIRealDeviceIf* Spr::HISdkIf::AddRealDevice(const IfInfo* keyInfo, const void* desc){
	return	((HISdk*)(Object*)(ObjectIf*)this)->AddRealDevice(keyInfo, desc);
}
Spr::HIRealDeviceIf* Spr::HISdkIf::FindRealDevice(const char* name){
	return	((HISdk*)(Object*)(ObjectIf*)this)->FindRealDevice(name);
}
Spr::HIRealDeviceIf* Spr::HISdkIf::FindRealDevice(const IfInfo* ii){
	return	((HISdk*)(Object*)(ObjectIf*)this)->FindRealDevice(ii);
}
Spr::HIBaseIf* Spr::HISdkIf::CreateHumanInterface(const IfInfo* info){
	return	((HISdk*)(Object*)(ObjectIf*)this)->CreateHumanInterface(info);
}
Spr::HIBaseIf* Spr::HISdkIf::CreateHumanInterface(const char* name){
	return	((HISdk*)(Object*)(ObjectIf*)this)->CreateHumanInterface(name);
}
SPR_IFIMP1(HIBone, Object);
Spr::HIBoneIf* Spr::HIBoneIf::GetParent(){
	return	((HIBone*)(Object*)(ObjectIf*)this)->GetParent();
}
Vec3d Spr::HIBoneIf::GetPosition(){
	return	((HIBone*)(Object*)(ObjectIf*)this)->GetPosition();
}
Vec3d Spr::HIBoneIf::GetDirection(){
	return	((HIBone*)(Object*)(ObjectIf*)this)->GetDirection();
}
double Spr::HIBoneIf::GetLength(){
	return	((HIBone*)(Object*)(ObjectIf*)this)->GetLength();
}
SPR_IFIMP1(HISkeleton, Object);
Posed Spr::HISkeletonIf::GetPose(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->GetPose();
}
int Spr::HISkeletonIf::NBones(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->NBones();
}
Spr::HIBoneIf* Spr::HISkeletonIf::GetBone(int i){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->GetBone(i);
}
Spr::HIBoneIf* Spr::HISkeletonIf::GetRoot(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->GetRoot();
}
float Spr::HISkeletonIf::GetGrabStrength(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->GetGrabStrength();
}
bool Spr::HISkeletonIf::IsTracked(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->IsTracked();
}
int Spr::HISkeletonIf::GetTrackID(){
	return	((HISkeleton*)(Object*)(ObjectIf*)this)->GetTrackID();
}
SPR_IFIMP1(HISkeletonSensor, HIBase);
int Spr::HISkeletonSensorIf::NSkeletons(){
	return	((HISkeletonSensor*)(Object*)(ObjectIf*)this)->NSkeletons();
}
Spr::HISkeletonIf* Spr::HISkeletonSensorIf::GetSkeleton(int i){
	return	((HISkeletonSensor*)(Object*)(ObjectIf*)this)->GetSkeleton(i);
}
void Spr::HISkeletonSensorIf::SetScale(double s){
	return	((HISkeletonSensor*)(Object*)(ObjectIf*)this)->SetScale(s);
}
void Spr::HISkeletonSensorIf::SetCenter(Vec3d c){
	return	((HISkeletonSensor*)(Object*)(ObjectIf*)this)->SetCenter(c);
}
void Spr::HISkeletonSensorIf::SetRotation(Quaterniond q){
	return	((HISkeletonSensor*)(Object*)(ObjectIf*)this)->SetRotation(q);
}
SPR_IFIMP1(HISpidarMotor, HIBase);
void Spr::HISpidarMotorIf::SetForce(float f){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->SetForce(f);
}
float Spr::HISpidarMotorIf::GetForce(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetForce();
}
void Spr::HISpidarMotorIf::SetLimitMinForce(float f){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->SetLimitMinForce(f);
}
void Spr::HISpidarMotorIf::SetLimitMaxForce(float f){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->SetLimitMaxForce(f);
}
Vec2f Spr::HISpidarMotorIf::GetLimitForce(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetLimitForce();
}
float Spr::HISpidarMotorIf::GetCurrent(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetCurrent();
}
void Spr::HISpidarMotorIf::SetLength(float l){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->SetLength(l);
}
float Spr::HISpidarMotorIf::GetLength(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetLength();
}
float Spr::HISpidarMotorIf::GetVelocity(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetVelocity();
}
void Spr::HISpidarMotorIf::GetCalibrationData(float dt){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetCalibrationData(dt);
}
void Spr::HISpidarMotorIf::Calibrate(bool bUpdate){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->Calibrate(bUpdate);
}
void Spr::HISpidarMotorIf::GetVdd(){
	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetVdd();
}
int Spr::HISpidarMotorIf::GetCount(){
	return	((HISpidarMotor*)(Object*)(ObjectIf*)this)->GetCount();
}
SPR_IFIMP1(HIPose, HIBase);
Vec3f Spr::HIPoseIf::GetPosition(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetPosition();
}
Quaternionf Spr::HIPoseIf::GetOrientation(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetOrientation();
}
Posef Spr::HIPoseIf::GetPose(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetPose();
}
Affinef Spr::HIPoseIf::GetAffine(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetAffine();
}
Vec3f Spr::HIPoseIf::GetVelocity(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetVelocity();
}
Vec3f Spr::HIPoseIf::GetAngularVelocity(){
	return	DCAST(HIPose, (Object*)(ObjectIf*)this)->GetAngularVelocity();
}
SPR_IFIMP1(HIHaptic, HIPose);
Vec3f Spr::HIHapticIf::GetTorque(){
	return	DCAST(HIHaptic, (Object*)(ObjectIf*)this)->GetTorque();
}
Vec3f Spr::HIHapticIf::GetForce(){
	return	DCAST(HIHaptic, (Object*)(ObjectIf*)this)->GetForce();
}
void Spr::HIHapticIf::SetForce(const Vec3f& f, const Vec3f& t){
	return	DCAST(HIHaptic, (Object*)(ObjectIf*)this)->SetForce(f, t);
}
SPR_IFIMP1(HINovintFalcon, HIHaptic);
SPR_IFIMP1(HISpaceNavigator, HIPose);
bool Spr::HISpaceNavigatorIf::SetPose(Posef pose){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->SetPose(pose);
}
void Spr::HISpaceNavigatorIf::SetMaxVelocity(float mV){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->SetMaxVelocity(mV);
}
void Spr::HISpaceNavigatorIf::SetMaxAngularVelocity(float mAV){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->SetMaxAngularVelocity(mAV);
}
bool Spr::HISpaceNavigatorIf::PreviewMessage(void* m){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->PreviewMessage(m);
}
void Spr::HISpaceNavigatorIf::SetViewMatrix(Affinef view){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->SetViewMatrix(view);
}
void Spr::HISpaceNavigatorIf::SetPersMatrix(Affinef pers){
	return	DCAST(HISpaceNavigator, (Object*)(ObjectIf*)this)->SetPersMatrix(pers);
}
SPR_IFIMP1(HISpidar, HIHaptic);
const char* Spr::HISpidarIf::GetSpidarType(){
	return	DCAST(HISpidar, (Object*)(ObjectIf*)this)->GetSpidarType();
}
void Spr::HISpidarIf::SetLimitMinForce(float f){
	return	DCAST(HISpidar, (Object*)(ObjectIf*)this)->SetLimitMinForce(f);
}
void Spr::HISpidarIf::SetLimitMaxForce(float f){
	return	DCAST(HISpidar, (Object*)(ObjectIf*)this)->SetLimitMaxForce(f);
}
Spr::HISpidarMotorIf* Spr::HISpidarIf::GetMotor(size_t i){
	return	DCAST(HISpidar, (Object*)(ObjectIf*)this)->GetMotor(i);
}
size_t Spr::HISpidarIf::NMotor()const{
	return	DCAST(HISpidar, (Object*)(ObjectIf*)this)->NMotor();
}
SPR_IFIMP1(HISpidar4, HISpidar);
Spr::HISpidarMotorIf* Spr::HISpidar4If::GetMotor(size_t i){
	return	DCAST(HISpidar4, (Object*)(ObjectIf*)this)->GetMotor(i);
}
size_t Spr::HISpidar4If::NMotor()const{
	return	DCAST(HISpidar4, (Object*)(ObjectIf*)this)->NMotor();
}
SPR_IFIMP1(HISpidar4D, HISpidar4);
SPR_IFIMP1(HISpidarG, HISpidar);
Vec3f Spr::HISpidarGIf::GetTorque(){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->GetTorque();
}
Vec3f Spr::HISpidarGIf::GetForce(){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->GetForce();
}
void Spr::HISpidarGIf::SetForce(const Vec3f& f, const Vec3f& t){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->SetForce(f, t);
}
Spr::HISpidarMotorIf* Spr::HISpidarGIf::GetMotor(size_t i){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->GetMotor(i);
}
size_t Spr::HISpidarGIf::NMotor()const{
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->NMotor();
}
int Spr::HISpidarGIf::GetButton(size_t i){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->GetButton(i);
}
size_t Spr::HISpidarGIf::NButton()const{
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->NButton();
}
void Spr::HISpidarGIf::SetWeight(float s, float t, float r){
	return	DCAST(HISpidarG, (Object*)(ObjectIf*)this)->SetWeight(s, t, r);
}
SPR_IFIMP1(HITrackball, HIPose);
void Spr::HITrackballIf::SetMode(bool mode){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetMode(mode);
}
bool Spr::HITrackballIf::GetMode(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetMode();
}
void Spr::HITrackballIf::SetTarget(Vec3f t){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetTarget(t);
}
Vec3f Spr::HITrackballIf::GetTarget(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetTarget();
}
void Spr::HITrackballIf::SetAngle(float lon, float lat){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetAngle(lon, lat);
}
void Spr::HITrackballIf::GetAngle(float& lon, float& lat){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetAngle(lon, lat);
}
void Spr::HITrackballIf::SetDistance(float dist){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetDistance(dist);
}
float Spr::HITrackballIf::GetDistance(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetDistance();
}
void Spr::HITrackballIf::SetLongitudeRange(float rmin, float rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetLongitudeRange(rmin, rmax);
}
void Spr::HITrackballIf::GetLongitudeRange(float& rmin, float& rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetLongitudeRange(rmin, rmax);
}
void Spr::HITrackballIf::SetLatitudeRange(float rmin, float rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetLatitudeRange(rmin, rmax);
}
void Spr::HITrackballIf::GetLatitudeRange(float& rmin, float& rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetLatitudeRange(rmin, rmax);
}
void Spr::HITrackballIf::SetDistanceRange(float rmin, float rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetDistanceRange(rmin, rmax);
}
void Spr::HITrackballIf::GetDistanceRange(float& rmin, float& rmax){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetDistanceRange(rmin, rmax);
}
void Spr::HITrackballIf::SetRotGain(float g){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetRotGain(g);
}
float Spr::HITrackballIf::GetRotGain(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetRotGain();
}
void Spr::HITrackballIf::SetZoomGain(float g){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetZoomGain(g);
}
float Spr::HITrackballIf::GetZoomGain(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetZoomGain();
}
void Spr::HITrackballIf::SetTrnGain(float g){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetTrnGain(g);
}
float Spr::HITrackballIf::GetTrnGain(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetTrnGain();
}
void Spr::HITrackballIf::Fit(const Spr::GRCameraDesc& cam, float radius){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->Fit(cam, radius);
}
void Spr::HITrackballIf::SetPosition(Vec3f pos){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetPosition(pos);
}
void Spr::HITrackballIf::SetOrientation(Quaternionf ori){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetOrientation(ori);
}
void Spr::HITrackballIf::Enable(bool on){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->Enable(on);
}
void Spr::HITrackballIf::SetRotMask(int mask){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetRotMask(mask);
}
void Spr::HITrackballIf::SetZoomMask(int mask){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetZoomMask(mask);
}
void Spr::HITrackballIf::SetTrnMask(int mask){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetTrnMask(mask);
}
Spr::DVKeyMouseIf* Spr::HITrackballIf::GetKeyMouse(){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->GetKeyMouse();
}
void Spr::HITrackballIf::SetKeyMouse(Spr::DVKeyMouseIf* dv){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetKeyMouse(dv);
}
void Spr::HITrackballIf::SetCallback(Spr::HITrackballCallback* callback){
	return	DCAST(HITrackball, (Object*)(ObjectIf*)this)->SetCallback(callback);
}
void Spr::HITrackballIf::UpdateView(){
	DCAST(HITrackball, (Object*)(ObjectIf*)this)->UpdateView();
}
SPR_IFIMP1(HIXbox360Controller, HIHaptic);
bool Spr::HIXbox360ControllerIf::Init(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->Init();
}
void Spr::HIXbox360ControllerIf::SetMaxVelocity(float v){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->SetMaxVelocity(v);
}
void Spr::HIXbox360ControllerIf::SetMaxAngularVelocity(float v){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->SetMaxAngularVelocity(v);
}
void Spr::HIXbox360ControllerIf::SetVibration(Vec2f lr){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->SetVibration(lr);
}
bool Spr::HIXbox360ControllerIf::UP(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->UP();
}
bool Spr::HIXbox360ControllerIf::DOWN(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->DOWN();
}
bool Spr::HIXbox360ControllerIf::LEFT(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->LEFT();
}
bool Spr::HIXbox360ControllerIf::RIGHT(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->RIGHT();
}
bool Spr::HIXbox360ControllerIf::START(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->START();
}
bool Spr::HIXbox360ControllerIf::BACK(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->BACK();
}
bool Spr::HIXbox360ControllerIf::LTHUMB(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->LTHUMB();
}
bool Spr::HIXbox360ControllerIf::RTHUMB(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->RTHUMB();
}
bool Spr::HIXbox360ControllerIf::LSHOULDER(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->LSHOULDER();
}
bool Spr::HIXbox360ControllerIf::RSHOULDER(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->RSHOULDER();
}
bool Spr::HIXbox360ControllerIf::A(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->A();
}
bool Spr::HIXbox360ControllerIf::B(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->B();
}
bool Spr::HIXbox360ControllerIf::X(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->X();
}
bool Spr::HIXbox360ControllerIf::Y(){
	return	DCAST(HIXbox360Controller, (Object*)(ObjectIf*)this)->Y();
}
SPR_OBJECTIMP1(DRAdapio, HIRealDevice);
SPR_OBJECTIMP1(DRCyUsb20Sh4, DRUsb20Sh4);
SPR_OBJECTIMP1(DRKeyMouseWin32, HIRealDevice);
SPR_OBJECTIMP1(DRTokin3D, HIRealDevice);
SPR_OBJECTIMP1(DRUARTMotorDriver, HIRealDevice);
SPR_OBJECTIMP1(DRUsb20Sh4, DRUsb20Simple);
SPR_OBJECTIMP1(DRUsb20Simple, HIRealDevice);
SPR_OBJECTIMP1(DRUsbH8Simple, HIRealDevice);
SPR_OBJECTIMP_ABST1(HIBase, NamedObject);
SPR_OBJECTIMP1(HIPose, HIBase);
SPR_OBJECTIMP_ABST1(HIHaptic, HIPose);
SPR_OBJECTIMP1(HIHapticDummy, HIHaptic);
SPR_OBJECTIMP_ABST1(HIDevice, NamedObject);
SPR_OBJECTIMP_ABST1(HIRealDevice, HIDevice);
SPR_OBJECTIMP_ABST1(HIVirtualDevice, HIDevice);
SPR_OBJECTIMP_ABST1(DVPio, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVCounter, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVAd, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVDa, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVForce, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVKeyMouse, HIVirtualDevice);
SPR_OBJECTIMP_ABST1(DVJoyStick, HIVirtualDevice);
SPR_OBJECTIMP1(HILeap, HISkeletonSensor);
SPR_OBJECTIMP1(HILeapUDP, HISkeletonSensor);
SPR_OBJECTIMP1(HINovintFalcon, HIHaptic);
SPR_OBJECTIMP1(HISdk, Sdk);
SPR_OBJECTIMP1(HIBone, Object);
SPR_OBJECTIMP1(HISkeleton, Object);
SPR_OBJECTIMP1(HISkeletonSensor, HIBase);
SPR_OBJECTIMP1(HISpaceNavigator, HIPose);
SPR_OBJECTIMP_ABST1(HISpidar, HIHaptic);
SPR_OBJECTIMP1(HISpidar4, HISpidar);
SPR_OBJECTIMP1(HISpidar4D, HISpidar4);
SPR_OBJECTIMP1(HISpidarG, HISpidar);
SPR_OBJECTIMP1(HISpidarMotor, HIBase);
SPR_OBJECTIMP1(HITrackball, HIPose);
SPR_OBJECTIMP1(HIXbox360Controller, HIHaptic);
}
