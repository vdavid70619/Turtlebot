# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse

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
   "/usr/local/include/eigen3/Eigen/src/Sparse/SparseFuzzy.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseCwiseBinaryOp.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseMatrixBase.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseDot.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseProduct.h;/usr/local/include/eigen3/Eigen/src/Sparse/CoreIterators.h;/usr/local/include/eigen3/Eigen/src/Sparse/MappedSparseMatrix.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseMatrix.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseTranspose.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseUtil.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseSelfAdjointView.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseSparseProduct.h;/usr/local/include/eigen3/Eigen/src/Sparse/CompressedStorage.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseDiagonalProduct.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseDenseProduct.h;/usr/local/include/eigen3/Eigen/src/Sparse/TriangularSolver.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseRedux.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseTriangularView.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseVector.h;/usr/local/include/eigen3/Eigen/src/Sparse/AmbiVector.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseAssign.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseCwiseUnaryOp.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseView.h;/usr/local/include/eigen3/Eigen/src/Sparse/DynamicSparseMatrix.h;/usr/local/include/eigen3/Eigen/src/Sparse/SparseBlock.h")
FILE(INSTALL DESTINATION "/usr/local/include/eigen3/Eigen/src/Sparse" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseFuzzy.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseCwiseBinaryOp.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseMatrixBase.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseDot.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/CoreIterators.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/MappedSparseMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseTranspose.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseUtil.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseSelfAdjointView.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseSparseProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/CompressedStorage.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseDiagonalProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseDenseProduct.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/TriangularSolver.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseRedux.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseTriangularView.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseVector.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/AmbiVector.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseAssign.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseCwiseUnaryOp.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseView.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/DynamicSparseMatrix.h"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/src/Sparse/SparseBlock.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

