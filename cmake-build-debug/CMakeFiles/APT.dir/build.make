# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vishwatejareddy/CLionProjects/APT

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/APT.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/APT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/APT.dir/flags.make

CMakeFiles/APT.dir/main.cpp.o: CMakeFiles/APT.dir/flags.make
CMakeFiles/APT.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/APT.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/APT.dir/main.cpp.o -c /Users/vishwatejareddy/CLionProjects/APT/main.cpp

CMakeFiles/APT.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/APT.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vishwatejareddy/CLionProjects/APT/main.cpp > CMakeFiles/APT.dir/main.cpp.i

CMakeFiles/APT.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/APT.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vishwatejareddy/CLionProjects/APT/main.cpp -o CMakeFiles/APT.dir/main.cpp.s

CMakeFiles/APT.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/APT.dir/main.cpp.o.requires

CMakeFiles/APT.dir/main.cpp.o.provides: CMakeFiles/APT.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/APT.dir/build.make CMakeFiles/APT.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/APT.dir/main.cpp.o.provides

CMakeFiles/APT.dir/main.cpp.o.provides.build: CMakeFiles/APT.dir/main.cpp.o


CMakeFiles/APT.dir/SOIL2/SOIL2.c.o: CMakeFiles/APT.dir/flags.make
CMakeFiles/APT.dir/SOIL2/SOIL2.c.o: ../SOIL2/SOIL2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/APT.dir/SOIL2/SOIL2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/APT.dir/SOIL2/SOIL2.c.o   -c /Users/vishwatejareddy/CLionProjects/APT/SOIL2/SOIL2.c

CMakeFiles/APT.dir/SOIL2/SOIL2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/APT.dir/SOIL2/SOIL2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vishwatejareddy/CLionProjects/APT/SOIL2/SOIL2.c > CMakeFiles/APT.dir/SOIL2/SOIL2.c.i

CMakeFiles/APT.dir/SOIL2/SOIL2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/APT.dir/SOIL2/SOIL2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vishwatejareddy/CLionProjects/APT/SOIL2/SOIL2.c -o CMakeFiles/APT.dir/SOIL2/SOIL2.c.s

CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.requires:

.PHONY : CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.requires

CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.provides: CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.requires
	$(MAKE) -f CMakeFiles/APT.dir/build.make CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.provides.build
.PHONY : CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.provides

CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.provides.build: CMakeFiles/APT.dir/SOIL2/SOIL2.c.o


# Object files for target APT
APT_OBJECTS = \
"CMakeFiles/APT.dir/main.cpp.o" \
"CMakeFiles/APT.dir/SOIL2/SOIL2.c.o"

# External object files for target APT
APT_EXTERNAL_OBJECTS =

APT: CMakeFiles/APT.dir/main.cpp.o
APT: CMakeFiles/APT.dir/SOIL2/SOIL2.c.o
APT: CMakeFiles/APT.dir/build.make
APT: /usr/local/lib/libglfw3.a
APT: /usr/local/lib/libGLEW.dylib
APT: libSOIL2.a
APT: /usr/local/lib/libtesseract.4.0.0.dylib
APT: /usr/local/lib/libopencv_stitching.3.4.1.dylib
APT: /usr/local/lib/libopencv_superres.3.4.1.dylib
APT: /usr/local/lib/libopencv_videostab.3.4.1.dylib
APT: /usr/local/lib/libopencv_aruco.3.4.1.dylib
APT: /usr/local/lib/libopencv_bgsegm.3.4.1.dylib
APT: /usr/local/lib/libopencv_bioinspired.3.4.1.dylib
APT: /usr/local/lib/libopencv_ccalib.3.4.1.dylib
APT: /usr/local/lib/libopencv_dnn_objdetect.3.4.1.dylib
APT: /usr/local/lib/libopencv_dpm.3.4.1.dylib
APT: /usr/local/lib/libopencv_face.3.4.1.dylib
APT: /usr/local/lib/libopencv_fuzzy.3.4.1.dylib
APT: /usr/local/lib/libopencv_hfs.3.4.1.dylib
APT: /usr/local/lib/libopencv_img_hash.3.4.1.dylib
APT: /usr/local/lib/libopencv_line_descriptor.3.4.1.dylib
APT: /usr/local/lib/libopencv_optflow.3.4.1.dylib
APT: /usr/local/lib/libopencv_reg.3.4.1.dylib
APT: /usr/local/lib/libopencv_rgbd.3.4.1.dylib
APT: /usr/local/lib/libopencv_saliency.3.4.1.dylib
APT: /usr/local/lib/libopencv_stereo.3.4.1.dylib
APT: /usr/local/lib/libopencv_structured_light.3.4.1.dylib
APT: /usr/local/lib/libopencv_surface_matching.3.4.1.dylib
APT: /usr/local/lib/libopencv_tracking.3.4.1.dylib
APT: /usr/local/lib/libopencv_xfeatures2d.3.4.1.dylib
APT: /usr/local/lib/libopencv_ximgproc.3.4.1.dylib
APT: /usr/local/lib/libopencv_xobjdetect.3.4.1.dylib
APT: /usr/local/lib/libopencv_xphoto.3.4.1.dylib
APT: /usr/local/lib/libopencv_shape.3.4.1.dylib
APT: /usr/local/lib/libopencv_photo.3.4.1.dylib
APT: /usr/local/lib/libopencv_datasets.3.4.1.dylib
APT: /usr/local/lib/libopencv_plot.3.4.1.dylib
APT: /usr/local/lib/libopencv_text.3.4.1.dylib
APT: /usr/local/lib/libopencv_dnn.3.4.1.dylib
APT: /usr/local/lib/libopencv_ml.3.4.1.dylib
APT: /usr/local/lib/libopencv_video.3.4.1.dylib
APT: /usr/local/lib/libopencv_calib3d.3.4.1.dylib
APT: /usr/local/lib/libopencv_features2d.3.4.1.dylib
APT: /usr/local/lib/libopencv_highgui.3.4.1.dylib
APT: /usr/local/lib/libopencv_videoio.3.4.1.dylib
APT: /usr/local/lib/libopencv_phase_unwrapping.3.4.1.dylib
APT: /usr/local/lib/libopencv_flann.3.4.1.dylib
APT: /usr/local/lib/libopencv_imgcodecs.3.4.1.dylib
APT: /usr/local/lib/libopencv_objdetect.3.4.1.dylib
APT: /usr/local/lib/libopencv_imgproc.3.4.1.dylib
APT: /usr/local/lib/libopencv_core.3.4.1.dylib
APT: CMakeFiles/APT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable APT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/APT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/APT.dir/build: APT

.PHONY : CMakeFiles/APT.dir/build

CMakeFiles/APT.dir/requires: CMakeFiles/APT.dir/main.cpp.o.requires
CMakeFiles/APT.dir/requires: CMakeFiles/APT.dir/SOIL2/SOIL2.c.o.requires

.PHONY : CMakeFiles/APT.dir/requires

CMakeFiles/APT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/APT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/APT.dir/clean

CMakeFiles/APT.dir/depend:
	cd /Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vishwatejareddy/CLionProjects/APT /Users/vishwatejareddy/CLionProjects/APT /Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug /Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug /Users/vishwatejareddy/CLionProjects/APT/cmake-build-debug/CMakeFiles/APT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/APT.dir/depend

