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
CMAKE_SOURCE_DIR = /home/marcin/CLionProjects/virtualfunction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/CLionProjects/virtualfunction/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/virtualfunction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/virtualfunction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/virtualfunction.dir/flags.make

CMakeFiles/virtualfunction.dir/main.cpp.o: CMakeFiles/virtualfunction.dir/flags.make
CMakeFiles/virtualfunction.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/virtualfunction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/virtualfunction.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/virtualfunction.dir/main.cpp.o -c /home/marcin/CLionProjects/virtualfunction/main.cpp

CMakeFiles/virtualfunction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/virtualfunction.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/virtualfunction/main.cpp > CMakeFiles/virtualfunction.dir/main.cpp.i

CMakeFiles/virtualfunction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/virtualfunction.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/virtualfunction/main.cpp -o CMakeFiles/virtualfunction.dir/main.cpp.s

# Object files for target virtualfunction
virtualfunction_OBJECTS = \
"CMakeFiles/virtualfunction.dir/main.cpp.o"

# External object files for target virtualfunction
virtualfunction_EXTERNAL_OBJECTS =

virtualfunction: CMakeFiles/virtualfunction.dir/main.cpp.o
virtualfunction: CMakeFiles/virtualfunction.dir/build.make
virtualfunction: CMakeFiles/virtualfunction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/CLionProjects/virtualfunction/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable virtualfunction"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/virtualfunction.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/virtualfunction.dir/build: virtualfunction

.PHONY : CMakeFiles/virtualfunction.dir/build

CMakeFiles/virtualfunction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/virtualfunction.dir/cmake_clean.cmake
.PHONY : CMakeFiles/virtualfunction.dir/clean

CMakeFiles/virtualfunction.dir/depend:
	cd /home/marcin/CLionProjects/virtualfunction/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/CLionProjects/virtualfunction /home/marcin/CLionProjects/virtualfunction /home/marcin/CLionProjects/virtualfunction/cmake-build-debug /home/marcin/CLionProjects/virtualfunction/cmake-build-debug /home/marcin/CLionProjects/virtualfunction/cmake-build-debug/CMakeFiles/virtualfunction.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/virtualfunction.dir/depend

