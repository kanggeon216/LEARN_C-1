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
CMAKE_SOURCE_DIR = /Users/sean/github/LEARN_C/opencv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sean/github/LEARN_C/opencv/build

# Include any dependencies generated for this target.
include CMakeFiles/03_video.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/03_video.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/03_video.dir/flags.make

CMakeFiles/03_video.dir/03_video.cpp.o: CMakeFiles/03_video.dir/flags.make
CMakeFiles/03_video.dir/03_video.cpp.o: ../03_video.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sean/github/LEARN_C/opencv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/03_video.dir/03_video.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/03_video.dir/03_video.cpp.o -c /Users/sean/github/LEARN_C/opencv/03_video.cpp

CMakeFiles/03_video.dir/03_video.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/03_video.dir/03_video.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sean/github/LEARN_C/opencv/03_video.cpp > CMakeFiles/03_video.dir/03_video.cpp.i

CMakeFiles/03_video.dir/03_video.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/03_video.dir/03_video.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sean/github/LEARN_C/opencv/03_video.cpp -o CMakeFiles/03_video.dir/03_video.cpp.s

# Object files for target 03_video
03_video_OBJECTS = \
"CMakeFiles/03_video.dir/03_video.cpp.o"

# External object files for target 03_video
03_video_EXTERNAL_OBJECTS =

03_video: CMakeFiles/03_video.dir/03_video.cpp.o
03_video: CMakeFiles/03_video.dir/build.make
03_video: /usr/local/lib/opencv/build/lib/libopencv_dnn.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_gapi.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_highgui.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_ml.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_objdetect.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_photo.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_stitching.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_video.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_videoio.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_imgcodecs.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_calib3d.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_features2d.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_flann.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_imgproc.4.4.0.dylib
03_video: /usr/local/lib/opencv/build/lib/libopencv_core.4.4.0.dylib
03_video: CMakeFiles/03_video.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sean/github/LEARN_C/opencv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 03_video"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/03_video.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/03_video.dir/build: 03_video

.PHONY : CMakeFiles/03_video.dir/build

CMakeFiles/03_video.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/03_video.dir/cmake_clean.cmake
.PHONY : CMakeFiles/03_video.dir/clean

CMakeFiles/03_video.dir/depend:
	cd /Users/sean/github/LEARN_C/opencv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sean/github/LEARN_C/opencv /Users/sean/github/LEARN_C/opencv /Users/sean/github/LEARN_C/opencv/build /Users/sean/github/LEARN_C/opencv/build /Users/sean/github/LEARN_C/opencv/build/CMakeFiles/03_video.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/03_video.dir/depend

