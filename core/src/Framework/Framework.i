#	Do not edit. RunSwig.py will update this file.
%module Framework
#define DOUBLECOLON ::
%include "../../include/Springhead.h"
%include "../../include/Base/Env.h"
%include "../../include/Base/BaseDebug.h"
%include "../../include/HumanInterface/SprHIBase.h"
%include "../../include/HumanInterface/SprHIDevice.h"
%include "../../include/HumanInterface/SprHIDRUart.h"
%include "../../include/HumanInterface/SprHIDRUsb.h"
%include "../../include/HumanInterface/SprHIJoyStick.h"
%include "../../include/HumanInterface/SprHIKeyMouse.h"
%include "../../include/HumanInterface/SprHILeap.h"
%include "../../include/HumanInterface/SprHINovint.h"
%include "../../include/HumanInterface/SprHISdk.h"
%include "../../include/HumanInterface/SprHISkeletonSensor.h"
%include "../../include/HumanInterface/SprHISpaceNavigator.h"
%include "../../include/HumanInterface/SprHISpidar.h"
%include "../../include/HumanInterface/SprHITrackball.h"
%include "../../include/HumanInterface/SprHIXbox360Controller.h"
%include "../../include/Graphics/SprGRBlendMesh.h"
%include "../../include/Graphics/SprGRFrame.h"
%include "../../include/Graphics/SprGRMesh.h"
%include "../../include/Graphics/SprGRRender.h"
%include "../../include/Graphics/SprGRScene.h"
%include "../../include/Graphics/SprGRSdk.h"
%include "../../include/Graphics/SprGRShader.h"
%include "../../include/Graphics/SprGRSphere.h"
%include "../../include/Graphics/SprGRVertex.h"
%include "../../include/Foundation/SprObject.h"
%include "../../include/Foundation/SprScene.h"
%include "../../include/Foundation/SprUTCriticalSection.h"
%include "../../include/Foundation/SprUTOptimizer.h"
%include "../../include/Foundation/SprUTQPTimer.h"
%include "../../include/Foundation/SprUTTimer.h"
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
%include "../../include/Physics/SprPHOpSpHashAgent.h"
%include "../../include/Physics/SprPHScene.h"
%include "../../include/Physics/SprPHSdk.h"
%include "../../include/Physics/SprPHSkeleton.h"
%include "../../include/Physics/SprPHSolid.h"
%include "../../include/FileIO/SprFIFile.h"
%include "../../include/FileIO/SprFIImport.h"
%include "../../include/FileIO/SprFIOpStateHandler.h"
%include "../../include/FileIO/SprFISdk.h"
%include "../../include/Framework/SprFWApp.h"
%include "../../include/Framework/SprFWConsoleDebugMonitor.h"
%include "../../include/Framework/SprFWEditor.h"
%include "../../include/Framework/SprFWFemMesh.h"
%include "../../include/Framework/SprFWFemMeshNew.h"
%include "../../include/Framework/SprFWHapticPointer.h"
%include "../../include/Framework/SprFWJoyStick.h"
%include "../../include/Framework/SprFWKeyMouse.h"
%include "../../include/Framework/SprFWObject.h"
%include "../../include/Framework/SprFWOpHapticHandler.h"
%include "../../include/Framework/SprFWOpObj.h"
%include "../../include/Framework/SprFWOptimizer.h"
%include "../../include/Framework/SprFWScene.h"
%include "../../include/Framework/SprFWSdk.h"
%include "../../include/Framework/SprFWSkeletonSensor.h"
%include "../../include/Framework/SprFWWin.h"
%include "../HumanInterface/Device.h"
%include "../HumanInterface/DRADAPIO.h"
%include "../HumanInterface/DRContecIsaCounter.h"
%include "../HumanInterface/DRContecIsaDa.h"
%include "../HumanInterface/DRCyUsb20Sh4.h"
%include "../HumanInterface/DRKeyMouseWin32.h"
%include "../HumanInterface/DRNittaForce.h"
%include "../HumanInterface/DRPortIO.h"
%include "../HumanInterface/DRTokin3D.h"
%include "../HumanInterface/DRUartMotorDriver.h"
%include "../HumanInterface/DRUPP.h"
%include "../HumanInterface/DRUsb20Sh4.h"
%include "../HumanInterface/DRUsb20Simple.h"
%include "../HumanInterface/DRUsbH8Simple.h"
%include "../HumanInterface/DRUsbH8SimpleDef.h"
%include "../HumanInterface/DRWinDriver.h"
%include "../HumanInterface/HIBase.h"
%include "../HumanInterface/HIDevice.h"
%include "../HumanInterface/HILeap.h"
%include "../HumanInterface/HINovintFalcon.h"
%include "../HumanInterface/HISdk.h"
%include "../HumanInterface/HISkeletonSensor.h"
%include "../HumanInterface/HISpaceNavigator.h"
%include "../HumanInterface/HISpidar.h"
%include "../HumanInterface/HISpidarCalc.h"
%include "../HumanInterface/HISpidarMotor.h"
%include "../HumanInterface/HITrackball.h"
%include "../HumanInterface/HIXbox360Controller.h"
%include "../HumanInterface/HumanInterface.h"
%include "../Graphics/Graphics.h"
%include "../Graphics/GRBlendMesh.h"
%include "../Graphics/GRDeviceGL.h"
%include "../Graphics/GRDrawEllipsoid.h"
%include "../Graphics/GRFrame.h"
%include "../Graphics/GRLoadBmp.h"
%include "../Graphics/GRMesh.h"
%include "../Graphics/GRRender.h"
%include "../Graphics/GRScene.h"
%include "../Graphics/GRSdk.h"
%include "../Graphics/GRSphere.h"
%include "../Foundation/ClapackLibsDef.h"
%include "../Foundation/Foundation.h"
%include "../Foundation/Object.h"
%include "../Foundation/Scene.h"
%include "../Foundation/UTBaseType.h"
%include "../Foundation/UTClapack.h"
%include "../Foundation/UTDllLoader.h"
%include "../Foundation/UTDllLoaderImpl.h"
%include "../Foundation/UTLoadContext.h"
%include "../Foundation/UTLoadHandler.h"
%include "../Foundation/UTOptimizer.h"
%include "../Foundation/UTPath.h"
%include "../Foundation/UTQPTimer.h"
%include "../Foundation/UTSocket.h"
%include "../Foundation/UTTimer.h"
%include "../Foundation/UTTypeDesc.h"
%include "../Physics/PHAxisIndex.h"
%include "../Physics/PHBallJoint.h"
%include "../Physics/PHBody.h"
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
%include "../Physics/PHHapticPointer.h"
%include "../Physics/PHHapticStepBase.h"
%include "../Physics/PHHapticStepImpulse.h"
%include "../Physics/PHHapticStepLocalDynamics.h"
%include "../Physics/PHHapticStepLocalDynamicsDev.h"
%include "../Physics/PHHapticStepMulti.h"
%include "../Physics/PHHapticStepSingle.h"
%include "../Physics/PHHingeJoint.h"
%include "../Physics/PHIKActuator.h"
%include "../Physics/PHIKEndEffector.h"
%include "../Physics/PHIKEngine.h"
%include "../Physics/PHJoint.h"
%include "../Physics/PHJointLimit.h"
%include "../Physics/PHJointMotor.h"
%include "../Physics/PHOpAnimation.h"
%include "../Physics/PHOpDecompositionMethods.h"
%include "../Physics/PHOpEngine.h"
%include "../Physics/PHOpGroup.h"
%include "../Physics/PHOpHapticController.h"
%include "../Physics/PHOpHapticRenderer.h"
%include "../Physics/PHOpObj.h"
%include "../Physics/PHOpParticle.h"
%include "../Physics/PHOpSpHashColliAgent.h"
%include "../Physics/PHPathJoint.h"
%include "../Physics/PHPenaltyEngine.h"
%include "../Physics/PHScene.h"
%include "../Physics/PHSdk.h"
%include "../Physics/PHSkeleton.h"
%include "../Physics/PHSliderJoint.h"
%include "../Physics/PHSolid.h"
%include "../Physics/PHSpring.h"
%include "../Physics/PHTreeNode.h"
%include "../Physics/Physics.h"
%include "../FileIO/FIFile.h"
%include "../FileIO/FIFileBinary.h"
%include "../FileIO/FIFileCOLLADA.h"
%include "../FileIO/FIFileCOLLADAHandler.h"
%include "../FileIO/FIFileSpr.h"
%include "../FileIO/FIFileVrml.h"
%include "../FileIO/FIFileX.h"
%include "../FileIO/FIImport.h"
%include "../FileIO/FileIO.h"
%include "../FileIO/FILoadContext.h"
%include "../FileIO/FIOpStateHandler.h"
%include "../FileIO/FISaveContext.h"
%include "../FileIO/FISdk.h"
%include "../FileIO/FISpirit.h"
%include "../Framework/Framework.h"
%include "../Framework/FWFemMesh.h"
%include "../Framework/FWFemMeshNew.h"
%include "../Framework/FWGLUI.h"
%include "../Framework/FWGLUT.h"
%include "../Framework/FWGraphicsHandler.h"
%include "../Framework/FWHapticPointer.h"
%include "../Framework/FWJoyStickGLUT.h"
%include "../Framework/FWKeyMouseGLUT.h"
%include "../Framework/FWObject.h"
%include "../Framework/FWOldSpringheadNode.h"
%include "../Framework/FWOldSpringheadNodeHandler.h"
%include "../Framework/FWOpHapticHandler.h"
%include "../Framework/FWOpObj.h"
%include "../Framework/FWOptimizer.h"
%include "../Framework/FWScene.h"
%include "../Framework/FWSdk.h"
%include "../Framework/FWSkeletonSensor.h"
%include "../Framework/FWSprTetgen.h"
%include "../Framework/FWStaticTorqueOptimizer.h"
%include "../Framework/FWWin.h"
