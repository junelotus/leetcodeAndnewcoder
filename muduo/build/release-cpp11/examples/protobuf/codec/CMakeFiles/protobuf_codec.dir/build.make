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
CMAKE_SOURCE_DIR = /home/user/june/muduo/muduo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/june/muduo/build/release-cpp11

# Include any dependencies generated for this target.
include examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/depend.make

# Include the progress variables for this target.
include examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/progress.make

# Include the compile flags for this target's objects.
include examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/flags.make

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/flags.make
examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o: /home/user/june/muduo/muduo/examples/protobuf/codec/codec.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/june/muduo/build/release-cpp11/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o"
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protobuf_codec.dir/codec.cc.o -c /home/user/june/muduo/muduo/examples/protobuf/codec/codec.cc

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protobuf_codec.dir/codec.cc.i"
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/june/muduo/muduo/examples/protobuf/codec/codec.cc > CMakeFiles/protobuf_codec.dir/codec.cc.i

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protobuf_codec.dir/codec.cc.s"
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/june/muduo/muduo/examples/protobuf/codec/codec.cc -o CMakeFiles/protobuf_codec.dir/codec.cc.s

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.requires:

.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.requires

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.provides: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.requires
	$(MAKE) -f examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/build.make examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.provides.build
.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.provides

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.provides.build: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o


# Object files for target protobuf_codec
protobuf_codec_OBJECTS = \
"CMakeFiles/protobuf_codec.dir/codec.cc.o"

# External object files for target protobuf_codec
protobuf_codec_EXTERNAL_OBJECTS =

lib/libprotobuf_codec.a: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o
lib/libprotobuf_codec.a: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/build.make
lib/libprotobuf_codec.a: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/june/muduo/build/release-cpp11/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libprotobuf_codec.a"
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && $(CMAKE_COMMAND) -P CMakeFiles/protobuf_codec.dir/cmake_clean_target.cmake
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protobuf_codec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/build: lib/libprotobuf_codec.a

.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/build

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/requires: examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/codec.cc.o.requires

.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/requires

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/clean:
	cd /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec && $(CMAKE_COMMAND) -P CMakeFiles/protobuf_codec.dir/cmake_clean.cmake
.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/clean

examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/depend:
	cd /home/user/june/muduo/build/release-cpp11 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/june/muduo/muduo /home/user/june/muduo/muduo/examples/protobuf/codec /home/user/june/muduo/build/release-cpp11 /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec /home/user/june/muduo/build/release-cpp11/examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/protobuf/codec/CMakeFiles/protobuf_codec.dir/depend

