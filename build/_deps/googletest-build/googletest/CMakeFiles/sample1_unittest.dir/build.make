# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/AlexBernatowicz/Desktop/CS 251/251-project5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/AlexBernatowicz/Desktop/CS 251/build"

# Include any dependencies generated for this target.
include _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/flags.make

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/flags.make
_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o: /Users/AlexBernatowicz/Desktop/CS\ 251/build/_deps/googletest-src/googletest/samples/sample1_unittest.cc
_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/AlexBernatowicz/Desktop/CS 251/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o -MF CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o.d -o CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o -c "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1_unittest.cc"

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1_unittest.cc" > CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.i

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1_unittest.cc" -o CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.s

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/flags.make
_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o: /Users/AlexBernatowicz/Desktop/CS\ 251/build/_deps/googletest-src/googletest/samples/sample1.cc
_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/AlexBernatowicz/Desktop/CS 251/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o -MF CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o.d -o CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o -c "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1.cc"

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1.cc" > CMakeFiles/sample1_unittest.dir/samples/sample1.cc.i

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest/samples/sample1.cc" -o CMakeFiles/sample1_unittest.dir/samples/sample1.cc.s

# Object files for target sample1_unittest
sample1_unittest_OBJECTS = \
"CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o" \
"CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o"

# External object files for target sample1_unittest
sample1_unittest_EXTERNAL_OBJECTS =

_deps/googletest-build/googletest/sample1_unittest: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1_unittest.cc.o
_deps/googletest-build/googletest/sample1_unittest: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/samples/sample1.cc.o
_deps/googletest-build/googletest/sample1_unittest: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/build.make
_deps/googletest-build/googletest/sample1_unittest: lib/libgtest_main.a
_deps/googletest-build/googletest/sample1_unittest: lib/libgtest.a
_deps/googletest-build/googletest/sample1_unittest: _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/AlexBernatowicz/Desktop/CS 251/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sample1_unittest"
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sample1_unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/build: _deps/googletest-build/googletest/sample1_unittest
.PHONY : _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/build

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/clean:
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" && $(CMAKE_COMMAND) -P CMakeFiles/sample1_unittest.dir/cmake_clean.cmake
.PHONY : _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/clean

_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/depend:
	cd "/Users/AlexBernatowicz/Desktop/CS 251/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/AlexBernatowicz/Desktop/CS 251/251-project5" "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-src/googletest" "/Users/AlexBernatowicz/Desktop/CS 251/build" "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest" "/Users/AlexBernatowicz/Desktop/CS 251/build/_deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : _deps/googletest-build/googletest/CMakeFiles/sample1_unittest.dir/depend

