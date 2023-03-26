#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
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
#include "..\..\include\Graphics\SprGRBlendMesh.h"
#include "..\..\include\Graphics\SprGRFrame.h"
#include "..\..\include\Graphics\SprGRMesh.h"
#include "..\..\include\Graphics\SprGRRender.h"
#include "..\..\include\Graphics\SprGRScene.h"
#include "..\..\include\Graphics\SprGRSdk.h"
#include "..\..\include\Graphics\SprGRShader.h"
#include "..\..\include\Graphics\SprGRSphere.h"
#include "..\..\include\Graphics\SprGRVertex.h"
#include "..\..\include\Foundation\SprObject.h"
#include "..\..\include\Foundation\SprScene.h"
#include "..\..\include\Foundation\SprUTCriticalSection.h"
#include "..\..\include\Foundation\SprUTOptimizer.h"
#include "..\..\include\Foundation\SprUTQPTimer.h"
#include "..\..\include\Foundation\SprUTTimer.h"
#include "..\..\include\Physics\SprPHDef.h"
#include "..\..\include\Physics\SprPHEngine.h"
#include "..\..\include\Physics\SprPHFemMesh.h"
#include "..\..\include\Physics\SprPHFemMeshNew.h"
#include "..\..\include\Physics\SprPHHaptic.h"
#include "..\..\include\Physics\SprPHIK.h"
#include "..\..\include\Physics\SprPHJoint.h"
#include "..\..\include\Physics\SprPHJointLimit.h"
#include "..\..\include\Physics\SprPHJointMotor.h"
#include "..\..\include\Physics\SprPHNodeHandlers.h"
#include "..\..\include\Physics\SprPHOpObj.h"
#include "..\..\include\Physics\SprPHOpSpHashAgent.h"
#include "..\..\include\Physics\SprPHScene.h"
#include "..\..\include\Physics\SprPHSdk.h"
#include "..\..\include\Physics\SprPHSkeleton.h"
#include "..\..\include\Physics\SprPHSolid.h"
#include "..\..\include\FileIO\SprFIFile.h"
#include "..\..\include\FileIO\SprFIImport.h"
#include "..\..\include\FileIO\SprFIOpStateHandler.h"
#include "..\..\include\FileIO\SprFISdk.h"
#include "..\..\include\Framework\SprFWApp.h"
#include "..\..\include\Framework\SprFWConsoleDebugMonitor.h"
#include "..\..\include\Framework\SprFWEditor.h"
#include "..\..\include\Framework\SprFWFemMesh.h"
#include "..\..\include\Framework\SprFWFemMeshNew.h"
#include "..\..\include\Framework\SprFWHapticPointer.h"
#include "..\..\include\Framework\SprFWJoyStick.h"
#include "..\..\include\Framework\SprFWKeyMouse.h"
#include "..\..\include\Framework\SprFWObject.h"
#include "..\..\include\Framework\SprFWOpHapticHandler.h"
#include "..\..\include\Framework\SprFWOpObj.h"
#include "..\..\include\Framework\SprFWOptimizer.h"
#include "..\..\include\Framework\SprFWScene.h"
#include "..\..\include\Framework\SprFWSdk.h"
#include "..\..\include\Framework\SprFWSkeletonSensor.h"
#include "..\..\include\Framework\SprFWWin.h"
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
#include "..\Physics\PHAxisIndex.h"
#include "..\Physics\PHBallJoint.h"
#include "..\Physics\PHBody.h"
#include "..\Physics\PHConstraint.h"
#include "..\Physics\PHConstraintEngine.h"
#include "..\Physics\PHContactDetector.h"
#include "..\Physics\PHContactPoint.h"
#include "..\Physics\PHContactSurface.h"
#include "..\Physics\PHEngine.h"
#include "..\Physics\PHFemBase.h"
#include "..\Physics\PHFemCollision.h"
#include "..\Physics\PHFemEngine.h"
#include "..\Physics\PHFemMesh.h"
#include "..\Physics\PHFemMeshNew.h"
#include "..\Physics\PHFemMeshThermo.h"
#include "..\Physics\PHFemPorousWOMove.h"
#include "..\Physics\PHFemThermo.h"
#include "..\Physics\PHFemVibration.h"
#include "..\Physics\PHFixJoint.h"
#include "..\Physics\PHForceField.h"
#include "..\Physics\PHGear.h"
#include "..\Physics\PHGenericJoint.h"
#include "..\Physics\PHHapticEngine.h"
#include "..\Physics\PHHapticPointer.h"
#include "..\Physics\PHHapticStepBase.h"
#include "..\Physics\PHHapticStepImpulse.h"
#include "..\Physics\PHHapticStepLocalDynamics.h"
#include "..\Physics\PHHapticStepLocalDynamicsDev.h"
#include "..\Physics\PHHapticStepMulti.h"
#include "..\Physics\PHHapticStepSingle.h"
#include "..\Physics\PHHingeJoint.h"
#include "..\Physics\PHIKActuator.h"
#include "..\Physics\PHIKEndEffector.h"
#include "..\Physics\PHIKEngine.h"
#include "..\Physics\PHJoint.h"
#include "..\Physics\PHJointLimit.h"
#include "..\Physics\PHJointMotor.h"
#include "..\Physics\PHOpAnimation.h"
#include "..\Physics\PHOpDecompositionMethods.h"
#include "..\Physics\PHOpEngine.h"
#include "..\Physics\PHOpGroup.h"
#include "..\Physics\PHOpHapticController.h"
#include "..\Physics\PHOpHapticRenderer.h"
#include "..\Physics\PHOpObj.h"
#include "..\Physics\PHOpParticle.h"
#include "..\Physics\PHOpSpHashColliAgent.h"
#include "..\Physics\PHPathJoint.h"
#include "..\Physics\PHPenaltyEngine.h"
#include "..\Physics\PHScene.h"
#include "..\Physics\PHSdk.h"
#include "..\Physics\PHSkeleton.h"
#include "..\Physics\PHSliderJoint.h"
#include "..\Physics\PHSolid.h"
#include "..\Physics\PHSpring.h"
#include "..\Physics\PHTreeNode.h"
#include "..\Physics\Physics.h"
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
#include "..\Framework\Framework.h"
#include "..\Framework\FWFemMesh.h"
#include "..\Framework\FWFemMeshNew.h"
#include "..\Framework\FWGLUI.h"
#include "..\Framework\FWGLUT.h"
#include "..\Framework\FWGraphicsHandler.h"
#include "..\Framework\FWHapticPointer.h"
#include "..\Framework\FWJoyStickGLUT.h"
#include "..\Framework\FWKeyMouseGLUT.h"
#include "..\Framework\FWObject.h"
#include "..\Framework\FWOldSpringheadNode.h"
#include "..\Framework\FWOldSpringheadNodeHandler.h"
#include "..\Framework\FWOpHapticHandler.h"
#include "..\Framework\FWOpObj.h"
#include "..\Framework\FWOptimizer.h"
#include "..\Framework\FWScene.h"
#include "..\Framework\FWSdk.h"
#include "..\Framework\FWSkeletonSensor.h"
#include "..\Framework\FWSprTetgen.h"
#include "..\Framework\FWStaticTorqueOptimizer.h"
#include "..\Framework\FWWin.h"
namespace Spr{

void RegisterTypeDescFramework(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::FWFemMeshDesc* pFWFemMeshDesc = NULL;
	desc = UTTypeDescIf::Create("FWFemMeshDesc");
	desc->SetSize(sizeof(Spr::FWFemMeshDesc));
	desc->SetIfInfo(FWFemMeshIf::GetIfInfoStatic());
	((IfInfo*)FWFemMeshIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWFemMeshDesc>);
	field = desc->AddBase("FWObjectDesc");
	desc->SetOffset(field, int((char*)(FWObjectDesc*)pFWFemMeshDesc - (char*)pFWFemMeshDesc));
	field = desc->AddField("", "unsigned", "kogePics", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshDesc->kogePics) - (char*)pFWFemMeshDesc));
	field = desc->AddField("", "unsigned", "thermoPics", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshDesc->thermoPics) - (char*)pFWFemMeshDesc));
	field = desc->AddField("", "unsigned", "waterPics", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshDesc->waterPics) - (char*)pFWFemMeshDesc));
	field = desc->AddField("", "string", "meshRoughness", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshDesc->meshRoughness) - (char*)pFWFemMeshDesc));
	db->RegisterDesc(desc);
	Spr::FWFemMeshNewDesc* pFWFemMeshNewDesc = NULL;
	desc = UTTypeDescIf::Create("FWFemMeshNewDesc");
	desc->SetSize(sizeof(Spr::FWFemMeshNewDesc));
	desc->SetIfInfo(FWFemMeshNewIf::GetIfInfoStatic());
	((IfInfo*)FWFemMeshNewIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWFemMeshNewDesc>);
	field = desc->AddBase("FWObjectDesc");
	desc->SetOffset(field, int((char*)(FWObjectDesc*)pFWFemMeshNewDesc - (char*)pFWFemMeshNewDesc));
	field = desc->AddField("", "unsigned", "kogetex", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshNewDesc->kogetex) - (char*)pFWFemMeshNewDesc));
	field = desc->AddField("", "string", "meshRoughness", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshNewDesc->meshRoughness) - (char*)pFWFemMeshNewDesc));
	field = desc->AddField("", "bool", "spheric", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshNewDesc->spheric) - (char*)pFWFemMeshNewDesc));
	field = desc->AddField("", "unsigned", "texture_mode", "");
	desc->SetOffset(field, int((char*)&(pFWFemMeshNewDesc->texture_mode) - (char*)pFWFemMeshNewDesc));
	db->RegisterDesc(desc);
	Spr::FWJoyStickGLUTDesc* pFWJoyStickGLUTDesc = NULL;
	desc = UTTypeDescIf::Create("FWJoyStickGLUTDesc");
	desc->SetSize(sizeof(Spr::FWJoyStickGLUTDesc));
	desc->SetIfInfo(FWJoyStickGLUTIf::GetIfInfoStatic());
	((IfInfo*)FWJoyStickGLUTIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWJoyStickGLUTDesc>);
	db->RegisterDesc(desc);
	Spr::FWKeyMouseGLUTDesc* pFWKeyMouseGLUTDesc = NULL;
	desc = UTTypeDescIf::Create("FWKeyMouseGLUTDesc");
	desc->SetSize(sizeof(Spr::FWKeyMouseGLUTDesc));
	desc->SetIfInfo(FWKeyMouseGLUTIf::GetIfInfoStatic());
	((IfInfo*)FWKeyMouseGLUTIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWKeyMouseGLUTDesc>);
	db->RegisterDesc(desc);
	Spr::FWObjectDesc* pFWObjectDesc = NULL;
	desc = UTTypeDescIf::Create("FWObjectDesc");
	desc->SetSize(sizeof(Spr::FWObjectDesc));
	desc->SetIfInfo(FWObjectIf::GetIfInfoStatic());
	((IfInfo*)FWObjectIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWObjectDesc>);
	field = desc->AddField("", "bool", "bAbsolute", "");
	desc->SetOffset(field, int((char*)&(pFWObjectDesc->bAbsolute) - (char*)pFWObjectDesc));
	field = desc->AddField("FWObjectSyncSource", "enum", "syncSource", "");
	desc->AddEnumConst(field, "PHYSICS", Spr::FWObjectDesc::PHYSICS);
	desc->AddEnumConst(field, "GRAPHICS", Spr::FWObjectDesc::GRAPHICS);
	desc->SetOffset(field, int((char*)&(pFWObjectDesc->syncSource) - (char*)pFWObjectDesc));
	db->RegisterDesc(desc);
	Spr::FWOpObjDesc* pFWOpObjDesc = NULL;
	desc = UTTypeDescIf::Create("FWOpObjDesc");
	desc->SetSize(sizeof(Spr::FWOpObjDesc));
	desc->SetIfInfo(FWOpObjIf::GetIfInfoStatic());
	((IfInfo*)FWOpObjIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWOpObjDesc>);
	field = desc->AddBase("FWObjectDesc");
	desc->SetOffset(field, int((char*)(FWObjectDesc*)pFWOpObjDesc - (char*)pFWOpObjDesc));
	field = desc->AddField("", "float", "fwPSize", "");
	desc->SetOffset(field, int((char*)&(pFWOpObjDesc->fwPSize) - (char*)pFWOpObjDesc));
	db->RegisterDesc(desc);
	Spr::JointPos* pJointPos = NULL;
	desc = UTTypeDescIf::Create("JointPos");
	desc->SetSize(sizeof(Spr::JointPos));
	desc->SetAccess(DBG_NEW UTAccess<Spr::JointPos>);
	field = desc->AddField("", "Quaterniond", "ori", "");
	desc->SetOffset(field, int((char*)&(pJointPos->ori) - (char*)pJointPos));
	field = desc->AddField("", "double", "angle", "");
	desc->SetOffset(field, int((char*)&(pJointPos->angle) - (char*)pJointPos));
	db->RegisterDesc(desc);
	Spr::FWObjectiveValues* pFWObjectiveValues = NULL;
	desc = UTTypeDescIf::Create("FWObjectiveValues");
	desc->SetSize(sizeof(Spr::FWObjectiveValues));
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWObjectiveValues>);
	field = desc->AddField("", "double", "errorvalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->errorvalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "torquevalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->torquevalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "stabilityvalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->stabilityvalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "groundvalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->groundvalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "ungroundedvalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->ungroundedvalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "centervalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->centervalue) - (char*)pFWObjectiveValues));
	field = desc->AddField("", "double", "initialorivalue", "");
	desc->SetOffset(field, int((char*)&(pFWObjectiveValues->initialorivalue) - (char*)pFWObjectiveValues));
	db->RegisterDesc(desc);
	Spr::FWOptimizerDesc* pFWOptimizerDesc = NULL;
	desc = UTTypeDescIf::Create("FWOptimizerDesc");
	desc->SetSize(sizeof(Spr::FWOptimizerDesc));
	desc->SetIfInfo(FWOptimizerIf::GetIfInfoStatic());
	((IfInfo*)FWOptimizerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWOptimizerDesc>);
	field = desc->AddField("", "double", "ixstart", "");
	desc->SetOffset(field, int((char*)&(pFWOptimizerDesc->ixstart) - (char*)pFWOptimizerDesc));
	field = desc->AddField("", "double", "istddev", "");
	desc->SetOffset(field, int((char*)&(pFWOptimizerDesc->istddev) - (char*)pFWOptimizerDesc));
	field = desc->AddField("", "double", "iTolFun", "");
	desc->SetOffset(field, int((char*)&(pFWOptimizerDesc->iTolFun) - (char*)pFWOptimizerDesc));
	field = desc->AddField("", "double", "ilambda", "");
	desc->SetOffset(field, int((char*)&(pFWOptimizerDesc->ilambda) - (char*)pFWOptimizerDesc));
	field = desc->AddField("", "double", "iMaxIter", "");
	desc->SetOffset(field, int((char*)&(pFWOptimizerDesc->iMaxIter) - (char*)pFWOptimizerDesc));
	db->RegisterDesc(desc);
	Spr::FWStaticTorqueOptimizerDesc* pFWStaticTorqueOptimizerDesc = NULL;
	desc = UTTypeDescIf::Create("FWStaticTorqueOptimizerDesc");
	desc->SetSize(sizeof(Spr::FWStaticTorqueOptimizerDesc));
	desc->SetIfInfo(FWStaticTorqueOptimizerIf::GetIfInfoStatic());
	((IfInfo*)FWStaticTorqueOptimizerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWStaticTorqueOptimizerDesc>);
	field = desc->AddBase("FWOptimizerDesc");
	desc->SetOffset(field, int((char*)(FWOptimizerDesc*)pFWStaticTorqueOptimizerDesc - (char*)pFWStaticTorqueOptimizerDesc));
	db->RegisterDesc(desc);
	Spr::FWSceneDesc* pFWSceneDesc = NULL;
	desc = UTTypeDescIf::Create("FWSceneDesc");
	desc->SetSize(sizeof(Spr::FWSceneDesc));
	desc->SetIfInfo(FWSceneIf::GetIfInfoStatic());
	((IfInfo*)FWSceneIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWSceneDesc>);
	db->RegisterDesc(desc);
	Spr::FWSdkDesc* pFWSdkDesc = NULL;
	desc = UTTypeDescIf::Create("FWSdkDesc");
	desc->SetSize(sizeof(Spr::FWSdkDesc));
	desc->SetIfInfo(FWSdkIf::GetIfInfoStatic());
	((IfInfo*)FWSdkIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWSdkDesc>);
	db->RegisterDesc(desc);
	Spr::FWSkeletonSensorDesc* pFWSkeletonSensorDesc = NULL;
	desc = UTTypeDescIf::Create("FWSkeletonSensorDesc");
	desc->SetSize(sizeof(Spr::FWSkeletonSensorDesc));
	desc->SetIfInfo(FWSkeletonSensorIf::GetIfInfoStatic());
	((IfInfo*)FWSkeletonSensorIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWSkeletonSensorDesc>);
	field = desc->AddField("", "bool", "bCreatePHSkeleton", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->bCreatePHSkeleton) - (char*)pFWSkeletonSensorDesc));
	field = desc->AddField("", "bool", "bCreatePHSolid", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->bCreatePHSolid) - (char*)pFWSkeletonSensorDesc));
	field = desc->AddField("", "bool", "bCreateCDShape", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->bCreateCDShape) - (char*)pFWSkeletonSensorDesc));
	field = desc->AddField("", "bool", "bCreatePHJoint", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->bCreatePHJoint) - (char*)pFWSkeletonSensorDesc));
	field = desc->AddField("", "bool", "bCreatePHSpring", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->bCreatePHSpring) - (char*)pFWSkeletonSensorDesc));
	field = desc->AddField("", "Vec2d", "radius", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonSensorDesc->radius) - (char*)pFWSkeletonSensorDesc));
	db->RegisterDesc(desc);
	Spr::FWWinBaseDesc* pFWWinBaseDesc = NULL;
	desc = UTTypeDescIf::Create("FWWinBaseDesc");
	desc->SetSize(sizeof(Spr::FWWinBaseDesc));
	desc->SetIfInfo(FWWinBaseIf::GetIfInfoStatic());
	((IfInfo*)FWWinBaseIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWWinBaseDesc>);
	field = desc->AddField("", "int", "width", "");
	desc->SetOffset(field, int((char*)&(pFWWinBaseDesc->width) - (char*)pFWWinBaseDesc));
	field = desc->AddField("", "int", "height", "");
	desc->SetOffset(field, int((char*)&(pFWWinBaseDesc->height) - (char*)pFWWinBaseDesc));
	field = desc->AddField("", "int", "left", "");
	desc->SetOffset(field, int((char*)&(pFWWinBaseDesc->left) - (char*)pFWWinBaseDesc));
	field = desc->AddField("", "int", "top", "");
	desc->SetOffset(field, int((char*)&(pFWWinBaseDesc->top) - (char*)pFWWinBaseDesc));
	field = desc->AddField("", "UTString", "title", "");
	desc->SetOffset(field, int((char*)&(pFWWinBaseDesc->title) - (char*)pFWWinBaseDesc));
	db->RegisterDesc(desc);
	Spr::FWControlDesc* pFWControlDesc = NULL;
	desc = UTTypeDescIf::Create("FWControlDesc");
	desc->SetSize(sizeof(Spr::FWControlDesc));
	desc->SetIfInfo(FWControlIf::GetIfInfoStatic());
	((IfInfo*)FWControlIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWControlDesc>);
	field = desc->AddField("", "UTString", "label", "");
	desc->SetOffset(field, int((char*)&(pFWControlDesc->label) - (char*)pFWControlDesc));
	field = desc->AddField("", "int", "align", "");
	desc->SetOffset(field, int((char*)&(pFWControlDesc->align) - (char*)pFWControlDesc));
	field = desc->AddField("", "int", "style", "");
	desc->SetOffset(field, int((char*)&(pFWControlDesc->style) - (char*)pFWControlDesc));
	db->RegisterDesc(desc);
	Spr::FWPanelDesc* pFWPanelDesc = NULL;
	desc = UTTypeDescIf::Create("FWPanelDesc");
	desc->SetSize(sizeof(Spr::FWPanelDesc));
	desc->SetIfInfo(FWPanelIf::GetIfInfoStatic());
	((IfInfo*)FWPanelIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWPanelDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWPanelDesc - (char*)pFWPanelDesc));
	field = desc->AddField("", "bool", "open", "");
	desc->SetOffset(field, int((char*)&(pFWPanelDesc->open) - (char*)pFWPanelDesc));
	db->RegisterDesc(desc);
	Spr::FWButtonDesc* pFWButtonDesc = NULL;
	desc = UTTypeDescIf::Create("FWButtonDesc");
	desc->SetSize(sizeof(Spr::FWButtonDesc));
	desc->SetIfInfo(FWButtonIf::GetIfInfoStatic());
	((IfInfo*)FWButtonIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWButtonDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWButtonDesc - (char*)pFWButtonDesc));
	field = desc->AddField("", "int", "style", "");
	desc->SetOffset(field, int((char*)&(pFWButtonDesc->style) - (char*)pFWButtonDesc));
	field = desc->AddField("", "bool", "checked", "");
	desc->SetOffset(field, int((char*)&(pFWButtonDesc->checked) - (char*)pFWButtonDesc));
	db->RegisterDesc(desc);
	Spr::FWStaticTextDesc* pFWStaticTextDesc = NULL;
	desc = UTTypeDescIf::Create("FWStaticTextDesc");
	desc->SetSize(sizeof(Spr::FWStaticTextDesc));
	desc->SetIfInfo(FWStaticTextIf::GetIfInfoStatic());
	((IfInfo*)FWStaticTextIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWStaticTextDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWStaticTextDesc - (char*)pFWStaticTextDesc));
	db->RegisterDesc(desc);
	Spr::FWTextBoxDesc* pFWTextBoxDesc = NULL;
	desc = UTTypeDescIf::Create("FWTextBoxDesc");
	desc->SetSize(sizeof(Spr::FWTextBoxDesc));
	desc->SetIfInfo(FWTextBoxIf::GetIfInfoStatic());
	((IfInfo*)FWTextBoxIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWTextBoxDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWTextBoxDesc - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "UTString", "text", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->text) - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "int", "intMin", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->intMin) - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "int", "intMax", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->intMax) - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "float", "floatMin", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->floatMin) - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "float", "floatMax", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->floatMax) - (char*)pFWTextBoxDesc));
	field = desc->AddField("", "bool", "spinner", "");
	desc->SetOffset(field, int((char*)&(pFWTextBoxDesc->spinner) - (char*)pFWTextBoxDesc));
	db->RegisterDesc(desc);
	Spr::FWListBoxDesc* pFWListBoxDesc = NULL;
	desc = UTTypeDescIf::Create("FWListBoxDesc");
	desc->SetSize(sizeof(Spr::FWListBoxDesc));
	desc->SetIfInfo(FWListBoxIf::GetIfInfoStatic());
	((IfInfo*)FWListBoxIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWListBoxDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWListBoxDesc - (char*)pFWListBoxDesc));
	db->RegisterDesc(desc);
	Spr::FWRotationControlDesc* pFWRotationControlDesc = NULL;
	desc = UTTypeDescIf::Create("FWRotationControlDesc");
	desc->SetSize(sizeof(Spr::FWRotationControlDesc));
	desc->SetIfInfo(FWRotationControlIf::GetIfInfoStatic());
	((IfInfo*)FWRotationControlIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWRotationControlDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWRotationControlDesc - (char*)pFWRotationControlDesc));
	field = desc->AddField("", "Matrix3f", "rot", "");
	desc->SetOffset(field, int((char*)&(pFWRotationControlDesc->rot) - (char*)pFWRotationControlDesc));
	field = desc->AddField("", "float", "damping", "");
	desc->SetOffset(field, int((char*)&(pFWRotationControlDesc->damping) - (char*)pFWRotationControlDesc));
	db->RegisterDesc(desc);
	Spr::FWTranslationControlDesc* pFWTranslationControlDesc = NULL;
	desc = UTTypeDescIf::Create("FWTranslationControlDesc");
	desc->SetSize(sizeof(Spr::FWTranslationControlDesc));
	desc->SetIfInfo(FWTranslationControlIf::GetIfInfoStatic());
	((IfInfo*)FWTranslationControlIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWTranslationControlDesc>);
	field = desc->AddBase("FWControlDesc");
	desc->SetOffset(field, int((char*)(FWControlDesc*)pFWTranslationControlDesc - (char*)pFWTranslationControlDesc));
	field = desc->AddField("", "Vec3f", "pos", "");
	desc->SetOffset(field, int((char*)&(pFWTranslationControlDesc->pos) - (char*)pFWTranslationControlDesc));
	field = desc->AddField("", "float", "speed", "");
	desc->SetOffset(field, int((char*)&(pFWTranslationControlDesc->speed) - (char*)pFWTranslationControlDesc));
	db->RegisterDesc(desc);
	Spr::FWDialogDesc* pFWDialogDesc = NULL;
	desc = UTTypeDescIf::Create("FWDialogDesc");
	desc->SetSize(sizeof(Spr::FWDialogDesc));
	desc->SetIfInfo(FWDialogIf::GetIfInfoStatic());
	((IfInfo*)FWDialogIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWDialogDesc>);
	field = desc->AddBase("FWWinBaseDesc");
	desc->SetOffset(field, int((char*)(FWWinBaseDesc*)pFWDialogDesc - (char*)pFWDialogDesc));
	field = desc->AddField("", "bool", "dock", "");
	desc->SetOffset(field, int((char*)&(pFWDialogDesc->dock) - (char*)pFWDialogDesc));
	field = desc->AddField("", "int", "dockPos", "");
	desc->SetOffset(field, int((char*)&(pFWDialogDesc->dockPos) - (char*)pFWDialogDesc));
	db->RegisterDesc(desc);
	Spr::FWWinDesc* pFWWinDesc = NULL;
	desc = UTTypeDescIf::Create("FWWinDesc");
	desc->SetSize(sizeof(Spr::FWWinDesc));
	desc->SetIfInfo(FWWinIf::GetIfInfoStatic());
	((IfInfo*)FWWinIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWWinDesc>);
	field = desc->AddBase("FWWinBaseDesc");
	desc->SetOffset(field, int((char*)(FWWinBaseDesc*)pFWWinDesc - (char*)pFWWinDesc));
	field = desc->AddField("", "bool", "debugMode", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->debugMode) - (char*)pFWWinDesc));
	field = desc->AddField("", "bool", "fullscreen", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->fullscreen) - (char*)pFWWinDesc));
	field = desc->AddField("", "bool", "useKeyMouse", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->useKeyMouse) - (char*)pFWWinDesc));
	field = desc->AddField("", "bool", "useJoyStick", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->useJoyStick) - (char*)pFWWinDesc));
	field = desc->AddField("", "int", "joyStickPollInterval", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->joyStickPollInterval) - (char*)pFWWinDesc));
	field = desc->AddField("", "bool", "useTrackball", "");
	desc->SetOffset(field, int((char*)&(pFWWinDesc->useTrackball) - (char*)pFWWinDesc));
	db->RegisterDesc(desc);
	Spr::FWSkeletonInfo* pFWSkeletonInfo = NULL;
	desc = UTTypeDescIf::Create("FWSkeletonInfo");
	desc->SetSize(sizeof(Spr::FWSkeletonInfo));
	desc->SetAccess(DBG_NEW UTAccess<Spr::FWSkeletonInfo>);
	field = desc->AddField("", "int", "id", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonInfo->id) - (char*)pFWSkeletonInfo));
	field = desc->AddField("", "int", "invisibleCnt", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonInfo->invisibleCnt) - (char*)pFWSkeletonInfo));
	field = desc->AddField("UTRef", "PHSkeletonIf", "phSkeleton", "");
	desc->SetOffset(field, int((char*)&(pFWSkeletonInfo->phSkeleton) - (char*)pFWSkeletonInfo));
	db->RegisterDesc(desc);
	Spr::JointWeight* pJointWeight = NULL;
	desc = UTTypeDescIf::Create("JointWeight");
	desc->SetSize(sizeof(Spr::JointWeight));
	desc->SetAccess(DBG_NEW UTAccess<Spr::JointWeight>);
	field = desc->AddField("pointer", "PHJointIf", "joint", "");
	desc->SetOffset(field, int((char*)&(pJointWeight->joint) - (char*)pJointWeight));
	field = desc->AddField("", "double", "weight", "");
	desc->SetOffset(field, int((char*)&(pJointWeight->weight) - (char*)pJointWeight));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(FWFemMesh, FWObject);
Spr::PHFemMeshIf* Spr::FWFemMeshIf::GetPHMesh(){
	return	((FWFemMesh*)(Object*)(ObjectIf*)this)->GetPHMesh();
}
void Spr::FWFemMeshIf::DrawIHBorderXZPlane(bool sw){
	return	((FWFemMesh*)(Object*)(ObjectIf*)this)->DrawIHBorderXZPlane(sw);
}
void Spr::FWFemMeshIf::DrawFaceEdge(){
	((FWFemMesh*)(Object*)(ObjectIf*)this)->DrawFaceEdge();
}
void Spr::FWFemMeshIf::SetTexmode(unsigned int mode){
	return	((FWFemMesh*)(Object*)(ObjectIf*)this)->SetTexmode(mode);
}
SPR_IFIMP1(FWFemMeshNew, FWObject);
Spr::PHFemMeshNewIf* Spr::FWFemMeshNewIf::GetPHFemMesh(){
	return	((FWFemMeshNew*)(Object*)(ObjectIf*)this)->GetPHFemMesh();
}
void Spr::FWFemMeshNewIf::SetTexmode(unsigned int mode){
	return	((FWFemMeshNew*)(Object*)(ObjectIf*)this)->SetTexmode(mode);
}
void Spr::FWFemMeshNewIf::EnableDrawEdgeCW(bool flag){
	return	((FWFemMeshNew*)(Object*)(ObjectIf*)this)->EnableDrawEdgeCW(flag);
}
void Spr::FWFemMeshNewIf::Settexmode1Map(float temp){
	return	((FWFemMeshNew*)(Object*)(ObjectIf*)this)->Settexmode1Map(temp);
}
SPR_IFIMP1(FWHapticPointer, SceneObject);
void Spr::FWHapticPointerIf::SetPHHapticPointer(Spr::PHHapticPointerIf* hpGlobal){
	return	((FWHapticPointer*)(Object*)(ObjectIf*)this)->SetPHHapticPointer(hpGlobal);
}
Spr::PHHapticPointerIf* Spr::FWHapticPointerIf::GetPHHapticPointer(){
	return	((FWHapticPointer*)(Object*)(ObjectIf*)this)->GetPHHapticPointer();
}
void Spr::FWHapticPointerIf::SetHumanInterface(Spr::HIBaseIf* hi){
	return	((FWHapticPointer*)(Object*)(ObjectIf*)this)->SetHumanInterface(hi);
}
Spr::HIBaseIf* Spr::FWHapticPointerIf::GetHumanInterface(){
	return	((FWHapticPointer*)(Object*)(ObjectIf*)this)->GetHumanInterface();
}
SPR_IFIMP1(FWJoyStickGLUT, HIRealDevice);
SPR_IFIMP1(FWKeyMouseGLUT, HIRealDevice);
SPR_IFIMP1(FWObject, SceneObject);
Spr::PHSolidIf* Spr::FWObjectIf::GetPHSolid(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GetPHSolid();
}
void Spr::FWObjectIf::SetPHSolid(Spr::PHSolidIf* s){
	return	((FWObject*)(Object*)(ObjectIf*)this)->SetPHSolid(s);
}
Spr::GRFrameIf* Spr::FWObjectIf::GetGRFrame(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GetGRFrame();
}
void Spr::FWObjectIf::SetGRFrame(Spr::GRFrameIf* f){
	return	((FWObject*)(Object*)(ObjectIf*)this)->SetGRFrame(f);
}
Spr::PHJointIf* Spr::FWObjectIf::GetPHJoint(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GetPHJoint();
}
void Spr::FWObjectIf::SetPHJoint(Spr::PHJointIf* j){
	return	((FWObject*)(Object*)(ObjectIf*)this)->SetPHJoint(j);
}
Spr::GRFrameIf* Spr::FWObjectIf::GetChildFrame(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GetChildFrame();
}
void Spr::FWObjectIf::SetChildFrame(Spr::GRFrameIf* f){
	return	((FWObject*)(Object*)(ObjectIf*)this)->SetChildFrame(f);
}
void Spr::FWObjectIf::SetSyncSource(Spr::FWObjectDesc::FWObjectSyncSource syncSrc){
	return	((FWObject*)(Object*)(ObjectIf*)this)->SetSyncSource(syncSrc);
}
Spr::FWObjectDesc::FWObjectSyncSource Spr::FWObjectIf::GetSyncSource(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GetSyncSource();
}
void Spr::FWObjectIf::EnableAbsolute(bool bAbs){
	return	((FWObject*)(Object*)(ObjectIf*)this)->EnableAbsolute(bAbs);
}
bool Spr::FWObjectIf::IsAbsolute(){
	return	((FWObject*)(Object*)(ObjectIf*)this)->IsAbsolute();
}
bool Spr::FWObjectIf::LoadMesh(const char* filename, const IfInfo* ii, Spr::GRFrameIf* frame){
	return	((FWObject*)(Object*)(ObjectIf*)this)->LoadMesh(filename, ii, frame);
}
void Spr::FWObjectIf::GenerateCDMesh(Spr::GRFrameIf* frame, const PHMaterial& mat){
	return	((FWObject*)(Object*)(ObjectIf*)this)->GenerateCDMesh(frame, mat);
}
void Spr::FWObjectIf::Sync(){
	((FWObject*)(Object*)(ObjectIf*)this)->Sync();
}
SPR_IFIMP1(FWOpHapticHandler, SceneObject);
void Spr::FWOpHapticHandlerIf::SetHapticflag(bool flag){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->SetHapticflag(flag);
}
bool Spr::FWOpHapticHandlerIf::IsHapticEnabled(){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->IsHapticEnabled();
}
bool Spr::FWOpHapticHandlerIf::doCalibration(float dt){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->doCalibration(dt);
}
void Spr::FWOpHapticHandlerIf::SetHumanInterface(Spr::HIBaseIf* hi){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->SetHumanInterface(hi);
}
Spr::HIBaseIf* Spr::FWOpHapticHandlerIf::GetHumanInterface(){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->GetHumanInterface();
}
void Spr::FWOpHapticHandlerIf::SetHapticTimeInterval(float dt){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->SetHapticTimeInterval(dt);
}
float Spr::FWOpHapticHandlerIf::GetHapticTimeInterval(){
	return	((FWOpHapticHandler*)(Object*)(ObjectIf*)this)->GetHapticTimeInterval();
}
SPR_IFIMP1(FWOpObj, FWObject);
void Spr::FWOpObjIf::Blend(){
	((FWOpObj*)(Object*)(ObjectIf*)this)->Blend();
}
size_t Spr::FWOpObjIf::NChildObject()const{
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->NChildObject();
}
Spr::ObjectIf* Spr::FWOpObjIf::GetChildObject(size_t pos){
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->GetChildObject(pos);
}
bool Spr::FWOpObjIf::AddChildObject(Spr::ObjectIf* o){
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->AddChildObject(o);
}
void Spr::FWOpObjIf::CreateOpObjWithRadius(float r){
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->CreateOpObjWithRadius(r);
}
void Spr::FWOpObjIf::CreateOpObj(){
	((FWOpObj*)(Object*)(ObjectIf*)this)->CreateOpObj();
}
Spr::ObjectIf* Spr::FWOpObjIf::GetOpObj(){
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->GetOpObj();
}
Spr::ObjectIf* Spr::FWOpObjIf::GetGRMesh(){
	return	((FWOpObj*)(Object*)(ObjectIf*)this)->GetGRMesh();
}
SPR_IFIMP1(FWOptimizer, Object);
void Spr::FWOptimizerIf::CopyScene(Spr::PHSceneIf* phSceneInput){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->CopyScene(phSceneInput);
}
Spr::PHSceneIf* Spr::FWOptimizerIf::GetScene(){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->GetScene();
}
void Spr::FWOptimizerIf::Init(int dimension){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->Init(dimension);
}
void Spr::FWOptimizerIf::Start(){
	((FWOptimizer*)(Object*)(ObjectIf*)this)->Start();
}
void Spr::FWOptimizerIf::Abort(){
	((FWOptimizer*)(Object*)(ObjectIf*)this)->Abort();
}
bool Spr::FWOptimizerIf::IsRunning(){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->IsRunning();
}
void Spr::FWOptimizerIf::Optimize(){
	((FWOptimizer*)(Object*)(ObjectIf*)this)->Optimize();
}
void Spr::FWOptimizerIf::Iterate(){
	((FWOptimizer*)(Object*)(ObjectIf*)this)->Iterate();
}
double Spr::FWOptimizerIf::ApplyPop(Spr::PHSceneIf* phScene, const double* x, int n){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->ApplyPop(phScene, x, n);
}
double Spr::FWOptimizerIf::Objective(const double* x, int n){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->Objective(x, n);
}
int Spr::FWOptimizerIf::NResults(){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->NResults();
}
double Spr::FWOptimizerIf::GetResult(int i){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->GetResult(i);
}
double* Spr::FWOptimizerIf::GetResults(){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->GetResults();
}
double* Spr::FWOptimizerIf::GetProvisionalResults(){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->GetProvisionalResults();
}
void Spr::FWOptimizerIf::SetESParameters(double xs, double st, double tf, double la, double mi){
	return	((FWOptimizer*)(Object*)(ObjectIf*)this)->SetESParameters(xs, st, tf, la, mi);
}
SPR_IFIMP1(FWStaticTorqueOptimizer, FWOptimizer);
void Spr::FWStaticTorqueOptimizerIf::Init(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->Init();
}
void Spr::FWStaticTorqueOptimizerIf::Iterate(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->Iterate();
}
void Spr::FWStaticTorqueOptimizerIf::ApplyResult(Spr::PHSceneIf* phScene){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->ApplyResult(phScene);
}
double Spr::FWStaticTorqueOptimizerIf::ApplyPop(Spr::PHSceneIf* phScene, const double* x, int n){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->ApplyPop(phScene, x, n);
}
double Spr::FWStaticTorqueOptimizerIf::Objective(const double* x, int n){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->Objective(x, n);
}
void Spr::FWStaticTorqueOptimizerIf::SetScene(Spr::PHSceneIf* phSceneInput){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetScene(phSceneInput);
}
void Spr::FWStaticTorqueOptimizerIf::Optimize(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->Optimize();
}
bool Spr::FWStaticTorqueOptimizerIf::TestForTermination(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->TestForTermination();
}
void Spr::FWStaticTorqueOptimizerIf::TakeFinalValue(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->TakeFinalValue();
}
void Spr::FWStaticTorqueOptimizerIf::SetErrorWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetErrorWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetErrorWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetErrorWeight();
}
void Spr::FWStaticTorqueOptimizerIf::SetStabilityWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetStabilityWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetStabilityWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetStabilityWeight();
}
void Spr::FWStaticTorqueOptimizerIf::SetTorqueWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetTorqueWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetTorqueWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetTorqueWeight();
}
void Spr::FWStaticTorqueOptimizerIf::SetConstWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetConstWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetConstWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetConstWeight();
}
void Spr::FWStaticTorqueOptimizerIf::SetGravcenterWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetGravcenterWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetGravcenterWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetGravcenterWeight();
}
void Spr::FWStaticTorqueOptimizerIf::SetDifferentialWeight(double v){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetDifferentialWeight(v);
}
double Spr::FWStaticTorqueOptimizerIf::GetDifferentialWeight(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetDifferentialWeight();
}
void Spr::FWStaticTorqueOptimizerIf::AddPositionConst(Spr::FWGroundConstraint* f){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->AddPositionConst(f);
}
Spr::FWGroundConstraint Spr::FWStaticTorqueOptimizerIf::GetGroundConst(int n){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetGroundConst(n);
}
void Spr::FWStaticTorqueOptimizerIf::ClearGroundConst(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->ClearGroundConst();
}
void Spr::FWStaticTorqueOptimizerIf::AddPositionConst(Spr::FWUngroundedConstraint* f){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->AddPositionConst(f);
}
Spr::FWUngroundedConstraint Spr::FWStaticTorqueOptimizerIf::GetUngroundConst(int n){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetUngroundConst(n);
}
void Spr::FWStaticTorqueOptimizerIf::ClearUngroundedConst(){
	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->ClearUngroundedConst();
}
void Spr::FWStaticTorqueOptimizerIf::SetJointWeight(Spr::PHJointIf* jo, double w){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetJointWeight(jo, w);
}
void Spr::FWStaticTorqueOptimizerIf::SetESParameters(double xs, double st, double tf, double la, double mi){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->SetESParameters(xs, st, tf, la, mi);
}
Spr::FWObjectiveValues Spr::FWStaticTorqueOptimizerIf::GetObjectiveValues(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetObjectiveValues();
}
Vec3f Spr::FWStaticTorqueOptimizerIf::GetCenterOfGravity(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetCenterOfGravity();
}
int Spr::FWStaticTorqueOptimizerIf::NSupportPolygonVertices(){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->NSupportPolygonVertices();
}
Vec3f Spr::FWStaticTorqueOptimizerIf::GetSupportPolygonVerticesN(int n){
	return	((FWStaticTorqueOptimizer*)(Object*)(ObjectIf*)this)->GetSupportPolygonVerticesN(n);
}
SPR_IFIMP1(FWScene, Scene);
Spr::FWSdkIf* Spr::FWSceneIf::GetSdk(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetSdk();
}
Spr::PHSceneIf* Spr::FWSceneIf::GetPHScene(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetPHScene();
}
void Spr::FWSceneIf::SetPHScene(Spr::PHSceneIf* s){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetPHScene(s);
}
Spr::GRSceneIf* Spr::FWSceneIf::GetGRScene(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetGRScene();
}
void Spr::FWSceneIf::SetGRScene(Spr::GRSceneIf* s){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetGRScene(s);
}
Spr::FWObjectIf* Spr::FWSceneIf::CreateFWObject(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->CreateFWObject();
}
int Spr::FWSceneIf::NObject()const{
	return	((FWScene*)(Object*)(ObjectIf*)this)->NObject();
}
Spr::FWObjectIf* Spr::FWSceneIf::GetObject(int i){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetObject(i);
}
Spr::FWObjectIf** Spr::FWSceneIf::GetObjects(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetObjects();
}
void Spr::FWSceneIf::Sync(){
	((FWScene*)(Object*)(ObjectIf*)this)->Sync();
}
void Spr::FWSceneIf::Step(){
	((FWScene*)(Object*)(ObjectIf*)this)->Step();
}
void Spr::FWSceneIf::Draw(Spr::GRRenderIf* grRender, bool debug){
	return	((FWScene*)(Object*)(ObjectIf*)this)->Draw(grRender, debug);
}
void Spr::FWSceneIf::Draw(Spr::GRRenderIf* grRender){
	return	((FWScene*)(Object*)(ObjectIf*)this)->Draw(grRender);
}
void Spr::FWSceneIf::DrawPHScene(Spr::GRRenderIf* render){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawPHScene(render);
}
void Spr::FWSceneIf::DrawSolid(Spr::GRRenderIf* render, Spr::PHSolidIf* solid, bool solid_or_wire){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawSolid(render, solid, solid_or_wire);
}
void Spr::FWSceneIf::DrawShape(Spr::GRRenderIf* render, Spr::CDShapeIf* shape, bool solid){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawShape(render, shape, solid);
}
void Spr::FWSceneIf::DrawConstraint(Spr::GRRenderIf* render, Spr::PHConstraintIf* con){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawConstraint(render, con);
}
void Spr::FWSceneIf::DrawContact(Spr::GRRenderIf* render, Spr::PHContactPointIf* con){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawContact(render, con);
}
void Spr::FWSceneIf::DrawIK(Spr::GRRenderIf* render, Spr::PHIKEngineIf* ikEngine){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawIK(render, ikEngine);
}
void Spr::FWSceneIf::DrawLimit(Spr::GRRenderIf* render, Spr::PHConstraintIf* con){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawLimit(render, con);
}
void Spr::FWSceneIf::DrawHaptic(Spr::GRRenderIf* render, Spr::PHHapticEngineIf* hapticEngine){
	return	((FWScene*)(Object*)(ObjectIf*)this)->DrawHaptic(render, hapticEngine);
}
void Spr::FWSceneIf::SetRenderMode(bool solid, bool wire){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetRenderMode(solid, wire);
}
void Spr::FWSceneIf::EnableRender(Spr::ObjectIf* obj, bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRender(obj, enable);
}
void Spr::FWSceneIf::SetSolidMaterial(int mat, Spr::PHSolidIf* solid){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetSolidMaterial(mat, solid);
}
void Spr::FWSceneIf::SetSolidMaterial(int mat, float alha, Spr::PHSolidIf* solid){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetSolidMaterial(mat, alha, solid);
}
void Spr::FWSceneIf::SetWireMaterial(int mat, Spr::PHSolidIf* solid){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetWireMaterial(mat, solid);
}
void Spr::FWSceneIf::SetWireMaterial(int mat, float alha, Spr::PHSolidIf* solid){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetWireMaterial(mat, alha, solid);
}
void Spr::FWSceneIf::EnableRenderAxis(bool world, bool solid, bool con){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderAxis(world, solid, con);
}
void Spr::FWSceneIf::SetAxisMaterial(int matX, int matY, int matZ){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetAxisMaterial(matX, matY, matZ);
}
void Spr::FWSceneIf::SetAxisScale(float scaleWorld, float scaleSolid, float scaleCon){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetAxisScale(scaleWorld, scaleSolid, scaleCon);
}
void Spr::FWSceneIf::SetAxisStyle(int style){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetAxisStyle(style);
}
void Spr::FWSceneIf::EnableRenderForce(bool solid, bool constraint){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderForce(solid, constraint);
}
void Spr::FWSceneIf::SetForceMaterial(int matForce, int matMoment){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetForceMaterial(matForce, matMoment);
}
void Spr::FWSceneIf::SetForceScale(float scaleForce, float scaleMoment){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetForceScale(scaleForce, scaleMoment);
}
void Spr::FWSceneIf::EnableRenderPHScene(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderPHScene(enable);
}
void Spr::FWSceneIf::EnableRenderGRScene(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderGRScene(enable);
}
void Spr::FWSceneIf::EnableRenderContact(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderContact(enable);
}
void Spr::FWSceneIf::SetContactMaterial(int mat){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetContactMaterial(mat);
}
void Spr::FWSceneIf::EnableRenderBBox(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderBBox(enable);
}
void Spr::FWSceneIf::SetLocalBBoxMaterial(int mat){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetLocalBBoxMaterial(mat);
}
void Spr::FWSceneIf::SetWorldBBoxMaterial(int mat){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetWorldBBoxMaterial(mat);
}
void Spr::FWSceneIf::EnableRenderGrid(bool x, bool y, bool z){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderGrid(x, y, z);
}
void Spr::FWSceneIf::SetGridOption(char axis, float offset, float size, int slice){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetGridOption(axis, offset, size, slice);
}
void Spr::FWSceneIf::SetGridMaterial(int matX, int matY, int matZ){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetGridMaterial(matX, matY, matZ);
}
void Spr::FWSceneIf::EnableRenderIK(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderIK(enable);
}
void Spr::FWSceneIf::SetIKMaterial(int mat){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetIKMaterial(mat);
}
void Spr::FWSceneIf::SetIKScale(float scale){
	return	((FWScene*)(Object*)(ObjectIf*)this)->SetIKScale(scale);
}
void Spr::FWSceneIf::EnableRenderLimit(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderLimit(enable);
}
void Spr::FWSceneIf::EnableRenderHaptic(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderHaptic(enable);
}
void Spr::FWSceneIf::EnableRenderFem(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderFem(enable);
}
void Spr::FWSceneIf::EnableRenderSkeletonSensor(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderSkeletonSensor(enable);
}
void Spr::FWSceneIf::EnableRenderOp(bool enable){
	return	((FWScene*)(Object*)(ObjectIf*)this)->EnableRenderOp(enable);
}
void Spr::FWSceneIf::AddHumanInterface(Spr::HIForceDevice6D* d){
	return	((FWScene*)(Object*)(ObjectIf*)this)->AddHumanInterface(d);
}
Spr::FWHapticPointerIf* Spr::FWSceneIf::CreateHapticPointer(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->CreateHapticPointer();
}
void Spr::FWSceneIf::UpdateHapticPointers(){
	((FWScene*)(Object*)(ObjectIf*)this)->UpdateHapticPointers();
}
FWSkeletonSensorIf* Spr::FWSceneIf::CreateSkeletonSensor(const FWSkeletonSensorDesc& desc){
	return	((FWScene*)(Object*)(ObjectIf*)this)->CreateSkeletonSensor(desc);
}
void Spr::FWSceneIf::UpdateSkeletonSensors(){
	((FWScene*)(Object*)(ObjectIf*)this)->UpdateSkeletonSensors();
}
int Spr::FWSceneIf::NHapticPointers(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->NHapticPointers();
}
Spr::FWHapticPointerIf* Spr::FWSceneIf::GetHapticPointer(int i){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetHapticPointer(i);
}
Spr::FWOpHapticHandlerIf* Spr::FWSceneIf::CreateOpHapticHandler(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->CreateOpHapticHandler();
}
Spr::FWOpHapticHandlerIf* Spr::FWSceneIf::GetOpHapticHandler(){
	return	((FWScene*)(Object*)(ObjectIf*)this)->GetOpHapticHandler();
}
void Spr::FWSceneIf::UpdateOpHapticHandler(){
	((FWScene*)(Object*)(ObjectIf*)this)->UpdateOpHapticHandler();
}
SPR_IFIMP1(FWSdk, Sdk);
Spr::FWSceneIf* Spr::FWSdkIf::CreateScene(const Spr::PHSceneDesc& phdesc, const Spr::GRSceneDesc& grdesc){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->CreateScene(phdesc, grdesc);
}
bool Spr::FWSdkIf::LoadScene(UTString filename, Spr::ImportIf* ex, const IfInfo* ii, Spr::ObjectIfs* objs){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->LoadScene(filename, ex, ii, objs);
}
bool Spr::FWSdkIf::SaveScene(UTString filename, Spr::ImportIf* ex, const IfInfo* ii, Spr::ObjectIfs* objs){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->SaveScene(filename, ex, ii, objs);
}
int Spr::FWSdkIf::NScene()const{
	return	((FWSdk*)(Object*)(ObjectIf*)this)->NScene();
}
Spr::FWSceneIf* Spr::FWSdkIf::GetScene(int index){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetScene(index);
}
void Spr::FWSdkIf::MergeScene(Spr::FWSceneIf* scene0, Spr::FWSceneIf* scene1){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->MergeScene(scene0, scene1);
}
Spr::PHSdkIf* Spr::FWSdkIf::GetPHSdk(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetPHSdk();
}
Spr::GRSdkIf* Spr::FWSdkIf::GetGRSdk(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetGRSdk();
}
Spr::FISdkIf* Spr::FWSdkIf::GetFISdk(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetFISdk();
}
Spr::HISdkIf* Spr::FWSdkIf::GetHISdk(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetHISdk();
}
bool Spr::FWSdkIf::GetDebugMode(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetDebugMode();
}
void Spr::FWSdkIf::SetDebugMode(bool debug){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->SetDebugMode(debug);
}
void Spr::FWSdkIf::Step(){
	((FWSdk*)(Object*)(ObjectIf*)this)->Step();
}
void Spr::FWSdkIf::Draw(){
	((FWSdk*)(Object*)(ObjectIf*)this)->Draw();
}
Spr::GRRenderIf* Spr::FWSdkIf::GetRender(){
	return	((FWSdk*)(Object*)(ObjectIf*)this)->GetRender();
}
SPR_IFIMP1(FWSkeletonSensor, SceneObject);
void Spr::FWSkeletonSensorIf::Update(){
	((FWSkeletonSensor*)(Object*)(ObjectIf*)this)->Update();
}
void Spr::FWSkeletonSensorIf::SetRadius(Vec2d r){
	return	((FWSkeletonSensor*)(Object*)(ObjectIf*)this)->SetRadius(r);
}
Spr::HISkeletonSensorIf* Spr::FWSkeletonSensorIf::GetSensor(){
	return	((FWSkeletonSensor*)(Object*)(ObjectIf*)this)->GetSensor();
}
int Spr::FWSkeletonSensorIf::NSkeleton(){
	return	((FWSkeletonSensor*)(Object*)(ObjectIf*)this)->NSkeleton();
}
Spr::PHSkeletonIf* Spr::FWSkeletonSensorIf::GetSkeleton(int i){
	return	((FWSkeletonSensor*)(Object*)(ObjectIf*)this)->GetSkeleton(i);
}
SPR_IFIMP1(FWWinBase, Object);
int Spr::FWWinBaseIf::GetID(){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->GetID();
}
Vec2i Spr::FWWinBaseIf::GetPosition(){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->GetPosition();
}
void Spr::FWWinBaseIf::SetPosition(int left, int top){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->SetPosition(left, top);
}
Vec2i Spr::FWWinBaseIf::GetSize(){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->GetSize();
}
void Spr::FWWinBaseIf::SetSize(int width, int height){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->SetSize(width, height);
}
UTString Spr::FWWinBaseIf::GetTitle(){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->GetTitle();
}
void Spr::FWWinBaseIf::SetTitle(UTString title){
	return	((FWWinBase*)(Object*)(ObjectIf*)this)->SetTitle(title);
}
SPR_IFIMP1(FWControl, FWWinBase);
UTString Spr::FWControlIf::GetLabel(){
	return	((FWControl*)(Object*)(ObjectIf*)this)->GetLabel();
}
void Spr::FWControlIf::SetLabel(UTString l){
	return	((FWControl*)(Object*)(ObjectIf*)this)->SetLabel(l);
}
void Spr::FWControlIf::SetAlign(int align){
	return	((FWControl*)(Object*)(ObjectIf*)this)->SetAlign(align);
}
int Spr::FWControlIf::GetStyle(){
	return	((FWControl*)(Object*)(ObjectIf*)this)->GetStyle();
}
void Spr::FWControlIf::SetStyle(int style){
	return	((FWControl*)(Object*)(ObjectIf*)this)->SetStyle(style);
}
int Spr::FWControlIf::GetInt(){
	return	((FWControl*)(Object*)(ObjectIf*)this)->GetInt();
}
void Spr::FWControlIf::SetInt(int val){
	return	((FWControl*)(Object*)(ObjectIf*)this)->SetInt(val);
}
float Spr::FWControlIf::GetFloat(){
	return	((FWControl*)(Object*)(ObjectIf*)this)->GetFloat();
}
void Spr::FWControlIf::SetFloat(float val){
	return	((FWControl*)(Object*)(ObjectIf*)this)->SetFloat(val);
}
SPR_IFIMP1(FWPanel, FWControl);
SPR_IFIMP1(FWButton, FWControl);
void Spr::FWButtonIf::SetChecked(bool on){
	return	((FWButton*)(Object*)(ObjectIf*)this)->SetChecked(on);
}
bool Spr::FWButtonIf::IsChecked(){
	return	((FWButton*)(Object*)(ObjectIf*)this)->IsChecked();
}
SPR_IFIMP1(FWStaticText, FWControl);
SPR_IFIMP1(FWTextBox, FWControl);
void Spr::FWTextBoxIf::SetIntRange(int rmin, int rmax){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->SetIntRange(rmin, rmax);
}
void Spr::FWTextBoxIf::GetIntRange(int& rmin, int& rmax){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->GetIntRange(rmin, rmax);
}
void Spr::FWTextBoxIf::SetFloatRange(float rmin, float rmax){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->SetFloatRange(rmin, rmax);
}
void Spr::FWTextBoxIf::GetFloatRange(float& rmin, float& rmax){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->GetFloatRange(rmin, rmax);
}
const char* Spr::FWTextBoxIf::GetString(){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->GetString();
}
void Spr::FWTextBoxIf::SetString(char* str){
	return	((FWTextBox*)(Object*)(ObjectIf*)this)->SetString(str);
}
SPR_IFIMP1(FWListBox, FWControl);
void Spr::FWListBoxIf::AddItem(UTString label){
	return	((FWListBox*)(Object*)(ObjectIf*)this)->AddItem(label);
}
SPR_IFIMP1(FWRotationControl, FWControl);
Matrix3f Spr::FWRotationControlIf::GetRotation(){
	return	((FWRotationControl*)(Object*)(ObjectIf*)this)->GetRotation();
}
void Spr::FWRotationControlIf::SetRotation(const Matrix3f& rot){
	return	((FWRotationControl*)(Object*)(ObjectIf*)this)->SetRotation(rot);
}
float Spr::FWRotationControlIf::GetDamping(){
	return	((FWRotationControl*)(Object*)(ObjectIf*)this)->GetDamping();
}
void Spr::FWRotationControlIf::SetDamping(float d){
	return	((FWRotationControl*)(Object*)(ObjectIf*)this)->SetDamping(d);
}
void Spr::FWRotationControlIf::Reset(){
	((FWRotationControl*)(Object*)(ObjectIf*)this)->Reset();
}
SPR_IFIMP1(FWTranslationControl, FWControl);
Vec3f Spr::FWTranslationControlIf::GetTranslation(){
	return	((FWTranslationControl*)(Object*)(ObjectIf*)this)->GetTranslation();
}
void Spr::FWTranslationControlIf::SetTranslation(Vec3f p){
	return	((FWTranslationControl*)(Object*)(ObjectIf*)this)->SetTranslation(p);
}
float Spr::FWTranslationControlIf::GetSpeed(){
	return	((FWTranslationControl*)(Object*)(ObjectIf*)this)->GetSpeed();
}
void Spr::FWTranslationControlIf::SetSpeed(float sp){
	return	((FWTranslationControl*)(Object*)(ObjectIf*)this)->SetSpeed(sp);
}
SPR_IFIMP1(FWDialog, FWWinBase);
Spr::FWControlIf* Spr::FWDialogIf::CreateControl(const IfInfo* ii, const Spr::FWControlDesc& desc, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateControl(ii, desc, parent);
}
Spr::FWButtonIf* Spr::FWDialogIf::CreatePushButton(UTString label, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreatePushButton(label, parent);
}
Spr::FWButtonIf* Spr::FWDialogIf::CreateCheckButton(UTString label, bool checked, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateCheckButton(label, checked, parent);
}
Spr::FWButtonIf* Spr::FWDialogIf::CreateRadioButton(UTString label, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateRadioButton(label, parent);
}
Spr::FWStaticTextIf* Spr::FWDialogIf::CreateStaticText(UTString text, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateStaticText(text, parent);
}
Spr::FWTextBoxIf* Spr::FWDialogIf::CreateTextBox(UTString label, UTString text, int style, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateTextBox(label, text, style, parent);
}
Spr::FWPanelIf* Spr::FWDialogIf::CreatePanel(UTString label, int style, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreatePanel(label, style, parent);
}
Spr::FWPanelIf* Spr::FWDialogIf::CreateRadioGroup(Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateRadioGroup(parent);
}
Spr::FWRotationControlIf* Spr::FWDialogIf::CreateRotationControl(UTString label, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateRotationControl(label, parent);
}
Spr::FWTranslationControlIf* Spr::FWDialogIf::CreateTranslationControl(UTString label, int style, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateTranslationControl(label, style, parent);
}
Spr::FWListBoxIf* Spr::FWDialogIf::CreateListBox(UTString label, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateListBox(label, parent);
}
void Spr::FWDialogIf::CreateColumn(bool sep, Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateColumn(sep, parent);
}
void Spr::FWDialogIf::CreateSeparator(Spr::FWPanelIf* parent){
	return	((FWDialog*)(Object*)(ObjectIf*)this)->CreateSeparator(parent);
}
SPR_IFIMP1(FWWin, FWWinBase);
void Spr::FWWinIf::SetFullScreen(){
	((FWWin*)(Object*)(ObjectIf*)this)->SetFullScreen();
}
bool Spr::FWWinIf::GetFullScreen(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetFullScreen();
}
Spr::GRRenderIf* Spr::FWWinIf::GetRender(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetRender();
}
void Spr::FWWinIf::SetRender(Spr::GRRenderIf* data){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetRender(data);
}
Spr::FWSceneIf* Spr::FWWinIf::GetScene(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetScene();
}
void Spr::FWWinIf::SetScene(Spr::FWSceneIf* s){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetScene(s);
}
Spr::DVKeyMouseIf* Spr::FWWinIf::GetKeyMouse(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetKeyMouse();
}
void Spr::FWWinIf::SetKeyMouse(Spr::DVKeyMouseIf* dv){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetKeyMouse(dv);
}
Spr::DVJoyStickIf* Spr::FWWinIf::GetJoyStick(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetJoyStick();
}
void Spr::FWWinIf::SetJoyStick(Spr::DVJoyStickIf* dv){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetJoyStick(dv);
}
Spr::HITrackballIf* Spr::FWWinIf::GetTrackball(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetTrackball();
}
void Spr::FWWinIf::SetTrackball(Spr::HITrackballIf* dv){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetTrackball(dv);
}
void Spr::FWWinIf::SetDebugMode(bool ph_or_gr){
	return	((FWWin*)(Object*)(ObjectIf*)this)->SetDebugMode(ph_or_gr);
}
bool Spr::FWWinIf::GetDebugMode(){
	return	((FWWin*)(Object*)(ObjectIf*)this)->GetDebugMode();
}
void Spr::FWWinIf::Display(){
	((FWWin*)(Object*)(ObjectIf*)this)->Display();
}
Spr::FWDialogIf* Spr::FWWinIf::CreateDialog(const Spr::FWDialogDesc& desc){
	return	((FWWin*)(Object*)(ObjectIf*)this)->CreateDialog(desc);
}
void Spr::FWWinIf::CalcViewport(int& left, int& top, int& width, int& height){
	return	((FWWin*)(Object*)(ObjectIf*)this)->CalcViewport(left, top, width, height);
}
SPR_OBJECTIMP1(FWFemMesh, FWObject);
SPR_OBJECTIMP1(FWFemMeshNew, FWObject);
SPR_OBJECTIMP1(FWGLUI, FWGLUT);
SPR_OBJECTIMP1(FWGLUT, FWGraphicsHandler);
SPR_OBJECTIMP_ABST1(FWGraphicsHandler, Object);
SPR_OBJECTIMP1(FWHapticPointer, SceneObject);
SPR_OBJECTIMP1(FWJoyStickGLUT, HIRealDevice);
SPR_OBJECTIMP1(FWKeyMouseGLUT, HIRealDevice);
SPR_OBJECTIMP1(FWObject, SceneObject);
SPR_OBJECTIMP1(FWOpHapticHandler, SceneObject);
SPR_OBJECTIMP1(FWOpObj, FWObject);
SPR_OBJECTIMP1(FWOptimizer, Object);
SPR_OBJECTIMP1(FWScene, Scene);
SPR_OBJECTIMP1(FWSdk, Sdk);
SPR_OBJECTIMP1(FWSkeletonSensor, SceneObject);
SPR_OBJECTIMP1(FWStaticTorqueOptimizer, FWOptimizer);
SPR_OBJECTIMP1(FWWinBase, Object);
SPR_OBJECTIMP1(FWWin, FWWinBase);
SPR_OBJECTIMP1(FWDialog, FWWin);
SPR_OBJECTIMP1(FWControl, FWWinBase);
SPR_OBJECTIMP1(FWPanel, FWControl);
SPR_OBJECTIMP1(FWButton, FWControl);
SPR_OBJECTIMP1(FWStaticText, FWControl);
SPR_OBJECTIMP1(FWTextBox, FWControl);
SPR_OBJECTIMP1(FWListBox, FWControl);
SPR_OBJECTIMP1(FWRotationControl, FWControl);
SPR_OBJECTIMP1(FWTranslationControl, FWControl);
}
