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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.16.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.16.3/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sean/github/LEARN_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sean/github/LEARN_C

# Include any dependencies generated for this target.
include common/fmt/CMakeFiles/fmt.dir/depend.make

# Include the progress variables for this target.
include common/fmt/CMakeFiles/fmt.dir/progress.make

# Include the compile flags for this target's objects.
include common/fmt/CMakeFiles/fmt.dir/flags.make

common/fmt/CMakeFiles/fmt.dir/src/format.cc.o: common/fmt/CMakeFiles/fmt.dir/flags.make
common/fmt/CMakeFiles/fmt.dir/src/format.cc.o: common/fmt/src/format.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sean/github/LEARN_C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object common/fmt/CMakeFiles/fmt.dir/src/format.cc.o"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fmt.dir/src/format.cc.o -c /Users/sean/github/LEARN_C/common/fmt/src/format.cc

common/fmt/CMakeFiles/fmt.dir/src/format.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fmt.dir/src/format.cc.i"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sean/github/LEARN_C/common/fmt/src/format.cc > CMakeFiles/fmt.dir/src/format.cc.i

common/fmt/CMakeFiles/fmt.dir/src/format.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fmt.dir/src/format.cc.s"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sean/github/LEARN_C/common/fmt/src/format.cc -o CMakeFiles/fmt.dir/src/format.cc.s

common/fmt/CMakeFiles/fmt.dir/src/os.cc.o: common/fmt/CMakeFiles/fmt.dir/flags.make
common/fmt/CMakeFiles/fmt.dir/src/os.cc.o: common/fmt/src/os.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sean/github/LEARN_C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object common/fmt/CMakeFiles/fmt.dir/src/os.cc.o"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fmt.dir/src/os.cc.o -c /Users/sean/github/LEARN_C/common/fmt/src/os.cc

common/fmt/CMakeFiles/fmt.dir/src/os.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fmt.dir/src/os.cc.i"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sean/github/LEARN_C/common/fmt/src/os.cc > CMakeFiles/fmt.dir/src/os.cc.i

common/fmt/CMakeFiles/fmt.dir/src/os.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fmt.dir/src/os.cc.s"
	cd /Users/sean/github/LEARN_C/common/fmt && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sean/github/LEARN_C/common/fmt/src/os.cc -o CMakeFiles/fmt.dir/src/os.cc.s

# Object files for target fmt
fmt_OBJECTS = \
"CMakeFiles/fmt.dir/src/format.cc.o" \
"CMakeFiles/fmt.dir/src/os.cc.o"

# External object files for target fmt
fmt_EXTERNAL_OBJECTS =

common/fmt/libfmt.a: common/fmt/CMakeFiles/fmt.dir/src/format.cc.o
common/fmt/libfmt.a: common/fmt/CMakeFiles/fmt.dir/src/os.cc.o
common/fmt/libfmt.a: common/fmt/CMakeFiles/fmt.dir/build.make
common/fmt/libfmt.a: common/fmt/CMakeFiles/fmt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sean/github/LEARN_C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libfmt.a"
	cd /Users/sean/github/LEARN_C/common/fmt && $(CMAKE_COMMAND) -P CMakeFiles/fmt.dir/cmake_clean_target.cmake
	cd /Users/sean/github/LEARN_C/common/fmt && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fmt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
common/fmt/CMakeFiles/fmt.dir/build: common/fmt/libfmt.a

.PHONY : common/fmt/CMakeFiles/fmt.dir/build

common/fmt/CMakeFiles/fmt.dir/clean:
	cd /Users/sean/github/LEARN_C/common/fmt && $(CMAKE_COMMAND) -P CMakeFiles/fmt.dir/cmake_clean.cmake
.PHONY : common/fmt/CMakeFiles/fmt.dir/clean

common/fmt/CMakeFiles/fmt.dir/depend:
	cd /Users/sean/github/LEARN_C && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sean/github/LEARN_C /Users/sean/github/LEARN_C/common/fmt /Users/sean/github/LEARN_C /Users/sean/github/LEARN_C/common/fmt /Users/sean/github/LEARN_C/common/fmt/CMakeFiles/fmt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : common/fmt/CMakeFiles/fmt.dir/depend

