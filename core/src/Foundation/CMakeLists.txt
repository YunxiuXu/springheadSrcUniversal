set(PROJECT_NAME Foundation)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "Scilab.i"
)
source_group("" FILES ${no_group_source_files})

set(Headers
    "../../include/Foundation/SprObject.h"
    "../../include/Foundation/SprScene.h"
    "../../include/Foundation/SprUTCriticalSection.h"
    "../../include/Foundation/SprUTOptimizer.h"
    "../../include/Foundation/SprUTQPTimer.h"
    "../../include/Foundation/SprUTTimer.h"
    "../../include/SprFoundation.h"
    "ClapackLibsDef.h"
    "Object.h"
    "QuadProg++.hh"
    "Scene.h"
    "UTBaseType.h"
    "UTClapack.h"
    "UTDllLoader.h"
    "UTDllLoaderImpl.h"
    "UTLoadContext.h"
    "UTLoadHandler.h"
    "UTOptimizer.h"
    "UTPath.h"
    "UTQPTimer.h"
    "UTSocket.h"
    "UTTimer.h"
    "UTTypeDesc.h"
)
source_group("Headers" FILES ${Headers})

set(Sources
    "FoundationStub.cpp"
    "Object.cpp"
    "QuadProg++.cc"
    "Scene.cpp"
    "ScilabStub.cpp"
    "UTCriticalSection.cpp"
    "UTDllLoader.cpp"
    "UTLoadContext.cpp"
    "UTLoadHandler.cpp"
    "UTOptimizer.cpp"
    "UTPath.cpp"
    "UTQPTimer.cpp"
    "UTRegisterTypeDesc.cpp"
    "UTSocket.cpp"
    "UTTimer.cpp"
    "UTTypeDesc.cpp"
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
include_directories(${SPR_CORE_DEP}/src)
include_directories(${SPR_SRC_DIR})
include_directories(${SPR_INC_DIR})
include_directories(${SPR_INC_DIR/Foundation/../../include})
include_directories(${SPR_SRC_DIR/Foundation/..})
include_directories(${SPR_SRC_DIR/Foundation})
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

set(ROOT_NAMESPACE Foundation)

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
    Base
)

