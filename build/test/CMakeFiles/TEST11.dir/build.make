# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_SOURCE_DIR = /home/eduard/TrainingDay1/Transformations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eduard/TrainingDay1/Transformations/build

# Include any dependencies generated for this target.
include test/CMakeFiles/TEST11.dir/depend.make

# Include the progress variables for this target.
include test/CMakeFiles/TEST11.dir/progress.make

# Include the compile flags for this target's objects.
include test/CMakeFiles/TEST11.dir/flags.make

test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o: test/CMakeFiles/TEST11.dir/flags.make
test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o: ../test/eigen_wrapper_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eduard/TrainingDay1/Transformations/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o -c /home/eduard/TrainingDay1/Transformations/test/eigen_wrapper_test.cc

test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.i"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eduard/TrainingDay1/Transformations/test/eigen_wrapper_test.cc > CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.i

test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.s"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eduard/TrainingDay1/Transformations/test/eigen_wrapper_test.cc -o CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.s

test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o: test/CMakeFiles/TEST11.dir/flags.make
test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o: ../src/eigen_wrapper.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eduard/TrainingDay1/Transformations/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o -c /home/eduard/TrainingDay1/Transformations/src/eigen_wrapper.cc

test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.i"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eduard/TrainingDay1/Transformations/src/eigen_wrapper.cc > CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.i

test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.s"
	cd /home/eduard/TrainingDay1/Transformations/build/test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eduard/TrainingDay1/Transformations/src/eigen_wrapper.cc -o CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.s

# Object files for target TEST11
TEST11_OBJECTS = \
"CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o" \
"CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o"

# External object files for target TEST11
TEST11_EXTERNAL_OBJECTS =

test/TEST11: test/CMakeFiles/TEST11.dir/eigen_wrapper_test.cc.o
test/TEST11: test/CMakeFiles/TEST11.dir/__/src/eigen_wrapper.cc.o
test/TEST11: test/CMakeFiles/TEST11.dir/build.make
test/TEST11: /usr/lib/x86_64-linux-gnu/libgtest.a
test/TEST11: /usr/lib/x86_64-linux-gnu/libgtest_main.a
test/TEST11: libtesting.a
test/TEST11: test/CMakeFiles/TEST11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eduard/TrainingDay1/Transformations/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TEST11"
	cd /home/eduard/TrainingDay1/Transformations/build/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/CMakeFiles/TEST11.dir/build: test/TEST11

.PHONY : test/CMakeFiles/TEST11.dir/build

test/CMakeFiles/TEST11.dir/clean:
	cd /home/eduard/TrainingDay1/Transformations/build/test && $(CMAKE_COMMAND) -P CMakeFiles/TEST11.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/TEST11.dir/clean

test/CMakeFiles/TEST11.dir/depend:
	cd /home/eduard/TrainingDay1/Transformations/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eduard/TrainingDay1/Transformations /home/eduard/TrainingDay1/Transformations/test /home/eduard/TrainingDay1/Transformations/build /home/eduard/TrainingDay1/Transformations/build/test /home/eduard/TrainingDay1/Transformations/build/test/CMakeFiles/TEST11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/TEST11.dir/depend
