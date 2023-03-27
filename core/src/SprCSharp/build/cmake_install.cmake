# Install script for directory: D:/springheadSrcUniversal/core/src/SprCSharp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/SprCSharpMain")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/RunSwig/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/RunSwig_CSharp/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/SprExport/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/SprImport/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/SprCSharp/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/Install/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/Base/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/Collision/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/Foundation/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/Physics/cmake_install.cmake")
  include("D:/springheadSrcUniversal/core/src/SprCSharp/build/SprCsSample/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "D:/springheadSrcUniversal/core/src/SprCSharp/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
