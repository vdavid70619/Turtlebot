# Install script for directory: /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen

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
   "/usr/local/include/eigen3/Eigen/SVD;/usr/local/include/eigen3/Eigen/QR;/usr/local/include/eigen3/Eigen/StdList;/usr/local/include/eigen3/Eigen/Cholesky;/usr/local/include/eigen3/Eigen/LeastSquares;/usr/local/include/eigen3/Eigen/Array;/usr/local/include/eigen3/Eigen/Jacobi;/usr/local/include/eigen3/Eigen/Eigenvalues;/usr/local/include/eigen3/Eigen/Sparse;/usr/local/include/eigen3/Eigen/Householder;/usr/local/include/eigen3/Eigen/QtAlignedMalloc;/usr/local/include/eigen3/Eigen/Eigen;/usr/local/include/eigen3/Eigen/Eigen2Support;/usr/local/include/eigen3/Eigen/StdVector;/usr/local/include/eigen3/Eigen/Geometry;/usr/local/include/eigen3/Eigen/LU;/usr/local/include/eigen3/Eigen/StdDeque;/usr/local/include/eigen3/Eigen/Core;/usr/local/include/eigen3/Eigen/Dense")
FILE(INSTALL DESTINATION "/usr/local/include/eigen3/Eigen" TYPE FILE FILES
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/SVD"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/QR"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/StdList"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Cholesky"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/LeastSquares"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Array"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Jacobi"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Eigenvalues"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Sparse"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Householder"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/QtAlignedMalloc"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Eigen"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Eigen2Support"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/StdVector"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Geometry"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/LU"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/StdDeque"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Core"
    "/home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/eigen/Eigen/Dense"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Devel")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/eigen/Eigen/src/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

