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
CMAKE_SOURCE_DIR = /home/marcin/CLionProjects/inheritanceQ1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/inheritanceQ1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/inheritanceQ1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inheritanceQ1.dir/flags.make

CMakeFiles/inheritanceQ1.dir/main.cpp.o: CMakeFiles/inheritanceQ1.dir/flags.make
CMakeFiles/inheritanceQ1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/inheritanceQ1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/inheritanceQ1.dir/main.cpp.o -c /home/marcin/CLionProjects/inheritanceQ1/main.cpp

CMakeFiles/inheritanceQ1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/inheritanceQ1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/inheritanceQ1/main.cpp > CMakeFiles/inheritanceQ1.dir/main.cpp.i

CMakeFiles/inheritanceQ1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/inheritanceQ1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/inheritanceQ1/main.cpp -o CMakeFiles/inheritanceQ1.dir/main.cpp.s

# Object files for target inheritanceQ1
inheritanceQ1_OBJECTS = \
"CMakeFiles/inheritanceQ1.dir/main.cpp.o"

# External object files for target inheritanceQ1
inheritanceQ1_EXTERNAL_OBJECTS =

inheritanceQ1: CMakeFiles/inheritanceQ1.dir/main.cpp.o
inheritanceQ1: CMakeFiles/inheritanceQ1.dir/build.make
inheritanceQ1: CMakeFiles/inheritanceQ1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable inheritanceQ1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inheritanceQ1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inheritanceQ1.dir/build: inheritanceQ1

.PHONY : CMakeFiles/inheritanceQ1.dir/build

CMakeFiles/inheritanceQ1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/inheritanceQ1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/inheritanceQ1.dir/clean

CMakeFiles/inheritanceQ1.dir/depend:
	cd /home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/CLionProjects/inheritanceQ1 /home/marcin/CLionProjects/inheritanceQ1 /home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug /home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug /home/marcin/CLionProjects/inheritanceQ1/cmake-build-debug/CMakeFiles/inheritanceQ1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inheritanceQ1.dir/depend

