# To be included by programs using nestk as an external library.

SET(NESTK_USE_GSL OFF)
SET(NESTK_USE_FREENECT 1)
SET(NESTK_USE_OPENNI 1)
SET(NESTK_USE_PCL 1)
SET(NESTK_USE_ROS OFF)

SET(NESTK_USE_EMBEDDED_EIGEN ON)
SET(NESTK_USE_EMBEDDED_GLEW ON)
SET(NESTK_USE_EMBEDDED_FREENECT ON)
SET(NESTK_USE_EMBEDDED_OPENNI ON)

IF(CMAKE_COMPILER_IS_GNUCXX)
  SET(DEFAULT_NESTK_EXTRA_CMAKE_CXX_FLAGS "-fPIC -Wall -W -Wno-unused -Wno-sign-compare")
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

SET(NESTK_EXTRA_CMAKE_CXX_FLAGS  ${DEFAULT_NESTK_EXTRA_CMAKE_CXX_FLAGS}
    CACHE STRING "Extra flags appended to CMAKE_CXX_FLAGS" )
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${NESTK_EXTRA_CMAKE_CXX_FLAGS}" )

SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_LIST_DIR}")
IF (NESTK_USE_ROS)
  INCLUDE("/home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/cmake/UseNestkDepsROS.cmake")
ELSE()
  INCLUDE("${CMAKE_CURRENT_LIST_DIR}/find_nestk_deps.cmake")
ENDIF()

# For some reasons, qt libraries are needed here on mac.
IF (APPLE)
   SET(NESTK_LIBRARIES ${QT_LIBRARIES} ${QT_LIBRARIES})
ENDIF()

## Check if private part is enabled.
IF(IS_DIRECTORY "${NESTK_INCLUDE_DIR}/ntk/private")
  ADD_DEFINITIONS(-DNESTK_PRIVATE)
  SET(HAVE_NESTK_PRIVATE 1 CACHE INTERNAL "Nestk private features are available")
ENDIF()

INCLUDE_DIRECTORIES(${NESTK_INCLUDE_DIR})