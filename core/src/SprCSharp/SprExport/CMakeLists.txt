set(PROJECT_NAME SprExport)

################################################################################
# Source groups
################################################################################
set(Sources
    "CSBase.cpp"
    "CSCollision.cpp"
    "CSFoundation.cpp"
    "CSPhysics.cpp"
    "module.wrapper.cpp"
    "wrapper.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Sources}
)
include_directories(${SPR_CORE_DEP}/src)
################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} SHARED ${ALL_FILES})
include_directories(${SPR_INC_DIR})
include_directories(${SPR_SRC_DIR})
#use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" #"${DEFAULT_CXX_PROPS}")
################################################################################
# Includes for CMake from *.props
################################################################################
#if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
#    use_props(${PROJECT_NAME} Debug   "../../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Release "../../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Trace   "../../SpringheadMacros.cmake")
#elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
#    use_props(${PROJECT_NAME} Debug   "../../SpringheadMacros.cmake")
#   use_props(${PROJECT_NAME} Release "../../SpringheadMacros.cmake")
#    use_props(${PROJECT_NAME} Trace   "../../SpringheadMacros.cmake")
#endif()

set(ROOT_NAMESPACE SprExport)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "ManagedCProj"
)
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        COMMON_LANGUAGE_RUNTIME         "No"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        COMMON_LANGUAGE_RUNTIME         "No"
    )
endif()
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "SprExport"
        TARGET_NAME_RELEASE "SprExport"
        TARGET_NAME_TRACE   "SprExport"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_DEBUG   "SprExport"
        TARGET_NAME_RELEASE "SprExport"
        TARGET_NAME_TRACE   "SprExport"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
        OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
        OUTPUT_DIRECTORY_TRACE   "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
        OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
        OUTPUT_DIRECTORY_TRACE   "${CMAKE_SOURCE_DIR}/$ENV{VisualStudioVersion}/bin/$ENV{PlatformShortName}/$<CONFIG>/"
    )
endif()
################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../..;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../$ENV{DependencySrc}"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../../../include;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../..;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../$ENV{DependencySrc}"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG"
        ">"
        "$<$<CONFIG:Trace>:"
            "NDEBUG"
        ">"
        "WIN32;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "$<$<CONFIG:Debug>:"
            "_DEBUG"
        ">"
        "$<$<CONFIG:Release>:"
            "NDEBUG;"
            "_CRT_SECURE_NO_WARNINGS"
        ">"
        "$<$<CONFIG:Trace>:"
            "NDEBUG;"
            "_CRT_SECURE_NO_WARNINGS"
        ">"
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
                /Zi
            >
            $<$<CONFIG:Release>:
                /Oi;
                /Oy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot
            >
            $<$<CONFIG:Trace>:
                /Oi;
                /Oy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot
            >
            /MP;
            /GL-;
            /sdl;
            /W3;
            /fp:except;
            /wd4091;
            /wd4244;
            /wd4267;
            /EHa;
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Debug>:
                /Gm-;
                /Od;
                /Oy-;
                /Zi
            >
            $<$<CONFIG:Release>:
                /Oi;
                /Oy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot
            >
            $<$<CONFIG:Trace>:
                /Oi;
                /Oy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT};
                /Ot
            >
            /MP;
            /GL-;
            /sdl;
            /W3;
            /fp:except;
            /wd4091;
            /wd4244;
            /wd4267;
            /EHa;
            /Y-
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_link_options(${PROJECT_NAME} PRIVATE
            /NODEFAULTLIB:XINPUT.LIB;
            /DEBUG:FULL;
            /INCREMENTAL:NO;
            /IGNORE:4099
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            /NODEFAULTLIB:XINPUT.LIB;
            /DEBUG:FULL;
            /INCREMENTAL:NO;
            /IGNORE:4099
        )
    endif()
endif()

################################################################################
# Dependencies
################################################################################
# Link with other targets.
target_link_libraries(${PROJECT_NAME} PUBLIC
    Base
    Collision
    Foundation
    Physics
)

if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "XINPUT9_1_0"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set(ADDITIONAL_LIBRARY_DEPENDENCIES
        "XINPUT9_1_0"
    )
endif()
target_link_libraries(${PROJECT_NAME} PUBLIC "${ADDITIONAL_LIBRARY_DEPENDENCIES}")

if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_link_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../$ENV{DependencyLib}/win32"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_link_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/../$ENV{DependencyLib}/win64"
    )
endif()

