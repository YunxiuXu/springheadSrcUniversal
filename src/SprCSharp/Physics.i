#	Do not edit. RunSwig.bat will update this file.
%module Physics
%ignore Spr::PHFemThermoIf::GetKMatInTet;
%ignore Spr::PHFemMeshThermoIf::GetKMatInTet;
%ignore Spr::PHIKActuatorIf::GetRawSolution;
%ignore Spr::PHHapticEngineIf::SetCallbackBeforeStep;
%ignore Spr::PHHapticEngineIf::SetCallbackAfterStep;
%include "../../include/SprBase.h"
%include "../../include/Base/Env.h"
%include "../../include/Foundation/SprObject.h"
%include "../../include/Foundation/SprScene.h"
%include "../../include/Collision/SprCDShape.h"
%include "../../include/Physics/SprPHDef.h"
%include "../../include/Physics/SprPHEngine.h"
%include "../../include/Physics/SprPHFemMesh.h"
%include "../../include/Physics/SprPHFemMeshNew.h"
%include "../../include/Physics/SprPHSolid.h"
%include "../../include/Physics/SprPHHaptic.h"
%include "../../include/Physics/SprPHIK.h"
%include "../../include/Physics/SprPHJoint.h"
%include "../../include/Physics/SprPHJointLimit.h"
%include "../../include/Physics/SprPHJointMotor.h"
%include "../../include/Physics/SprPHNodeHandlers.h"
%include "../../include/Physics/SprPHOpObj.h"
%include "../../include/Physics/SprPHScene.h"
%include "../../include/Physics/SprPHSdk.h"
%include "../../include/Physics/SprPHSkeleton.h"
/*
#define DOUBLECOLON :: 
%include "../../include/Springhead.h"
%include "../../include/base/Env.h"
%include "../../include/Foundation/SprObject.h"
%include "../../include/Foundation/SprScene.h"
%include "../../include/Foundation/SprUTTimer.h"
%include "../../include/Collision/SprCDShape.h"
%include "../../include/Physics/SprPHDef.h"
%include "../../include/Physics/SprPHEngine.h"
%include "../../include/Physics/SprPHFemMesh.h"
%include "../../include/Physics/SprPHFemMeshNew.h"
%include "../../include/Physics/SprPHHaptic.h"
%include "../../include/Physics/SprPHIK.h"
%include "../../include/Physics/SprPHJoint.h"
%include "../../include/Physics/SprPHJointLimit.h"
%include "../../include/Physics/SprPHJointMotor.h"
%include "../../include/Physics/SprPHNodeHandlers.h"
%include "../../include/Physics/SprPHOpObj.h"
%include "../../include/Physics/SprPHScene.h"
%include "../../include/Physics/SprPHSdk.h"
%include "../../include/Physics/SprPHSkeleton.h"
%include "../../include/Physics/SprPHSolid.h"
%include "../../include/Base/BaseDebug.h"
%include "../../src/Foundation/UTTypeDesc.h"
%include "../Foundation/Foundation.h"
%include "../Foundation/Object.h"
%include "../Foundation/Scene.h"
%include "../Foundation/UTBaseType.h"
%include "../Foundation/UTClapack.h"
%include "../Foundation/UTDllLoader.h"
%include "../Foundation/UTDllLoaderImpl.h"
%include "../Foundation/UTLoadContext.h"
%include "../Foundation/UTLoadHandler.h"
%include "../Foundation/UTMMTimer.h"
%include "../Foundation/UTPath.h"
%include "../Foundation/UTPreciseTimer.h"
%include "../Foundation/UTQPTimer.h"
%include "../Foundation/UTSocket.h"
%include "../Foundation/UTTimer.h"
%include "../Foundation/UTTypeDesc.h"
%include "../Collision/CDBox.h"
%include "../Collision/CDCapsule.h"
%include "../Collision/CDConvex.h"
%include "../Collision/CDConvexMesh.h"
%include "../Collision/CDConvexMeshInterpolate.h"
%include "../Collision/CDCutRing.h"
%include "../Collision/CDDetectorImp.h"
%include "../Collision/CDQuickHull2D.h"
%include "../Collision/CDQuickHull2DImp.h"
%include "../Collision/CDQuickHull3D.h"
%include "../Collision/CDQuickHull3DImp.h"
%include "../Collision/CDRoundCone.h"
%include "../Collision/CDShape.h"
%include "../Collision/CDSphere.h"
%include "../Collision/Collision.h"
%include "../Physics/PHAxisIndex.h"
%include "../Physics/PHBallJoint.h"
%include "../Physics/PHConstraint.h"
%include "../Physics/PHConstraintEngine.h"
%include "../Physics/PHContactDetector.h"
%include "../Physics/PHContactPoint.h"
%include "../Physics/PHContactSurface.h"
%include "../Physics/PHEngine.h"
%include "../Physics/PHFemBase.h"
%include "../Physics/PHFemCollision.h"
%include "../Physics/PHFemEngine.h"
%include "../Physics/PHFemMesh.h"
%include "../Physics/PHFemMeshNew.h"
%include "../Physics/PHFemMeshThermo.h"
%include "../Physics/PHFemPorousWOMove.h"
%include "../Physics/PHFemThermo.h"
%include "../Physics/PHFemVibration.h"
%include "../Physics/PHFixJoint.h"
%include "../Physics/PHForceField.h"
%include "../Physics/PHGear.h"
%include "../Physics/PHGenericJoint.h"
%include "../Physics/PHHapticEngine.h"
%include "../Physics/PHHapticEngineImpulse.h"
%include "../Physics/PHHapticEngineLD.h"
%include "../Physics/PHHapticEngineLDDev.h"
%include "../Physics/PHHapticEngineMultiBase.h"
%include "../Physics/PHHapticEngineSingleBase.h"
%include "../Physics/PHHapticPointer.h"
%include "../Physics/PHHapticRender.h"
%include "../Physics/PHHingeJoint.h"
%include "../Physics/PHIKActuator.h"
%include "../Physics/PHIKEndEffector.h"
%include "../Physics/PHIKEngine.h"
%include "../Physics/PHJoint.h"
%include "../Physics/PHJointLimit.h"
%include "../Physics/PHJointMotor.h"
%include "../Physics/PHOpDecompositionMethods.h"
%include "../Physics/PHOpEngine.h"
%include "../Physics/PHOpGroup.h"
%include "../Physics/PHOpObj.h"
%include "../Physics/PHOpParticle.h"
%include "../Physics/PHPathJoint.h"
%include "../Physics/PHPenaltyEngine.h"
%include "../Physics/PHPoseSpring.h"
%include "../Physics/PHScene.h"
%include "../Physics/PHSdk.h"
%include "../Physics/PHSkeleton.h"
%include "../Physics/PHSliderJoint.h"
%include "../Physics/PHSolid.h"
%include "../Physics/PHSpatial.h"
%include "../Physics/PHSpring.h"
%include "../Physics/PHTreeNode.h"
%include "../Physics/Physics.h"
%include "../Physics/RingBuffer.h"
*/
