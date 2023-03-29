set(PROJECT_NAME Physics)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "lcpnote.txt"
)
source_group("" FILES ${no_group_source_files})

set(Headers
    "../../include/Physics/SprPHEngine.h"
    "../../include/Physics/SprPHFemMesh.h"
    "../../include/Physics/SprPHFemMeshNew.h"
    "../../include/Physics/SprPHHaptic.h"
    "../../include/Physics/SprPHIK.h"
    "../../include/Physics/SprPHJoint.h"
    "../../include/Physics/SprPHJointLimit.h"
    "../../include/Physics/SprPHNodeHandlers.h"
    "../../include/Physics/SprPHOpObj.h"
    "../../include/Physics/SprPHOpSpHashAgent.h"
    "../../include/Physics/SprPHScene.h"
    "../../include/Physics/SprPHSdk.h"
    "../../include/Physics/SprPHSkeleton.h"
    "../../include/Physics/SprPHSolid.h"
    "../../include/SprPhysics.h"
    "PHAxisIndex.h"
    "PHBallJoint.h"
    "PHBody.h"
    "PHConstraint.h"
    "PHConstraintEngine.h"
    "PHContactDetector.h"
    "PHContactPoint.h"
    "PHContactSurface.h"
    "PHEngine.h"
    "PHFemBase.h"
    "PHFemCollision.h"
    "PHFemEngine.h"
    "PHFemMesh.h"
    "PHFemMeshNew.h"
    "PHFemMeshThermo.h"
    "PHFemPorousWOMove.h"
    "PHFemThermo.h"
    "PHFemVibration.h"
    "PHFixJoint.h"
    "PHForceField.h"
    "PHGear.h"
    "PHGenericJoint.h"
    "PHHapticEngine.h"
    "PHHapticPointer.h"
    "PHHapticStepBase.h"
    "PHHapticStepImpulse.h"
    "PHHapticStepLocalDynamics.h"
    "PHHapticStepLocalDynamicsDev.h"
    "PHHapticStepMulti.h"
    "PHHapticStepSingle.h"
    "PHHingeJoint.h"
    "PHIKActuator.h"
    "PHIKEndEffector.h"
    "PHIKEngine.h"
    "PHJoint.h"
    "PHJointLimit.h"
    "PHJointMotor.h"
    "PHOpAnimation.h"
    "PHOpDecompositionMethods.h"
    "PHOpEngine.h"
    "PHOpGroup.h"
    "PHOpHapticController.h"
    "PHOpHapticRenderer.h"
    "PHOpObj.h"
    "PHOpParticle.h"
    "PHOpSpHashColliAgent.h"
    "PHPathJoint.h"
    "PHPenaltyEngine.h"
    "PHScene.h"
    "PHSdk.h"
    "PHSkeleton.h"
    "PHSliderJoint.h"
    "PHSolid.h"
    "PHSpring.h"
    "PHTreeNode.h"
    "Physics.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "PHBallJoint.cpp"
    "PHBody.cpp"
    "PHConstraint.cpp"
    "PHConstraintEngine.cpp"
    "PHContactDetector.cpp"
    "PHContactPoint.cpp"
    "PHContactSurface.cpp"
    "PHEngine.cpp"
    "PHFemBase.cpp"
    "PHFemCollision.cpp"
    "PHFemEngine.cpp"
    "PHFemEngineHeatTransfer.cpp"
    "PHFemMesh.cpp"
    "PHFemMeshNew.cpp"
    "PHFemMeshThermo.cpp"
    "PHFemPorousWOMove.cpp"
    "PHFemThermo.cpp"
    "PHFemVibration.cpp"
    "PHFixJoint.cpp"
    "PHForceField.cpp"
    "PHGear.cpp"
    "PHGenericJoint.cpp"
    "PHHapticEngine.cpp"
    "PHHapticEngineRender.cpp"
    "PHHapticPointer.cpp"
    "PHHapticStepBase.cpp"
    "PHHapticStepImpulse.cpp"
    "PHHapticStepLocalDynamics.cpp"
    "PHHapticStepLocalDynamicsDev.cpp"
    "PHHapticStepMulti.cpp"
    "PHHapticStepSingle.cpp"
    "PHHingeJoint.cpp"
    "PHIKActuator.cpp"
    "PHIKEndEffector.cpp"
    "PHIKEngine.cpp"
    "PHJoint.cpp"
    "PHJointLimit.cpp"
    "PHJointMotor.cpp"
    "PHLoadHandlers.cpp"
    "PHOpAnimation.cpp"
    "PHOpEngine.cpp"
    "PHOpGroup.cpp"
    "PHOpHapticController.cpp"
    "PHOpHapticRenderer.cpp"
    "PHOpHapticRenderer2.cpp"
    "PHOpObj.cpp"
    "PHOPParticle.cpp"
    "PHOpSpHashColliAgent.cpp"
    "PHPathJoint.cpp"
    "PHPenaltyEngine.cpp"
    "PHRegisterTypeDesc.cpp"
    "PHScene.cpp"
    "PHSdk.cpp"
    "PHSkeleton.cpp"
    "PHSliderJoint.cpp"
    "PHSolid.cpp"
    "PHSpring.cpp"
    "PHTreeNode.cpp"
    "PhysicsStub.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${no_group_source_files}
    ${Headers}
    ${Sources}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})
# target_link_libraries(${PROJECT_NAME}
#     "-framework ScriptIntrinsicBLAS"
# )
include_directories(${SPR_CORE_DEP}/src)
include_directories(${SPR_SRC_DIR})
include_directories(${SPR_INC_DIR})
include_directories(${SPR_INC_DIR/Physics/../../include})
include_directories(${SPR_SRC_DIR/Physics/..})
include_directories(${SPR_SRC_DIR/Physics})

#use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
################################################################################
# Includes for CMake from *.props
################################################################################
#if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
#    use_props(${PROJECT_NAME} Debug   "../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Release "../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Trace   "../SpringheadMacros.cmake")
#elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
#    use_props(${PROJECT_NAME} Debug   "../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Release "../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Trace   "../SpringheadMacros.cmake")
#endif()

set(ROOT_NAMESPACE Physics)

################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfDebug}${CMAKE_VS_PLATFORM_NAME}"
        TARGET_NAME_RELEASE "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfRelease}${CMAKE_VS_PLATFORM_NAME}"
        TARGET_NAME_TRACE   "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfTrace}${CMAKE_VS_PLATFORM_NAME}"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfDebug}${CMAKE_VS_PLATFORM_NAME}"
        TARGET_NAME_RELEASE "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfRelease}${CMAKE_VS_PLATFORM_NAME}"
        TARGET_NAME_TRACE   "${PROJECT_NAME}$ENV{VisualStudioVersion}$ENV{LibConfTrace}${CMAKE_VS_PLATFORM_NAME}"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DEBUG   "${CMAKE_CURRENT_SOURCE_DIR}/"
        OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/"
        OUTPUT_DIRECTORY_TRACE   "${CMAKE_CURRENT_SOURCE_DIR}/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DEBUG   "${CMAKE_CURRENT_SOURCE_DIR}/"
        OUTPUT_DIRECTORY_RELEASE "${CMAKE_CURRENT_SOURCE_DIR}/"
        OUTPUT_DIRECTORY_TRACE   "${CMAKE_CURRENT_SOURCE_DIR}/"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "FALSE"
        INTERPROCEDURAL_OPTIMIZATION_TRACE   "FALSE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "FALSE"
        INTERPROCEDURAL_OPTIMIZATION_TRACE   "FALSE"
    )
endif()
################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/..;"
        "$ENV{DependencySrc}"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/..;"
        "$ENV{DependencySrc}"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Trace>:"
            "TRACE"
        ">"
        "_LIB;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Trace>:"
            "TRACE"
        ">"
        "_LIB;"
        "_MBCS"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /Gm-;
                /Od;
                /Ob0;
                /fp:except;
                /Zi;
                /fp:strict
            >
            $<$<CONFIG:Release>:
                /GL-;
                /O2;
                /Ob2;
                /Oy;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            $<$<CONFIG:Trace>:
                /GL-;
                /O2;
                /Ob2;
                /Oy-;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            /MP;
            /Oi-;
            /sdl;
            /GF-;
            /arch:AVX;
            /Gy-;
            /W3;
            /wd4996;
            /wd4244;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /openmp
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /Gm-;
                /Od;
                /Ob0;
                /Oy-;
                /fp:except;
                /Zi;
                /bigobj
            >
            $<$<CONFIG:Release>:
                /GL-;
                /O2;
                /Ob2;
                /Oy;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            $<$<CONFIG:Trace>:
                /GL-;
                /O2;
                /Ob2;
                /Oy-;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            /MP;
            /Oi-;
            /sdl;
            /GF-;
            /arch:AVX;
            /Gy-;
            /W3;
            /wd4996;
            /wd4244;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /openmp
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            $<$<CONFIG:Trace>:
                /OPT:REF;
                /OPT:ICF
            >
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            $<$<CONFIG:Trace>:
                /OPT:REF;
                /OPT:ICF
            >
        )
    endif()
endif()

################################################################################
# Post build events
################################################################################
#if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
#    add_custom_command_if(
#        TARGET ${PROJECT_NAME}
#        POST_BUILD
#        COMMANDS
#        COMMAND   $<CONFIG:Debug> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#        COMMAND $<CONFIG:Release> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#        COMMAND   $<CONFIG:Trace> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#    )
#elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
#    add_custom_command_if(
#        TARGET ${PROJECT_NAME}
#        POST_BUILD
#        COMMANDS
#        COMMAND   $<CONFIG:Debug> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#        COMMAND $<CONFIG:Release> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#        COMMAND   $<CONFIG:Trace> echo   $<TARGET_FILE_NAME:${PROJECT_NAME}> done 1>&2
#    )
#endif()

################################################################################
# Dependencies
################################################################################
add_dependencies(${PROJECT_NAME}
    Collision
    Foundation
)

