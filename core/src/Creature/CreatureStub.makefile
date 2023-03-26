#	Do not edit. RunSwig.py will update this file.
all:	CreatureStub.cpp

CreatureStub.cpp:	\
	..\..\include\Springhead.h\
	..\..\include\Base\Env.h\
	..\..\include\Base\BaseDebug.h\
	..\..\include\Foundation\SprObject.h\
	..\..\include\Foundation\SprScene.h\
	..\..\include\Foundation\SprUTCriticalSection.h\
	..\..\include\Foundation\SprUTOptimizer.h\
	..\..\include\Foundation\SprUTQPTimer.h\
	..\..\include\Foundation\SprUTTimer.h\
	..\..\include\Physics\SprPHDef.h\
	..\..\include\Physics\SprPHEngine.h\
	..\..\include\Physics\SprPHFemMesh.h\
	..\..\include\Physics\SprPHFemMeshNew.h\
	..\..\include\Physics\SprPHHaptic.h\
	..\..\include\Physics\SprPHIK.h\
	..\..\include\Physics\SprPHJoint.h\
	..\..\include\Physics\SprPHJointLimit.h\
	..\..\include\Physics\SprPHJointMotor.h\
	..\..\include\Physics\SprPHNodeHandlers.h\
	..\..\include\Physics\SprPHOpObj.h\
	..\..\include\Physics\SprPHOpSpHashAgent.h\
	..\..\include\Physics\SprPHScene.h\
	..\..\include\Physics\SprPHSdk.h\
	..\..\include\Physics\SprPHSkeleton.h\
	..\..\include\Physics\SprPHSolid.h\
	..\..\include\Creature\SprCRBody.h\
	..\..\include\Creature\SprCRBone.h\
	..\..\include\Creature\SprCRController.h\
	..\..\include\Creature\SprCRCreature.h\
	..\..\include\Creature\SprCREngine.h\
	..\..\include\Creature\SprCRReachController.h\
	..\..\include\Creature\SprCRSdk.h\
	..\..\include\Creature\SprCRTimeSeries.h\
	..\..\include\Creature\SprCRTouchSensor.h\
	..\..\include\Creature\SprCRTrajectoryPlanner.h\
	..\..\include\Creature\SprCRVisualSensor.h\
	..\Foundation\ClapackLibsDef.h\
	..\Foundation\Foundation.h\
	..\Foundation\Object.h\
	..\Foundation\Scene.h\
	..\Foundation\UTBaseType.h\
	..\Foundation\UTClapack.h\
	..\Foundation\UTDllLoader.h\
	..\Foundation\UTDllLoaderImpl.h\
	..\Foundation\UTLoadContext.h\
	..\Foundation\UTLoadHandler.h\
	..\Foundation\UTOptimizer.h\
	..\Foundation\UTPath.h\
	..\Foundation\UTQPTimer.h\
	..\Foundation\UTSocket.h\
	..\Foundation\UTTimer.h\
	..\Foundation\UTTypeDesc.h\
	..\Physics\PHAxisIndex.h\
	..\Physics\PHBallJoint.h\
	..\Physics\PHBody.h\
	..\Physics\PHConstraint.h\
	..\Physics\PHConstraintEngine.h\
	..\Physics\PHContactDetector.h\
	..\Physics\PHContactPoint.h\
	..\Physics\PHContactSurface.h\
	..\Physics\PHEngine.h\
	..\Physics\PHFemBase.h\
	..\Physics\PHFemCollision.h\
	..\Physics\PHFemEngine.h\
	..\Physics\PHFemMesh.h\
	..\Physics\PHFemMeshNew.h\
	..\Physics\PHFemMeshThermo.h\
	..\Physics\PHFemPorousWOMove.h\
	..\Physics\PHFemThermo.h\
	..\Physics\PHFemVibration.h\
	..\Physics\PHFixJoint.h\
	..\Physics\PHForceField.h\
	..\Physics\PHGear.h\
	..\Physics\PHGenericJoint.h\
	..\Physics\PHHapticEngine.h\
	..\Physics\PHHapticPointer.h\
	..\Physics\PHHapticStepBase.h\
	..\Physics\PHHapticStepImpulse.h\
	..\Physics\PHHapticStepLocalDynamics.h\
	..\Physics\PHHapticStepLocalDynamicsDev.h\
	..\Physics\PHHapticStepMulti.h\
	..\Physics\PHHapticStepSingle.h\
	..\Physics\PHHingeJoint.h\
	..\Physics\PHIKActuator.h\
	..\Physics\PHIKEndEffector.h\
	..\Physics\PHIKEngine.h\
	..\Physics\PHJoint.h\
	..\Physics\PHJointLimit.h\
	..\Physics\PHJointMotor.h\
	..\Physics\PHOpAnimation.h\
	..\Physics\PHOpDecompositionMethods.h\
	..\Physics\PHOpEngine.h\
	..\Physics\PHOpGroup.h\
	..\Physics\PHOpHapticController.h\
	..\Physics\PHOpHapticRenderer.h\
	..\Physics\PHOpObj.h\
	..\Physics\PHOpParticle.h\
	..\Physics\PHOpSpHashColliAgent.h\
	..\Physics\PHPathJoint.h\
	..\Physics\PHPenaltyEngine.h\
	..\Physics\PHScene.h\
	..\Physics\PHSdk.h\
	..\Physics\PHSkeleton.h\
	..\Physics\PHSliderJoint.h\
	..\Physics\PHSolid.h\
	..\Physics\PHSpring.h\
	..\Physics\PHTreeNode.h\
	..\Physics\Physics.h\
	..\Creature\CRBody.h\
	..\Creature\CRBone.h\
	..\Creature\CRCreature.h\
	..\Creature\CREngine.h\
	..\Creature\CRGazeController.h\
	..\Creature\CRGrabController.h\
	..\Creature\CRMinimumJerkTrajectory.h\
	..\Creature\CRMotionController.h\
	..\Creature\CRMotionPlanner.h\
	..\Creature\CRReachController.h\
	..\Creature\CRSdk.h\
	..\Creature\CRTouchSensor.h\
	..\Creature\CRTrajectoryPlanner.h\
	..\Creature\CRVisualSensor.h
	swig -I"D:\springheadSrcUniversal\core\bin\swig\Lib" -spr -w305,312,319,325,401,402 -DSWIG_Creature -c++ Creature.i
