# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/123/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/123/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marcin/CLionProjects/AKADEMIA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/CLionProjects/AKADEMIA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AKADEMIA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AKADEMIA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AKADEMIA.dir/flags.make

CMakeFiles/AKADEMIA.dir/main.cpp.o: CMakeFiles/AKADEMIA.dir/flags.make
CMakeFiles/AKADEMIA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/AKADEMIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AKADEMIA.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AKADEMIA.dir/main.cpp.o -c /home/marcin/CLionProjects/AKADEMIA/main.cpp

CMakeFiles/AKADEMIA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AKADEMIA.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/AKADEMIA/main.cpp > CMakeFiles/AKADEMIA.dir/main.cpp.i

CMakeFiles/AKADEMIA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AKADEMIA.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/AKADEMIA/main.cpp -o CMakeFiles/AKADEMIA.dir/main.cpp.s

# Object files for target AKADEMIA
AKADEMIA_OBJECTS = \
"CMakeFiles/AKADEMIA.dir/main.cpp.o"

# External object files for target AKADEMIA
AKADEMIA_EXTERNAL_OBJECTS =

AKADEMIA: CMakeFiles/AKADEMIA.dir/main.cpp.o
AKADEMIA: CMakeFiles/AKADEMIA.dir/build.make
AKADEMIA: CMakeFiles/AKADEMIA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/CLionProjects/AKADEMIA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AKADEMIA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AKADEMIA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AKADEMIA.dir/build: AKADEMIA

.PHONY : CMakeFiles/AKADEMIA.dir/build

CMakeFiles/AKADEMIA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AKADEMIA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AKADEMIA.dir/clean

CMakeFiles/AKADEMIA.dir/depend:
	cd /home/marcin/CLionProjects/AKADEMIA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/CLionProjects/AKADEMIA /home/marcin/CLionProjects/AKADEMIA /home/marcin/CLionProjects/AKADEMIA/cmake-build-debug /home/marcin/CLionProjects/AKADEMIA/cmake-build-debug /home/marcin/CLionProjects/AKADEMIA/cmake-build-debug/CMakeFiles/AKADEMIA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AKADEMIA.dir/depend

