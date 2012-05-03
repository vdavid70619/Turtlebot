# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dai/Turtlebot/RGBDemo-0.7.0-Source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build

# Include any dependencies generated for this target.
include nestk/samples/CMakeFiles/handpoint-tracking.dir/depend.make

# Include the progress variables for this target.
include nestk/samples/CMakeFiles/handpoint-tracking.dir/progress.make

# Include the compile flags for this target's objects.
include nestk/samples/CMakeFiles/handpoint-tracking.dir/flags.make

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o: nestk/samples/CMakeFiles/handpoint-tracking.dir/flags.make
nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o: ../nestk/samples/handpoint_tracking.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o -c /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/samples/handpoint_tracking.cpp

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/handpoint-tracking.dir/handpoint_tracking.i"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/samples/handpoint_tracking.cpp > CMakeFiles/handpoint-tracking.dir/handpoint_tracking.i

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/handpoint-tracking.dir/handpoint_tracking.s"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/samples/handpoint_tracking.cpp -o CMakeFiles/handpoint-tracking.dir/handpoint_tracking.s

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.requires:
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.requires

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.provides: nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.requires
	$(MAKE) -f nestk/samples/CMakeFiles/handpoint-tracking.dir/build.make nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.provides.build
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.provides

nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.provides.build: nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o

# Object files for target handpoint-tracking
handpoint__tracking_OBJECTS = \
"CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o"

# External object files for target handpoint-tracking
handpoint__tracking_EXTERNAL_OBJECTS =

bin/handpoint-tracking: nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o
bin/handpoint-tracking: lib/libnestk.so
bin/handpoint-tracking: lib/libglew.so
bin/handpoint-tracking: /usr/lib/libboost_system-mt.so
bin/handpoint-tracking: /usr/lib/libboost_filesystem-mt.so
bin/handpoint-tracking: /usr/lib/libboost_thread-mt.so
bin/handpoint-tracking: /usr/lib/libboost_date_time-mt.so
bin/handpoint-tracking: /usr/lib/libboost_iostreams-mt.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtOpenGL.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtSvg.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtGui.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtXml.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtNetwork.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtCore.so
bin/handpoint-tracking: /usr/lib/libglut.so
bin/handpoint-tracking: /usr/lib/libXmu.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libXi.so
bin/handpoint-tracking: /usr/lib/libboost_system-mt.so
bin/handpoint-tracking: /usr/lib/libboost_filesystem-mt.so
bin/handpoint-tracking: /usr/lib/libboost_thread-mt.so
bin/handpoint-tracking: /usr/lib/libboost_date_time-mt.so
bin/handpoint-tracking: /usr/lib/libboost_iostreams-mt.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtOpenGL.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtSvg.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtGui.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtXml.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtNetwork.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libQtCore.so
bin/handpoint-tracking: /usr/lib/libglut.so
bin/handpoint-tracking: /usr/lib/libXmu.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libXi.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libGLU.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libSM.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libICE.so
bin/handpoint-tracking: /usr/lib/libpcl_common.so
bin/handpoint-tracking: /usr/lib/libflann_cpp_s.a
bin/handpoint-tracking: /usr/lib/libpcl_kdtree.so
bin/handpoint-tracking: /usr/lib/libpcl_octree.so
bin/handpoint-tracking: /usr/lib/libpcl_search.so
bin/handpoint-tracking: /usr/lib/libpcl_features.so
bin/handpoint-tracking: /usr/lib/libpcl_sample_consensus.so
bin/handpoint-tracking: /usr/lib/libpcl_filters.so
bin/handpoint-tracking: /usr/lib/libpcl_keypoints.so
bin/handpoint-tracking: /usr/lib/libOpenNI.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libfreetype.so
bin/handpoint-tracking: /usr/lib/libgl2ps.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libGL.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libXt.so
bin/handpoint-tracking: /usr/lib/libpq.so
bin/handpoint-tracking: /usr/lib/libmysqlclient.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libpng.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libz.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libjpeg.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libtiff.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libexpat.so
bin/handpoint-tracking: /usr/lib/libavformat.so
bin/handpoint-tracking: /usr/lib/libavcodec.so
bin/handpoint-tracking: /usr/lib/libavutil.so
bin/handpoint-tracking: /usr/lib/libswscale.so
bin/handpoint-tracking: /usr/lib/openmpi/lib/libmpi.so
bin/handpoint-tracking: /usr/lib/openmpi/lib/libopen-rte.so
bin/handpoint-tracking: /usr/lib/openmpi/lib/libopen-pal.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libnsl.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libutil.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libm.so
bin/handpoint-tracking: /usr/lib/openmpi/lib/libmpi_cxx.so
bin/handpoint-tracking: /usr/lib/libpcl_io.so
bin/handpoint-tracking: /usr/lib/libpcl_segmentation.so
bin/handpoint-tracking: /usr/lib/libqhull.so
bin/handpoint-tracking: /usr/lib/libpcl_surface.so
bin/handpoint-tracking: /usr/lib/libpcl_registration.so
bin/handpoint-tracking: /usr/lib/libpcl_visualization.so
bin/handpoint-tracking: /usr/lib/libpcl_tracking.so
bin/handpoint-tracking: /usr/lib/libpcl_apps.so
bin/handpoint-tracking: /usr/lib/libopencv_gpu.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_contrib.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_legacy.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_objdetect.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_calib3d.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_features2d.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_video.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_highgui.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_ml.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_imgproc.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_flann.so.2.3.1
bin/handpoint-tracking: /usr/lib/libopencv_core.so.2.3.1
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libX11.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libXext.so
bin/handpoint-tracking: lib/libfreenect.so.0.0.1
bin/handpoint-tracking: lib/libOpenNI.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libusb-1.0.so
bin/handpoint-tracking: /usr/lib/i386-linux-gnu/libdl.so
bin/handpoint-tracking: lib/libTinyXml.a
bin/handpoint-tracking: nestk/samples/CMakeFiles/handpoint-tracking.dir/build.make
bin/handpoint-tracking: nestk/samples/CMakeFiles/handpoint-tracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/handpoint-tracking"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/handpoint-tracking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
nestk/samples/CMakeFiles/handpoint-tracking.dir/build: bin/handpoint-tracking
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/build

nestk/samples/CMakeFiles/handpoint-tracking.dir/requires: nestk/samples/CMakeFiles/handpoint-tracking.dir/handpoint_tracking.o.requires
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/requires

nestk/samples/CMakeFiles/handpoint-tracking.dir/clean:
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples && $(CMAKE_COMMAND) -P CMakeFiles/handpoint-tracking.dir/cmake_clean.cmake
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/clean

nestk/samples/CMakeFiles/handpoint-tracking.dir/depend:
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dai/Turtlebot/RGBDemo-0.7.0-Source /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/samples /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/samples/CMakeFiles/handpoint-tracking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : nestk/samples/CMakeFiles/handpoint-tracking.dir/depend
