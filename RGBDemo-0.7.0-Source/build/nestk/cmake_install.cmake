# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk

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
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/cmake" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/UseNestk.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindCMinpack.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/LibFindMacros.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindFlann.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/find_nestk_deps.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindQhull.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindFreenect.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindGLEW.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindOpenNI.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindUSB.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindGSL.cmake"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/cmake/FindEigen3.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/ntk/cmake_install.cmake")
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

