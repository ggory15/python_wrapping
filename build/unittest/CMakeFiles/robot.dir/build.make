# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ggory15/git/python_wrapping

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ggory15/git/python_wrapping/build

# Include any dependencies generated for this target.
include unittest/CMakeFiles/robot.dir/depend.make

# Include the progress variables for this target.
include unittest/CMakeFiles/robot.dir/progress.make

# Include the compile flags for this target's objects.
include unittest/CMakeFiles/robot.dir/flags.make

unittest/CMakeFiles/robot.dir/robot.cpp.o: unittest/CMakeFiles/robot.dir/flags.make
unittest/CMakeFiles/robot.dir/robot.cpp.o: ../unittest/robot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ggory15/git/python_wrapping/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittest/CMakeFiles/robot.dir/robot.cpp.o"
	cd /home/ggory15/git/python_wrapping/build/unittest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/robot.dir/robot.cpp.o -c /home/ggory15/git/python_wrapping/unittest/robot.cpp

unittest/CMakeFiles/robot.dir/robot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robot.dir/robot.cpp.i"
	cd /home/ggory15/git/python_wrapping/build/unittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ggory15/git/python_wrapping/unittest/robot.cpp > CMakeFiles/robot.dir/robot.cpp.i

unittest/CMakeFiles/robot.dir/robot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robot.dir/robot.cpp.s"
	cd /home/ggory15/git/python_wrapping/build/unittest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ggory15/git/python_wrapping/unittest/robot.cpp -o CMakeFiles/robot.dir/robot.cpp.s

unittest/CMakeFiles/robot.dir/robot.cpp.o.requires:

.PHONY : unittest/CMakeFiles/robot.dir/robot.cpp.o.requires

unittest/CMakeFiles/robot.dir/robot.cpp.o.provides: unittest/CMakeFiles/robot.dir/robot.cpp.o.requires
	$(MAKE) -f unittest/CMakeFiles/robot.dir/build.make unittest/CMakeFiles/robot.dir/robot.cpp.o.provides.build
.PHONY : unittest/CMakeFiles/robot.dir/robot.cpp.o.provides

unittest/CMakeFiles/robot.dir/robot.cpp.o.provides.build: unittest/CMakeFiles/robot.dir/robot.cpp.o


# Object files for target robot
robot_OBJECTS = \
"CMakeFiles/robot.dir/robot.cpp.o"

# External object files for target robot
robot_EXTERNAL_OBJECTS =

unittest/robot: unittest/CMakeFiles/robot.dir/robot.cpp.o
unittest/robot: unittest/CMakeFiles/robot.dir/build.make
unittest/robot: src/libpython_wrapping.so
unittest/robot: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so
unittest/robot: unittest/CMakeFiles/robot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ggory15/git/python_wrapping/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable robot"
	cd /home/ggory15/git/python_wrapping/build/unittest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittest/CMakeFiles/robot.dir/build: unittest/robot

.PHONY : unittest/CMakeFiles/robot.dir/build

unittest/CMakeFiles/robot.dir/requires: unittest/CMakeFiles/robot.dir/robot.cpp.o.requires

.PHONY : unittest/CMakeFiles/robot.dir/requires

unittest/CMakeFiles/robot.dir/clean:
	cd /home/ggory15/git/python_wrapping/build/unittest && $(CMAKE_COMMAND) -P CMakeFiles/robot.dir/cmake_clean.cmake
.PHONY : unittest/CMakeFiles/robot.dir/clean

unittest/CMakeFiles/robot.dir/depend:
	cd /home/ggory15/git/python_wrapping/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ggory15/git/python_wrapping /home/ggory15/git/python_wrapping/unittest /home/ggory15/git/python_wrapping/build /home/ggory15/git/python_wrapping/build/unittest /home/ggory15/git/python_wrapping/build/unittest/CMakeFiles/robot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittest/CMakeFiles/robot.dir/depend

