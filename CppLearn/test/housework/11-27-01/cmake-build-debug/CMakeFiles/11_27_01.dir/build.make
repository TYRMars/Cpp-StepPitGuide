# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_SOURCE_DIR = /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/11_27_01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/11_27_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/11_27_01.dir/flags.make

CMakeFiles/11_27_01.dir/main.cpp.o: CMakeFiles/11_27_01.dir/flags.make
CMakeFiles/11_27_01.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/11_27_01.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/11_27_01.dir/main.cpp.o -c /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/main.cpp

CMakeFiles/11_27_01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/11_27_01.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/main.cpp > CMakeFiles/11_27_01.dir/main.cpp.i

CMakeFiles/11_27_01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/11_27_01.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/main.cpp -o CMakeFiles/11_27_01.dir/main.cpp.s

CMakeFiles/11_27_01.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/11_27_01.dir/main.cpp.o.requires

CMakeFiles/11_27_01.dir/main.cpp.o.provides: CMakeFiles/11_27_01.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/11_27_01.dir/build.make CMakeFiles/11_27_01.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/11_27_01.dir/main.cpp.o.provides

CMakeFiles/11_27_01.dir/main.cpp.o.provides.build: CMakeFiles/11_27_01.dir/main.cpp.o


# Object files for target 11_27_01
11_27_01_OBJECTS = \
"CMakeFiles/11_27_01.dir/main.cpp.o"

# External object files for target 11_27_01
11_27_01_EXTERNAL_OBJECTS =

11_27_01: CMakeFiles/11_27_01.dir/main.cpp.o
11_27_01: CMakeFiles/11_27_01.dir/build.make
11_27_01: CMakeFiles/11_27_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 11_27_01"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/11_27_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/11_27_01.dir/build: 11_27_01

.PHONY : CMakeFiles/11_27_01.dir/build

CMakeFiles/11_27_01.dir/requires: CMakeFiles/11_27_01.dir/main.cpp.o.requires

.PHONY : CMakeFiles/11_27_01.dir/requires

CMakeFiles/11_27_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/11_27_01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/11_27_01.dir/clean

CMakeFiles/11_27_01.dir/depend:
	cd /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01 /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01 /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug /Users/zhangjianan/Documents/GitHub/AlgorithmLearn/CppLearn/test/housework/11-27-01/cmake-build-debug/CMakeFiles/11_27_01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/11_27_01.dir/depend

