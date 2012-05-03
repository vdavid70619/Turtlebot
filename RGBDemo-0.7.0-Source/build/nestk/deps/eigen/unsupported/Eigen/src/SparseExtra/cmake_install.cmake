# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")
  list(APPEND CPACK_ABSOLUTE_DESTINATION_FILES
   "/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SparseLU.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SimplicialCholesky.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/CholmodSupport.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/Amd.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SuperLUSupport.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/Solve.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/UmfPackSupport.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SparseLDLT.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SparseLDLTLegacy.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/RandomSetter.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/CholmodSupportLegacy.h;/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra/SparseLLT.h")
FILE(INSTALL DESTINATION "/usr/local/include/eigen3/unsupported/Eigen/src/SparseExtra" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SparseLU.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SimplicialCholesky.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/CholmodSupport.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/Amd.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SuperLUSupport.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/Solve.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/UmfPackSupport.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SparseLDLT.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SparseLDLTLegacy.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/RandomSetter.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/CholmodSupportLegacy.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/unsupported/Eigen/src/SparseExtra/SparseLLT.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

