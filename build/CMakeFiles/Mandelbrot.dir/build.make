# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build"

# Include any dependencies generated for this target.
include CMakeFiles/Mandelbrot.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Mandelbrot.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mandelbrot.dir/flags.make

CMakeFiles/Mandelbrot.dir/src/main.cpp.o: CMakeFiles/Mandelbrot.dir/flags.make
CMakeFiles/Mandelbrot.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mandelbrot.dir/src/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mandelbrot.dir/src/main.cpp.o -c "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/main.cpp"

CMakeFiles/Mandelbrot.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mandelbrot.dir/src/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/main.cpp" > CMakeFiles/Mandelbrot.dir/src/main.cpp.i

CMakeFiles/Mandelbrot.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mandelbrot.dir/src/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/main.cpp" -o CMakeFiles/Mandelbrot.dir/src/main.cpp.s

CMakeFiles/Mandelbrot.dir/src/Window.cpp.o: CMakeFiles/Mandelbrot.dir/flags.make
CMakeFiles/Mandelbrot.dir/src/Window.cpp.o: ../src/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Mandelbrot.dir/src/Window.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mandelbrot.dir/src/Window.cpp.o -c "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/Window.cpp"

CMakeFiles/Mandelbrot.dir/src/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mandelbrot.dir/src/Window.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/Window.cpp" > CMakeFiles/Mandelbrot.dir/src/Window.cpp.i

CMakeFiles/Mandelbrot.dir/src/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mandelbrot.dir/src/Window.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/src/Window.cpp" -o CMakeFiles/Mandelbrot.dir/src/Window.cpp.s

# Object files for target Mandelbrot
Mandelbrot_OBJECTS = \
"CMakeFiles/Mandelbrot.dir/src/main.cpp.o" \
"CMakeFiles/Mandelbrot.dir/src/Window.cpp.o"

# External object files for target Mandelbrot
Mandelbrot_EXTERNAL_OBJECTS =

Mandelbrot: CMakeFiles/Mandelbrot.dir/src/main.cpp.o
Mandelbrot: CMakeFiles/Mandelbrot.dir/src/Window.cpp.o
Mandelbrot: CMakeFiles/Mandelbrot.dir/build.make
Mandelbrot: CMakeFiles/Mandelbrot.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Mandelbrot"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mandelbrot.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mandelbrot.dir/build: Mandelbrot

.PHONY : CMakeFiles/Mandelbrot.dir/build

CMakeFiles/Mandelbrot.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mandelbrot.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mandelbrot.dir/clean

CMakeFiles/Mandelbrot.dir/depend:
	cd "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World" "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World" "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build" "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build" "/Users/adam/Documents/Udacity/C++ Projects/CppND-Capstone-Hello-World/build/CMakeFiles/Mandelbrot.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Mandelbrot.dir/depend

