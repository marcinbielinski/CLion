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
CMAKE_SOURCE_DIR = /home/marcin/CLionProjects/Blackjack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marcin/CLionProjects/Blackjack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Blackjack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Blackjack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Blackjack.dir/flags.make

CMakeFiles/Blackjack.dir/main.cpp.o: CMakeFiles/Blackjack.dir/flags.make
CMakeFiles/Blackjack.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/Blackjack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Blackjack.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blackjack.dir/main.cpp.o -c /home/marcin/CLionProjects/Blackjack/main.cpp

CMakeFiles/Blackjack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blackjack.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/Blackjack/main.cpp > CMakeFiles/Blackjack.dir/main.cpp.i

CMakeFiles/Blackjack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blackjack.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/Blackjack/main.cpp -o CMakeFiles/Blackjack.dir/main.cpp.s

CMakeFiles/Blackjack.dir/Card.cpp.o: CMakeFiles/Blackjack.dir/flags.make
CMakeFiles/Blackjack.dir/Card.cpp.o: Card.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/Blackjack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Blackjack.dir/Card.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blackjack.dir/Card.cpp.o -c /home/marcin/CLionProjects/Blackjack/cmake-build-debug/Card.cpp

CMakeFiles/Blackjack.dir/Card.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blackjack.dir/Card.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/Blackjack/cmake-build-debug/Card.cpp > CMakeFiles/Blackjack.dir/Card.cpp.i

CMakeFiles/Blackjack.dir/Card.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blackjack.dir/Card.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/Blackjack/cmake-build-debug/Card.cpp -o CMakeFiles/Blackjack.dir/Card.cpp.s

CMakeFiles/Blackjack.dir/Deck.cpp.o: CMakeFiles/Blackjack.dir/flags.make
CMakeFiles/Blackjack.dir/Deck.cpp.o: ../Deck.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/marcin/CLionProjects/Blackjack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Blackjack.dir/Deck.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Blackjack.dir/Deck.cpp.o -c /home/marcin/CLionProjects/Blackjack/Deck.cpp

CMakeFiles/Blackjack.dir/Deck.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Blackjack.dir/Deck.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/marcin/CLionProjects/Blackjack/Deck.cpp > CMakeFiles/Blackjack.dir/Deck.cpp.i

CMakeFiles/Blackjack.dir/Deck.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Blackjack.dir/Deck.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/marcin/CLionProjects/Blackjack/Deck.cpp -o CMakeFiles/Blackjack.dir/Deck.cpp.s

# Object files for target Blackjack
Blackjack_OBJECTS = \
"CMakeFiles/Blackjack.dir/main.cpp.o" \
"CMakeFiles/Blackjack.dir/Card.cpp.o" \
"CMakeFiles/Blackjack.dir/Deck.cpp.o"

# External object files for target Blackjack
Blackjack_EXTERNAL_OBJECTS =

Blackjack: CMakeFiles/Blackjack.dir/main.cpp.o
Blackjack: CMakeFiles/Blackjack.dir/Card.cpp.o
Blackjack: CMakeFiles/Blackjack.dir/Deck.cpp.o
Blackjack: CMakeFiles/Blackjack.dir/build.make
Blackjack: CMakeFiles/Blackjack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/marcin/CLionProjects/Blackjack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Blackjack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Blackjack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Blackjack.dir/build: Blackjack

.PHONY : CMakeFiles/Blackjack.dir/build

CMakeFiles/Blackjack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Blackjack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Blackjack.dir/clean

CMakeFiles/Blackjack.dir/depend:
	cd /home/marcin/CLionProjects/Blackjack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marcin/CLionProjects/Blackjack /home/marcin/CLionProjects/Blackjack /home/marcin/CLionProjects/Blackjack/cmake-build-debug /home/marcin/CLionProjects/Blackjack/cmake-build-debug /home/marcin/CLionProjects/Blackjack/cmake-build-debug/CMakeFiles/Blackjack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Blackjack.dir/depend

