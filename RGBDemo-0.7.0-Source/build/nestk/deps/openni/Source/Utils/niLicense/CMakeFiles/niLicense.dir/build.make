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
include nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/depend.make

# Include the progress variables for this target.
include nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/progress.make

# Include the compile flags for this target's objects.
include nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/flags.make

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/flags.make
nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o: ../nestk/deps/openni/Source/Utils/niLicense/niLicense.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/niLicense.dir/niLicense.cpp.o -c /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Source/Utils/niLicense/niLicense.cpp

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/niLicense.dir/niLicense.cpp.i"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Source/Utils/niLicense/niLicense.cpp > CMakeFiles/niLicense.dir/niLicense.cpp.i

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/niLicense.dir/niLicense.cpp.s"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Source/Utils/niLicense/niLicense.cpp -o CMakeFiles/niLicense.dir/niLicense.cpp.s

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.requires:
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.requires

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.provides: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.requires
	$(MAKE) -f nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/build.make nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.provides.build
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.provides

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.provides.build: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o

# Object files for target niLicense
niLicense_OBJECTS = \
"CMakeFiles/niLicense.dir/niLicense.cpp.o"

# External object files for target niLicense
niLicense_EXTERNAL_OBJECTS =

bin/niLicense: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o
bin/niLicense: lib/libOpenNI.so
bin/niLicense: /usr/lib/i386-linux-gnu/libusb-1.0.so
bin/niLicense: /usr/lib/i386-linux-gnu/libdl.so
bin/niLicense: lib/libTinyXml.a
bin/niLicense: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/build.make
bin/niLicense: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../../../../bin/niLicense"
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/niLicense.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/build: bin/niLicense
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/build

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/requires: nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/niLicense.cpp.o.requires
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/requires

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/clean:
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense && $(CMAKE_COMMAND) -P CMakeFiles/niLicense.dir/cmake_clean.cmake
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/clean

nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/depend:
	cd /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dai/Turtlebot/RGBDemo-0.7.0-Source /home/dai/Turtlebot/RGBDemo-0.7.0-Source/nestk/deps/openni/Source/Utils/niLicense /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense /home/dai/Turtlebot/RGBDemo-0.7.0-Source/build/nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : nestk/deps/openni/Source/Utils/niLicense/CMakeFiles/niLicense.dir/depend
