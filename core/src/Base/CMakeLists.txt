set(PROJECT_NAME Base)

################################################################################
# Source groups
################################################################################
set(Headers
    "../../include/Base/Affine.h"
    "../../include/Base/BaseDebug.h"
    "../../include/Base/BaseTypeInfo.h"
    "../../include/Base/BaseUtility.h"
    "../../include/Base/Env.h"
    "../../include/Base/QuadProgram.h"
    "../../include/Base/Spatial.h"
    "../../include/Base/TCurve.h"
    "../../include/Base/TinyMat.h"
    "../../include/Base/TinyVec.h"
    "../../include/Base/TMatrix.h"
    "../../include/Base/TMatrixUtility.h"
    "../../include/Base/TQuaternion.h"
    "../../include/Base/TVector.h"
    "../../include/Base/VectorDebug.h"
    "Base.h"
    "Combination.h"
    "KeyList.h"
    "RingBuf.h"
    "StrBufBase.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "Affine.cpp"
    "BaseDebug.cpp"
    "BaseTypeInfo.cpp"
    "BaseUtility.cpp"
    "StrbufBase.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Headers}
    ${Sources}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})
include_directories(${SPR_CORE_DEP}/src)
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

set(ROOT_NAMESPACE Base)

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
                /Od;
                /Ob0;
                /fp:except;
                /Zi
            >
            $<$<CONFIG:Release>:
                /O2;
                /Ob2;
                /Oy;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            $<$<CONFIG:Trace>:
                /O2;
                /Ob2;
                /Oy-;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            /MP;
            /Gm-;
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
                /Zi
            >
            $<$<CONFIG:Release>:
                /O2;
                /Ob2;
                /Oy;
                /Gr;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot;
                /GS
            >
            $<$<CONFIG:Trace>:
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

