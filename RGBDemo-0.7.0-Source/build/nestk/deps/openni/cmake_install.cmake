# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/." TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnModuleCppInterface.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnEvent.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnStatusRegister.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnVersion.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnLicensing.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnQueries.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnCppWrapper.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnCodecIDs.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnArray.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnModuleCFunctions.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnThreadSafeQueue.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnLog.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnModuleCppRegistratration.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnNode.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnProfiling.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnStatusCodes.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnContext.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnPrdNodeInfoList.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnLogWriterBase.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnLogTypes.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnCallback.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnInternalDefs.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnMacros.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnDataTypes.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnEnumerationErrors.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnDump.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnHash.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./IXnNodeAllocator.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnOpenNI.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnScheduler.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnQueue.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnTypes.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnFPSCalculator.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnStringsHash.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnPrdNode.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnAlgorithms.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnNodeAllocator.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnOSStrings.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnOSMemory.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnPrdNodeInfo.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnGeneralBuffer.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnPlatform.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnUSBDevice.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnPropNames.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnUSB.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnOS.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnStack.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnOSCpp.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnModuleInterface.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnStatus.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnUtils.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnBitSet.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnBaseNode.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/./XnList.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/MacOSX" TYPE FILE FILES "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/MacOSX/XnPlatformMacOSX.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Linux-x86" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/Linux-x86/XnOSLinux-x86.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/Linux-x86/XnPlatformLinux-x86.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Linux-Arm" TYPE FILE FILES "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/Linux-Arm/XnPlatformLinux-Arm.h")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/Win32" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/Win32/XnOSWin32.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Include/Win32/XnPlatformWin32.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/" TYPE DIRECTORY FILES "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/bin/config")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/External/TinyXml/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/OpenNI/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Modules/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/SensorKinect/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Nite/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

