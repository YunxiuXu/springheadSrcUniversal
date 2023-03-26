#include "..\..\include\Springhead.h"
#include "..\..\include\Base\Env.h"
#include "..\..\include\Base\BaseDebug.h"
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
#include "..\..\include\Creature\SprCRBody.h"
#include "..\..\include\Creature\SprCRBone.h"
#include "..\..\include\Creature\SprCRController.h"
#include "..\..\include\Creature\SprCRCreature.h"
#include "..\..\include\Creature\SprCREngine.h"
#include "..\..\include\Creature\SprCRReachController.h"
#include "..\..\include\Creature\SprCRSdk.h"
#include "..\..\include\Creature\SprCRTimeSeries.h"
#include "..\..\include\Creature\SprCRTouchSensor.h"
#include "..\..\include\Creature\SprCRTrajectoryPlanner.h"
#include "..\..\include\Creature\SprCRVisualSensor.h"
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
#include "..\Creature\CRBody.h"
#include "..\Creature\CRBone.h"
#include "..\Creature\CRCreature.h"
#include "..\Creature\CREngine.h"
#include "..\Creature\CRGazeController.h"
#include "..\Creature\CRGrabController.h"
#include "..\Creature\CRMinimumJerkTrajectory.h"
#include "..\Creature\CRMotionController.h"
#include "..\Creature\CRMotionPlanner.h"
#include "..\Creature\CRReachController.h"
#include "..\Creature\CRSdk.h"
#include "..\Creature\CRTouchSensor.h"
#include "..\Creature\CRTrajectoryPlanner.h"
#include "..\Creature\CRVisualSensor.h"
namespace Spr{

void RegisterTypeDescCreature(UTTypeDescDbIf* db){
	static bool bFirst=true;
	if (!bFirst) return;
	bFirst = false;

	UTTypeDescIf* desc;
	int field;
	Spr::CRBodyDesc* pCRBodyDesc = NULL;
	desc = UTTypeDescIf::Create("CRBodyDesc");
	desc->SetSize(sizeof(Spr::CRBodyDesc));
	desc->SetIfInfo(CRBodyIf::GetIfInfoStatic());
	((IfInfo*)CRBodyIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRBodyDesc>);
	db->RegisterDesc(desc);
	Spr::CRBoneDesc* pCRBoneDesc = NULL;
	desc = UTTypeDescIf::Create("CRBoneDesc");
	desc->SetSize(sizeof(Spr::CRBoneDesc));
	desc->SetIfInfo(CRBoneIf::GetIfInfoStatic());
	((IfInfo*)CRBoneIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRBoneDesc>);
	field = desc->AddField("", "string", "label", "");
	desc->SetOffset(field, int((char*)&(pCRBoneDesc->label) - (char*)pCRBoneDesc));
	db->RegisterDesc(desc);
	Spr::CRControllerDesc* pCRControllerDesc = NULL;
	desc = UTTypeDescIf::Create("CRControllerDesc");
	desc->SetSize(sizeof(Spr::CRControllerDesc));
	desc->SetIfInfo(CRControllerIf::GetIfInfoStatic());
	((IfInfo*)CRControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRControllerDesc>);
	field = desc->AddBase("CREngineDesc");
	desc->SetOffset(field, int((char*)(CREngineDesc*)pCRControllerDesc - (char*)pCRControllerDesc));
	db->RegisterDesc(desc);
	Spr::CRGazeControllerDesc* pCRGazeControllerDesc = NULL;
	desc = UTTypeDescIf::Create("CRGazeControllerDesc");
	desc->SetSize(sizeof(Spr::CRGazeControllerDesc));
	desc->SetIfInfo(CRGazeControllerIf::GetIfInfoStatic());
	((IfInfo*)CRGazeControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRGazeControllerDesc>);
	field = desc->AddField("", "Vec3d", "front", "");
	desc->SetOffset(field, int((char*)&(pCRGazeControllerDesc->front) - (char*)pCRGazeControllerDesc));
	field = desc->AddField("", "Vec3d", "up", "");
	desc->SetOffset(field, int((char*)&(pCRGazeControllerDesc->up) - (char*)pCRGazeControllerDesc));
	db->RegisterDesc(desc);
	Spr::CRGrabControllerDesc* pCRGrabControllerDesc = NULL;
	desc = UTTypeDescIf::Create("CRGrabControllerDesc");
	desc->SetSize(sizeof(Spr::CRGrabControllerDesc));
	desc->SetIfInfo(CRGrabControllerIf::GetIfInfoStatic());
	((IfInfo*)CRGrabControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRGrabControllerDesc>);
	field = desc->AddBase("CRControllerDesc");
	desc->SetOffset(field, int((char*)(CRControllerDesc*)pCRGrabControllerDesc - (char*)pCRGrabControllerDesc));
	db->RegisterDesc(desc);
	Spr::CRCreatureDesc* pCRCreatureDesc = NULL;
	desc = UTTypeDescIf::Create("CRCreatureDesc");
	desc->SetSize(sizeof(Spr::CRCreatureDesc));
	desc->SetIfInfo(CRCreatureIf::GetIfInfoStatic());
	((IfInfo*)CRCreatureIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRCreatureDesc>);
	db->RegisterDesc(desc);
	Spr::CREngineDesc* pCREngineDesc = NULL;
	desc = UTTypeDescIf::Create("CREngineDesc");
	desc->SetSize(sizeof(Spr::CREngineDesc));
	desc->SetIfInfo(CREngineIf::GetIfInfoStatic());
	((IfInfo*)CREngineIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CREngineDesc>);
	db->RegisterDesc(desc);
	Spr::CRReachControllerState* pCRReachControllerState = NULL;
	desc = UTTypeDescIf::Create("CRReachControllerState");
	desc->SetSize(sizeof(Spr::CRReachControllerState));
	desc->SetIfInfo(CRReachControllerIf::GetIfInfoStatic());
	((IfInfo*)CRReachControllerIf::GetIfInfoStatic())->SetState(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRReachControllerState>);
	field = desc->AddField("", "float", "time", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->time) - (char*)pCRReachControllerState));
	field = desc->AddField("", "float", "reachTime", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->reachTime) - (char*)pCRReachControllerState));
	field = desc->AddField("", "float", "viaTime", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->viaTime) - (char*)pCRReachControllerState));
	field = desc->AddField("", "float", "oricontTimeRatio", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->oricontTimeRatio) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "initPos", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->initPos) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "initVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->initVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "initAVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->initAVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Quaterniond", "initOri", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->initOri) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "viaPos", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->viaPos) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Quaterniond", "viaOri", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->viaOri) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "targPos", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->targPos) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "targVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->targVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "targAVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->targAVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Quaterniond", "targOri", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->targOri) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "currPos", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->currPos) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "currVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->currVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "currAVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->currAVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Quaterniond", "currOri", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->currOri) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "finalPos", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->finalPos) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "finalVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->finalVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Vec3d", "finalAVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->finalAVel) - (char*)pCRReachControllerState));
	field = desc->AddField("", "Quaterniond", "finalOri", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerState->finalOri) - (char*)pCRReachControllerState));
	db->RegisterDesc(desc);
	Spr::CRReachControllerDesc* pCRReachControllerDesc = NULL;
	desc = UTTypeDescIf::Create("CRReachControllerDesc");
	desc->SetSize(sizeof(Spr::CRReachControllerDesc));
	desc->SetIfInfo(CRReachControllerIf::GetIfInfoStatic());
	((IfInfo*)CRReachControllerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRReachControllerDesc>);
	field = desc->AddBase("CRControllerDesc");
	desc->SetOffset(field, int((char*)(CRControllerDesc*)pCRReachControllerDesc - (char*)pCRReachControllerDesc));
	field = desc->AddBase("CRReachControllerState");
	desc->SetOffset(field, int((char*)(CRReachControllerState*)pCRReachControllerDesc - (char*)pCRReachControllerDesc));
	field = desc->AddField("", "double", "margin", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerDesc->margin) - (char*)pCRReachControllerDesc));
	field = desc->AddField("", "double", "innerMargin", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerDesc->innerMargin) - (char*)pCRReachControllerDesc));
	field = desc->AddField("", "double", "averageSpeed", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerDesc->averageSpeed) - (char*)pCRReachControllerDesc));
	field = desc->AddField("", "double", "waitVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerDesc->waitVel) - (char*)pCRReachControllerDesc));
	field = desc->AddField("", "double", "restartVel", "");
	desc->SetOffset(field, int((char*)&(pCRReachControllerDesc->restartVel) - (char*)pCRReachControllerDesc));
	db->RegisterDesc(desc);
	Spr::CRSdkDesc* pCRSdkDesc = NULL;
	desc = UTTypeDescIf::Create("CRSdkDesc");
	desc->SetSize(sizeof(Spr::CRSdkDesc));
	desc->SetIfInfo(CRSdkIf::GetIfInfoStatic());
	((IfInfo*)CRSdkIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRSdkDesc>);
	db->RegisterDesc(desc);
	Spr::CRJointTimeSlice* pCRJointTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRJointTimeSlice");
	desc->SetSize(sizeof(Spr::CRJointTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRJointTimeSlice>);
	field = desc->AddField("pointer", "CRBoneIf", "bone", "");
	desc->SetOffset(field, int((char*)&(pCRJointTimeSlice->bone) - (char*)pCRJointTimeSlice));
	field = desc->AddField("", "double", "time", "");
	desc->SetOffset(field, int((char*)&(pCRJointTimeSlice->time) - (char*)pCRJointTimeSlice));
	field = desc->AddField("", "bool", "enable", "6");
	desc->SetOffset(field, int((char*)&(pCRJointTimeSlice->enable) - (char*)pCRJointTimeSlice));
	field = desc->AddField("", "double", "springRatio", "");
	desc->SetOffset(field, int((char*)&(pCRJointTimeSlice->springRatio) - (char*)pCRJointTimeSlice));
	field = desc->AddField("", "double", "damperRatio", "");
	desc->SetOffset(field, int((char*)&(pCRJointTimeSlice->damperRatio) - (char*)pCRJointTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRHingeJointTimeSlice* pCRHingeJointTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRHingeJointTimeSlice");
	desc->SetSize(sizeof(Spr::CRHingeJointTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRHingeJointTimeSlice>);
	field = desc->AddBase("CRJointTimeSlice");
	desc->SetOffset(field, int((char*)(CRJointTimeSlice*)pCRHingeJointTimeSlice - (char*)pCRHingeJointTimeSlice));
	field = desc->AddField("", "double", "angle", "");
	desc->SetOffset(field, int((char*)&(pCRHingeJointTimeSlice->angle) - (char*)pCRHingeJointTimeSlice));
	field = desc->AddField("", "double", "velocity", "");
	desc->SetOffset(field, int((char*)&(pCRHingeJointTimeSlice->velocity) - (char*)pCRHingeJointTimeSlice));
	field = desc->AddField("", "double", "acceleration", "");
	desc->SetOffset(field, int((char*)&(pCRHingeJointTimeSlice->acceleration) - (char*)pCRHingeJointTimeSlice));
	field = desc->AddField("", "double", "torque", "");
	desc->SetOffset(field, int((char*)&(pCRHingeJointTimeSlice->torque) - (char*)pCRHingeJointTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRBallJointTimeSlice* pCRBallJointTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRBallJointTimeSlice");
	desc->SetSize(sizeof(Spr::CRBallJointTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRBallJointTimeSlice>);
	field = desc->AddBase("CRJointTimeSlice");
	desc->SetOffset(field, int((char*)(CRJointTimeSlice*)pCRBallJointTimeSlice - (char*)pCRBallJointTimeSlice));
	field = desc->AddField("", "Quaterniond", "orientation", "");
	desc->SetOffset(field, int((char*)&(pCRBallJointTimeSlice->orientation) - (char*)pCRBallJointTimeSlice));
	field = desc->AddField("", "Vec3d", "velocity", "");
	desc->SetOffset(field, int((char*)&(pCRBallJointTimeSlice->velocity) - (char*)pCRBallJointTimeSlice));
	field = desc->AddField("", "Vec3d", "acceleration", "");
	desc->SetOffset(field, int((char*)&(pCRBallJointTimeSlice->acceleration) - (char*)pCRBallJointTimeSlice));
	field = desc->AddField("", "Vec3d", "torque", "");
	desc->SetOffset(field, int((char*)&(pCRBallJointTimeSlice->torque) - (char*)pCRBallJointTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRJointsTimeSlice* pCRJointsTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRJointsTimeSlice");
	desc->SetSize(sizeof(Spr::CRJointsTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRJointsTimeSlice>);
	field = desc->AddField("vector", "CRJointTimeSlice", "jointTimeSlice", "");
	desc->SetOffset(field, int((char*)&(pCRJointsTimeSlice->jointTimeSlice) - (char*)pCRJointsTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRJointsTimeSeries* pCRJointsTimeSeries = NULL;
	desc = UTTypeDescIf::Create("CRJointsTimeSeries");
	desc->SetSize(sizeof(Spr::CRJointsTimeSeries));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRJointsTimeSeries>);
	field = desc->AddField("vector", "CRJointsTimeSlice", "jointsTimeSlice", "");
	desc->SetOffset(field, int((char*)&(pCRJointsTimeSeries->jointsTimeSlice) - (char*)pCRJointsTimeSeries));
	db->RegisterDesc(desc);
	Spr::CRSolidTimeSlice* pCRSolidTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRSolidTimeSlice");
	desc->SetSize(sizeof(Spr::CRSolidTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRSolidTimeSlice>);
	field = desc->AddField("pointer", "CRBoneIf", "bone", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->bone) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "double", "time", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->time) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "bool", "enable", "5");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->enable) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "Posed", "pose", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->pose) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "Vec6d", "velocity", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->velocity) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "Vec6d", "acceleration", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->acceleration) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "double", "springRatio", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->springRatio) - (char*)pCRSolidTimeSlice));
	field = desc->AddField("", "double", "damperRatio", "");
	desc->SetOffset(field, int((char*)&(pCRSolidTimeSlice->damperRatio) - (char*)pCRSolidTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRSolidsTimeSlice* pCRSolidsTimeSlice = NULL;
	desc = UTTypeDescIf::Create("CRSolidsTimeSlice");
	desc->SetSize(sizeof(Spr::CRSolidsTimeSlice));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRSolidsTimeSlice>);
	field = desc->AddField("vector", "CRSolidTimeSlice", "solidTimeSlice", "");
	desc->SetOffset(field, int((char*)&(pCRSolidsTimeSlice->solidTimeSlice) - (char*)pCRSolidsTimeSlice));
	db->RegisterDesc(desc);
	Spr::CRSolidsTimeSeries* pCRSolidsTimeSeries = NULL;
	desc = UTTypeDescIf::Create("CRSolidsTimeSeries");
	desc->SetSize(sizeof(Spr::CRSolidsTimeSeries));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRSolidsTimeSeries>);
	field = desc->AddField("vector", "CRSolidsTimeSlice", "solidsTimeSlice", "");
	desc->SetOffset(field, int((char*)&(pCRSolidsTimeSeries->solidsTimeSlice) - (char*)pCRSolidsTimeSeries));
	db->RegisterDesc(desc);
	Spr::CRContactInfo* pCRContactInfo = NULL;
	desc = UTTypeDescIf::Create("CRContactInfo");
	desc->SetSize(sizeof(Spr::CRContactInfo));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRContactInfo>);
	field = desc->AddField("", "double", "dimension", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->dimension) - (char*)pCRContactInfo));
	field = desc->AddField("", "Vec3d", "normal", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->normal) - (char*)pCRContactInfo));
	field = desc->AddField("", "double", "pressure", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->pressure) - (char*)pCRContactInfo));
	field = desc->AddField("", "Vec3d", "pos", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->pos) - (char*)pCRContactInfo));
	field = desc->AddField("pointer", "PHSolidIf", "soMe", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->soMe) - (char*)pCRContactInfo));
	field = desc->AddField("pointer", "PHSolidIf", "soOther", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->soOther) - (char*)pCRContactInfo));
	field = desc->AddField("", "Vec3d", "force", "");
	desc->SetOffset(field, int((char*)&(pCRContactInfo->force) - (char*)pCRContactInfo));
	db->RegisterDesc(desc);
	Spr::CRTouchSensorDesc* pCRTouchSensorDesc = NULL;
	desc = UTTypeDescIf::Create("CRTouchSensorDesc");
	desc->SetSize(sizeof(Spr::CRTouchSensorDesc));
	desc->SetIfInfo(CRTouchSensorIf::GetIfInfoStatic());
	((IfInfo*)CRTouchSensorIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRTouchSensorDesc>);
	field = desc->AddBase("CREngineDesc");
	desc->SetOffset(field, int((char*)(CREngineDesc*)pCRTouchSensorDesc - (char*)pCRTouchSensorDesc));
	db->RegisterDesc(desc);
	Spr::ControlPoint* pControlPoint = NULL;
	desc = UTTypeDescIf::Create("ControlPoint");
	desc->SetSize(sizeof(Spr::ControlPoint));
	desc->SetAccess(DBG_NEW UTAccess<Spr::ControlPoint>);
	field = desc->AddField("", "Posed", "pose", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->pose) - (char*)pControlPoint));
	field = desc->AddField("", "SpatialVector", "vel", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->vel) - (char*)pControlPoint));
	field = desc->AddField("", "SpatialVector", "acc", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->acc) - (char*)pControlPoint));
	field = desc->AddField("", "double", "time", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->time) - (char*)pControlPoint));
	field = desc->AddField("", "bool", "velControl", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->velControl) - (char*)pControlPoint));
	field = desc->AddField("", "bool", "accControl", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->accControl) - (char*)pControlPoint));
	field = desc->AddField("", "bool", "timeControl", "");
	desc->SetOffset(field, int((char*)&(pControlPoint->timeControl) - (char*)pControlPoint));
	db->RegisterDesc(desc);
	Spr::CRTrajectoryPlannerDesc* pCRTrajectoryPlannerDesc = NULL;
	desc = UTTypeDescIf::Create("CRTrajectoryPlannerDesc");
	desc->SetSize(sizeof(Spr::CRTrajectoryPlannerDesc));
	desc->SetIfInfo(CRTrajectoryPlannerIf::GetIfInfoStatic());
	((IfInfo*)CRTrajectoryPlannerIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRTrajectoryPlannerDesc>);
	field = desc->AddField("", "double", "depth", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->depth) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "int", "maxIterate", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->maxIterate) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "int", "maxLPF", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->maxLPF) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "double", "LPFRate", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->LPFRate) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bCorrection", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bCorrection) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bStaticTarget", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bStaticTarget) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bUseSpringCorrection", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bUseSpringCorrection) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bUseJointMJTInitial", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bUseJointMJTInitial) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bViaCorrection", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bViaCorrection) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "int", "maxIterateViaAdjust", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->maxIterateViaAdjust) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "double", "viaAdjustRate", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->viaAdjustRate) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "double", "springRate", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->springRate) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "double", "damperRate", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->damperRate) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bMultiplePD", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bMultiplePD) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bChangeBias", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bChangeBias) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "bool", "bChangePullback", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->bChangePullback) - (char*)pCRTrajectoryPlannerDesc));
	field = desc->AddField("", "string", "outputPath", "");
	desc->SetOffset(field, int((char*)&(pCRTrajectoryPlannerDesc->outputPath) - (char*)pCRTrajectoryPlannerDesc));
	db->RegisterDesc(desc);
	Spr::CRVisualInfo* pCRVisualInfo = NULL;
	desc = UTTypeDescIf::Create("CRVisualInfo");
	desc->SetSize(sizeof(Spr::CRVisualInfo));
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRVisualInfo>);
	field = desc->AddField("", "Vec3d", "posWorld", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->posWorld) - (char*)pCRVisualInfo));
	field = desc->AddField("", "Vec3d", "posLocal", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->posLocal) - (char*)pCRVisualInfo));
	field = desc->AddField("", "Vec3d", "velWorld", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->velWorld) - (char*)pCRVisualInfo));
	field = desc->AddField("", "Vec3d", "velLocal", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->velLocal) - (char*)pCRVisualInfo));
	field = desc->AddField("", "double", "angle", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->angle) - (char*)pCRVisualInfo));
	field = desc->AddField("pointer", "PHSolidIf", "solid", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->solid) - (char*)pCRVisualInfo));
	field = desc->AddField("pointer", "PHSolidIf", "solidSensor", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->solidSensor) - (char*)pCRVisualInfo));
	field = desc->AddField("", "Posed", "sensorPose", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->sensorPose) - (char*)pCRVisualInfo));
	field = desc->AddField("", "bool", "bMyBody", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->bMyBody) - (char*)pCRVisualInfo));
	field = desc->AddField("", "bool", "bCenter", "");
	desc->SetOffset(field, int((char*)&(pCRVisualInfo->bCenter) - (char*)pCRVisualInfo));
	db->RegisterDesc(desc);
	Spr::CRVisualSensorDesc* pCRVisualSensorDesc = NULL;
	desc = UTTypeDescIf::Create("CRVisualSensorDesc");
	desc->SetSize(sizeof(Spr::CRVisualSensorDesc));
	desc->SetIfInfo(CRVisualSensorIf::GetIfInfoStatic());
	((IfInfo*)CRVisualSensorIf::GetIfInfoStatic())->SetDesc(desc);
	desc->SetAccess(DBG_NEW UTAccess<Spr::CRVisualSensorDesc>);
	field = desc->AddBase("CREngineDesc");
	desc->SetOffset(field, int((char*)(CREngineDesc*)pCRVisualSensorDesc - (char*)pCRVisualSensorDesc));
	field = desc->AddField("", "Vec2d", "range", "");
	desc->SetOffset(field, int((char*)&(pCRVisualSensorDesc->range) - (char*)pCRVisualSensorDesc));
	field = desc->AddField("", "Vec2d", "centerRange", "");
	desc->SetOffset(field, int((char*)&(pCRVisualSensorDesc->centerRange) - (char*)pCRVisualSensorDesc));
	field = desc->AddField("", "Posed", "pose", "");
	desc->SetOffset(field, int((char*)&(pCRVisualSensorDesc->pose) - (char*)pCRVisualSensorDesc));
	field = desc->AddField("", "float", "limitDistance", "");
	desc->SetOffset(field, int((char*)&(pCRVisualSensorDesc->limitDistance) - (char*)pCRVisualSensorDesc));
	db->RegisterDesc(desc);
}

SPR_IFIMP1(CRBody, SceneObject);
Spr::CRBoneIf* Spr::CRBodyIf::FindByIKActuator(Spr::PHIKActuatorIf* actuator){
	return	((CRBody*)(Object*)(ObjectIf*)this)->FindByIKActuator(actuator);
}
Spr::CRBoneIf* Spr::CRBodyIf::FindByLabel(UTString label){
	return	((CRBody*)(Object*)(ObjectIf*)this)->FindByLabel(label);
}
int Spr::CRBodyIf::NBones(){
	return	((CRBody*)(Object*)(ObjectIf*)this)->NBones();
}
Spr::CRBoneIf* Spr::CRBodyIf::GetBone(int i){
	return	((CRBody*)(Object*)(ObjectIf*)this)->GetBone(i);
}
Vec3d Spr::CRBodyIf::GetCenterOfMass(){
	return	((CRBody*)(Object*)(ObjectIf*)this)->GetCenterOfMass();
}
double Spr::CRBodyIf::GetSumOfMass(){
	return	((CRBody*)(Object*)(ObjectIf*)this)->GetSumOfMass();
}
void Spr::CRBodyIf::Step(){
	((CRBody*)(Object*)(ObjectIf*)this)->Step();
}
SPR_IFIMP1(CRBone, SceneObject);
const char* Spr::CRBoneIf::GetLabel()const{
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetLabel();
}
void Spr::CRBoneIf::SetLabel(const char* str){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetLabel(str);
}
Spr::PHSolidIf* Spr::CRBoneIf::GetPHSolid(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetPHSolid();
}
void Spr::CRBoneIf::SetPHSolid(Spr::PHSolidIf* so){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetPHSolid(so);
}
Spr::PHIKEndEffectorIf* Spr::CRBoneIf::GetIKEndEffector(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetIKEndEffector();
}
void Spr::CRBoneIf::SetIKEndEffector(Spr::PHIKEndEffectorIf* ikEE){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetIKEndEffector(ikEE);
}
Spr::PHJointIf* Spr::CRBoneIf::GetPHJoint(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetPHJoint();
}
void Spr::CRBoneIf::SetPHJoint(Spr::PHJointIf* jo){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetPHJoint(jo);
}
Spr::PHIKActuatorIf* Spr::CRBoneIf::GetIKActuator(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetIKActuator();
}
void Spr::CRBoneIf::SetIKActuator(Spr::PHIKActuatorIf* ikAct){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetIKActuator(ikAct);
}
void Spr::CRBoneIf::SetParentBone(Spr::CRBoneIf* parent){
	return	((CRBone*)(Object*)(ObjectIf*)this)->SetParentBone(parent);
}
Spr::CRBoneIf* Spr::CRBoneIf::GetParentBone(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetParentBone();
}
int Spr::CRBoneIf::NChildBones(){
	return	((CRBone*)(Object*)(ObjectIf*)this)->NChildBones();
}
Spr::CRBoneIf* Spr::CRBoneIf::GetChildBone(int number){
	return	((CRBone*)(Object*)(ObjectIf*)this)->GetChildBone(number);
}
void Spr::CRBoneIf::AddChildBone(Spr::CRBoneIf* child){
	return	((CRBone*)(Object*)(ObjectIf*)this)->AddChildBone(child);
}
void Spr::CRBoneIf::ReadInitialSpringDamperFromJoint(){
	((CRBone*)(Object*)(ObjectIf*)this)->ReadInitialSpringDamperFromJoint();
}
SPR_IFIMP1(CRController, CREngine);
void Spr::CRControllerIf::Reset(){
	((CRController*)(Object*)(ObjectIf*)this)->Reset();
}
int Spr::CRControllerIf::GetStatus(){
	return	((CRController*)(Object*)(ObjectIf*)this)->GetStatus();
}
SPR_IFIMP1(CRGazeController, CRController);
void Spr::CRGazeControllerIf::SetTargetPosition(Vec3d pos){
	return	((CRGazeController*)(Object*)(ObjectIf*)this)->SetTargetPosition(pos);
}
Vec3d Spr::CRGazeControllerIf::GetTargetPosition(){
	return	((CRGazeController*)(Object*)(ObjectIf*)this)->GetTargetPosition();
}
void Spr::CRGazeControllerIf::SetHeadBone(Spr::CRBoneIf* head){
	return	((CRGazeController*)(Object*)(ObjectIf*)this)->SetHeadBone(head);
}
SPR_IFIMP1(CRGrabController, CRController);
void Spr::CRGrabControllerIf::SetTargetSolid(Spr::PHSolidIf* targetSolid){
	return	((CRGrabController*)(Object*)(ObjectIf*)this)->SetTargetSolid(targetSolid);
}
Spr::PHSolidIf* Spr::CRGrabControllerIf::GetGrabbingSolid(){
	return	((CRGrabController*)(Object*)(ObjectIf*)this)->GetGrabbingSolid();
}
Spr::PHSolidIf* Spr::CRGrabControllerIf::GetSolid(){
	return	((CRGrabController*)(Object*)(ObjectIf*)this)->GetSolid();
}
void Spr::CRGrabControllerIf::SetSolid(Spr::CRBoneIf* so){
	return	((CRGrabController*)(Object*)(ObjectIf*)this)->SetSolid(so);
}
SPR_IFIMP1(CRCreature, Scene);
void Spr::CRCreatureIf::Step(){
	((CRCreature*)(Object*)(ObjectIf*)this)->Step();
}
Spr::CRBodyIf* Spr::CRCreatureIf::CreateBody(const IfInfo* ii, const Spr::CRBodyDesc& desc){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->CreateBody(ii, desc);
}
Spr::CRBodyIf* Spr::CRCreatureIf::GetBody(int i){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->GetBody(i);
}
int Spr::CRCreatureIf::NBodies(){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->NBodies();
}
Spr::CREngineIf* Spr::CRCreatureIf::CreateEngine(const IfInfo* ii, const Spr::CREngineDesc& desc){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->CreateEngine(ii, desc);
}
Spr::CREngineIf* Spr::CRCreatureIf::GetEngine(int i){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->GetEngine(i);
}
int Spr::CRCreatureIf::NEngines(){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->NEngines();
}
Spr::PHSceneIf* Spr::CRCreatureIf::GetPHScene(){
	return	((CRCreature*)(Object*)(ObjectIf*)this)->GetPHScene();
}
SPR_IFIMP1(CREngine, SceneObject);
int Spr::CREngineIf::GetPriority()const{
	return	((CREngine*)(Object*)(ObjectIf*)this)->GetPriority();
}
void Spr::CREngineIf::Init(){
	((CREngine*)(Object*)(ObjectIf*)this)->Init();
}
void Spr::CREngineIf::Step(){
	((CREngine*)(Object*)(ObjectIf*)this)->Step();
}
void Spr::CREngineIf::Enable(bool enable){
	return	((CREngine*)(Object*)(ObjectIf*)this)->Enable(enable);
}
bool Spr::CREngineIf::IsEnabled(){
	return	((CREngine*)(Object*)(ObjectIf*)this)->IsEnabled();
}
SPR_IFIMP1(CRReachController, CRController);
void Spr::CRReachControllerIf::SetIKEndEffector(Spr::PHIKEndEffectorIf* ikEff, int n){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetIKEndEffector(ikEff, n);
}
Spr::PHIKEndEffectorIf* Spr::CRReachControllerIf::GetIKEndEffector(int n){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetIKEndEffector(n);
}
void Spr::CRReachControllerIf::SetFinalPos(Vec3d pos){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetFinalPos(pos);
}
void Spr::CRReachControllerIf::SetFinalVel(Vec3d vel){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetFinalVel(vel);
}
void Spr::CRReachControllerIf::SetViaTime(float time){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetViaTime(time);
}
void Spr::CRReachControllerIf::SetViaPos(Vec3d pos){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetViaPos(pos);
}
void Spr::CRReachControllerIf::EnableLookatMode(bool bEnable){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->EnableLookatMode(bEnable);
}
bool Spr::CRReachControllerIf::IsLookatMode(){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->IsLookatMode();
}
void Spr::CRReachControllerIf::SetNumUseHands(int n){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetNumUseHands(n);
}
int Spr::CRReachControllerIf::GetNumUseHands(){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetNumUseHands();
}
void Spr::CRReachControllerIf::SetBaseJoint(int n, Spr::PHJointIf* jo){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetBaseJoint(n, jo);
}
void Spr::CRReachControllerIf::SetAverageSpeed(double speed){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetAverageSpeed(speed);
}
double Spr::CRReachControllerIf::GetAverageSpeed(){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetAverageSpeed();
}
void Spr::CRReachControllerIf::SetMargin(double margin){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetMargin(margin);
}
void Spr::CRReachControllerIf::SetInnerMargin(double margin){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetInnerMargin(margin);
}
void Spr::CRReachControllerIf::SetWaitVel(double vel){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetWaitVel(vel);
}
void Spr::CRReachControllerIf::SetRestartVel(double vel){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetRestartVel(vel);
}
Vec6d Spr::CRReachControllerIf::GetTrajectory(float s){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetTrajectory(s);
}
float Spr::CRReachControllerIf::GetReachTime(){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetReachTime();
}
float Spr::CRReachControllerIf::GetTime(){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->GetTime();
}
void Spr::CRReachControllerIf::Draw(){
	((CRReachController*)(Object*)(ObjectIf*)this)->Draw();
}
void Spr::CRReachControllerIf::SetOriControlCompleteTimeRatio(float oriTime){
	return	((CRReachController*)(Object*)(ObjectIf*)this)->SetOriControlCompleteTimeRatio(oriTime);
}
SPR_IFIMP1(CRSdk, Sdk);
Spr::CRCreatureIf* Spr::CRSdkIf::CreateCreature(const IfInfo* ii, const Spr::CRCreatureDesc& desc){
	return	((CRSdk*)(Object*)(ObjectIf*)this)->CreateCreature(ii, desc);
}
int Spr::CRSdkIf::NCreatures()const{
	return	((CRSdk*)(Object*)(ObjectIf*)this)->NCreatures();
}
Spr::CRCreatureIf* Spr::CRSdkIf::GetCreature(int index){
	return	((CRSdk*)(Object*)(ObjectIf*)this)->GetCreature(index);
}
void Spr::CRSdkIf::Step(){
	((CRSdk*)(Object*)(ObjectIf*)this)->Step();
}
SPR_IFIMP1(CRTouchSensor, CREngine);
int Spr::CRTouchSensorIf::NContacts(){
	return	((CRTouchSensor*)(Object*)(ObjectIf*)this)->NContacts();
}
Spr::CRContactInfo Spr::CRTouchSensorIf::GetContact(int n){
	return	((CRTouchSensor*)(Object*)(ObjectIf*)this)->GetContact(n);
}
void Spr::CRTouchSensorIf::Update(){
	((CRTouchSensor*)(Object*)(ObjectIf*)this)->Update();
}
SPR_IFIMP1(CRTrajectoryPlanner, Object);
void Spr::CRTrajectoryPlannerIf::SetDepth(int d){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetDepth(d);
}
int Spr::CRTrajectoryPlannerIf::GetDepth(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetDepth();
}
void Spr::CRTrajectoryPlannerIf::SetMaxIterate(int i){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetMaxIterate(i);
}
int Spr::CRTrajectoryPlannerIf::GetMaxIterate(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetMaxIterate();
}
void Spr::CRTrajectoryPlannerIf::SetMaxLPF(int l){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetMaxLPF(l);
}
int Spr::CRTrajectoryPlannerIf::GetMaxLPF(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetMaxLPF();
}
void Spr::CRTrajectoryPlannerIf::SetLPFRate(double r){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetLPFRate(r);
}
double Spr::CRTrajectoryPlannerIf::GetLPFRate(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetLPFRate();
}
void Spr::CRTrajectoryPlannerIf::EnableCorrection(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableCorrection(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledCorrection(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledCorrection();
}
void Spr::CRTrajectoryPlannerIf::EnableStaticTarget(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableStaticTarget(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledStaticTarget(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledStaticTarget();
}
void Spr::CRTrajectoryPlannerIf::EnableSpringCorrection(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableSpringCorrection(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEbabledSpringCorrection(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEbabledSpringCorrection();
}
void Spr::CRTrajectoryPlannerIf::EnableJointMJTInitial(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableJointMJTInitial(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEbabledJointMJTInitial(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEbabledJointMJTInitial();
}
void Spr::CRTrajectoryPlannerIf::EnableViaCorrection(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableViaCorrection(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledViaCorrection(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledViaCorrection();
}
void Spr::CRTrajectoryPlannerIf::SetMaxIterateViaAdjust(int m){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetMaxIterateViaAdjust(m);
}
int Spr::CRTrajectoryPlannerIf::GetMaxIterateViaAdjust(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetMaxIterateViaAdjust();
}
void Spr::CRTrajectoryPlannerIf::SetViaAdjustRate(double r){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetViaAdjustRate(r);
}
double Spr::CRTrajectoryPlannerIf::GetViaAdjustRate(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetViaAdjustRate();
}
void Spr::CRTrajectoryPlannerIf::SetSpringRate(double s){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetSpringRate(s);
}
double Spr::CRTrajectoryPlannerIf::GetSpringRate(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetSpringRate();
}
void Spr::CRTrajectoryPlannerIf::SetDamperRate(double d){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetDamperRate(d);
}
double Spr::CRTrajectoryPlannerIf::GetDamperRate(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetDamperRate();
}
void Spr::CRTrajectoryPlannerIf::EnableMultiplePD(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableMultiplePD(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledMultiplePD(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledMultiplePD();
}
void Spr::CRTrajectoryPlannerIf::EnableChangeBias(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableChangeBias(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledChangeBias(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledChangeBias();
}
void Spr::CRTrajectoryPlannerIf::EnableChangePullback(bool e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->EnableChangePullback(e);
}
bool Spr::CRTrajectoryPlannerIf::IsEnabledChangePullback(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->IsEnabledChangePullback();
}
void Spr::CRTrajectoryPlannerIf::Init(){
	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->Init();
}
void Spr::CRTrajectoryPlannerIf::SetControlTarget(Spr::PHIKEndEffectorIf* e){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetControlTarget(e);
}
void Spr::CRTrajectoryPlannerIf::SetScene(Spr::PHSceneIf* s){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetScene(s);
}
void Spr::CRTrajectoryPlannerIf::AddViaPoint(Spr::ControlPoint c){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->AddViaPoint(c);
}
void Spr::CRTrajectoryPlannerIf::CalcTrajectory(){
	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->CalcTrajectory();
}
void Spr::CRTrajectoryPlannerIf::CalcOneStep(){
	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->CalcOneStep();
}
void Spr::CRTrajectoryPlannerIf::RecalcFromIterationN(int n){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->RecalcFromIterationN(n);
}
void Spr::CRTrajectoryPlannerIf::JointTrajStep(bool step){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->JointTrajStep(step);
}
bool Spr::CRTrajectoryPlannerIf::Moving(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->Moving();
}
void Spr::CRTrajectoryPlannerIf::SetSpringDamper(double s, double d, bool mul){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->SetSpringDamper(s, d, mul);
}
void Spr::CRTrajectoryPlannerIf::Replay(int ite, bool noncorrected){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->Replay(ite, noncorrected);
}
int Spr::CRTrajectoryPlannerIf::GetBest(){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetBest();
}
void Spr::CRTrajectoryPlannerIf::ReloadCorrected(int k, bool nc){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->ReloadCorrected(k, nc);
}
Posed Spr::CRTrajectoryPlannerIf::GetTrajctoryData(int k, int n){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetTrajctoryData(k, n);
}
Posed Spr::CRTrajectoryPlannerIf::GetNotCorrectedTrajctoryData(int k, int n){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetNotCorrectedTrajctoryData(k, n);
}
SpatialVector Spr::CRTrajectoryPlannerIf::GetVeclocityData(int k, int n){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetVeclocityData(k, n);
}
SpatialVector Spr::CRTrajectoryPlannerIf::GetNotCorrectedVelocityData(int k, int n){
	return	((CRTrajectoryPlanner*)(Object*)(ObjectIf*)this)->GetNotCorrectedVelocityData(k, n);
}
SPR_IFIMP1(CRVisualSensor, CREngine);
int Spr::CRVisualSensorIf::NVisibles(){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->NVisibles();
}
Spr::CRVisualInfo Spr::CRVisualSensorIf::GetVisible(int n){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->GetVisible(n);
}
void Spr::CRVisualSensorIf::Update(){
	((CRVisualSensor*)(Object*)(ObjectIf*)this)->Update();
}
void Spr::CRVisualSensorIf::SetRange(Vec2d range){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->SetRange(range);
}
void Spr::CRVisualSensorIf::SetCenterRange(Vec2d range){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->SetCenterRange(range);
}
void Spr::CRVisualSensorIf::SetPose(Posed pose){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->SetPose(pose);
}
void Spr::CRVisualSensorIf::SetSolid(Spr::PHSolidIf* solid){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->SetSolid(solid);
}
Vec2d Spr::CRVisualSensorIf::GetRange(){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->GetRange();
}
Vec2d Spr::CRVisualSensorIf::GetCenterRange(){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->GetCenterRange();
}
Posed Spr::CRVisualSensorIf::GetPose(){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->GetPose();
}
Spr::PHSolidIf* Spr::CRVisualSensorIf::GetSolid(){
	return	((CRVisualSensor*)(Object*)(ObjectIf*)this)->GetSolid();
}
SPR_OBJECTIMP1(CRBody, SceneObject);
SPR_OBJECTIMP1(CRBone, SceneObject);
SPR_OBJECTIMP1(CRCreature, Scene);
SPR_OBJECTIMP1(CREngine, SceneObject);
SPR_OBJECTIMP1(CRController, CREngine);
SPR_OBJECTIMP1(CRGazeController, CRController);
SPR_OBJECTIMP1(CRGrabController, CRController);
SPR_OBJECTIMP1(CRReachController, CRController);
SPR_OBJECTIMP1(CRSdk, Sdk);
SPR_OBJECTIMP1(CRTouchSensor, CREngine);
SPR_OBJECTIMP1(CRTrajectoryPlanner, Object);
SPR_OBJECTIMP1(CRVisualSensor, CREngine);
}
