# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products

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
   "/usr/local/include/eigen3/Eigen/src/Core/products/TriangularSolverVector.h;/usr/local/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h;/usr/local/include/eigen3/Eigen/src/Core/products/Parallelizer.h;/usr/local/include/eigen3/Eigen/src/Core/products/GeneralMatrixVector.h;/usr/local/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixVector.h;/usr/local/include/eigen3/Eigen/src/Core/products/SelfadjointRank2Update.h;/usr/local/include/eigen3/Eigen/src/Core/products/SelfadjointProduct.h;/usr/local/include/eigen3/Eigen/src/Core/products/GeneralMatrixMatrix.h;/usr/local/include/eigen3/Eigen/src/Core/products/TriangularMatrixMatrix.h;/usr/local/include/eigen3/Eigen/src/Core/products/GeneralBlockPanelKernel.h;/usr/local/include/eigen3/Eigen/src/Core/products/TriangularSolverMatrix.h;/usr/local/include/eigen3/Eigen/src/Core/products/SelfadjointMatrixMatrix.h;/usr/local/include/eigen3/Eigen/src/Core/products/CoeffBasedProduct.h;/usr/local/include/eigen3/Eigen/src/Core/products/TriangularMatrixVector.h")
FILE(INSTALL DESTINATION "/usr/local/include/eigen3/Eigen/src/Core/products" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/TriangularSolverVector.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/GeneralMatrixMatrixTriangular.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/Parallelizer.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/GeneralMatrixVector.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/SelfadjointMatrixVector.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/SelfadjointRank2Update.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/SelfadjointProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/GeneralMatrixMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/TriangularMatrixMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/GeneralBlockPanelKernel.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/TriangularSolverMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/SelfadjointMatrixMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/CoeffBasedProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Core/products/TriangularMatrixVector.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

