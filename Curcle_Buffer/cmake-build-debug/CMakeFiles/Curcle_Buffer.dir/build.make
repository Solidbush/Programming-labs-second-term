# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Prog_2_sem\Curcle_Buffer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Curcle_Buffer.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Curcle_Buffer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Curcle_Buffer.dir/flags.make

CMakeFiles/Curcle_Buffer.dir/main.cpp.obj: CMakeFiles/Curcle_Buffer.dir/flags.make
CMakeFiles/Curcle_Buffer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Curcle_Buffer.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Curcle_Buffer.dir\main.cpp.obj -c D:\Prog_2_sem\Curcle_Buffer\main.cpp

CMakeFiles/Curcle_Buffer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Curcle_Buffer.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Prog_2_sem\Curcle_Buffer\main.cpp > CMakeFiles\Curcle_Buffer.dir\main.cpp.i

CMakeFiles/Curcle_Buffer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Curcle_Buffer.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Prog_2_sem\Curcle_Buffer\main.cpp -o CMakeFiles\Curcle_Buffer.dir\main.cpp.s

# Object files for target Curcle_Buffer
Curcle_Buffer_OBJECTS = \
"CMakeFiles/Curcle_Buffer.dir/main.cpp.obj"

# External object files for target Curcle_Buffer
Curcle_Buffer_EXTERNAL_OBJECTS =

Curcle_Buffer.exe: CMakeFiles/Curcle_Buffer.dir/main.cpp.obj
Curcle_Buffer.exe: CMakeFiles/Curcle_Buffer.dir/build.make
Curcle_Buffer.exe: CMakeFiles/Curcle_Buffer.dir/linklibs.rsp
Curcle_Buffer.exe: CMakeFiles/Curcle_Buffer.dir/objects1.rsp
Curcle_Buffer.exe: CMakeFiles/Curcle_Buffer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Curcle_Buffer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Curcle_Buffer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Curcle_Buffer.dir/build: Curcle_Buffer.exe
.PHONY : CMakeFiles/Curcle_Buffer.dir/build

CMakeFiles/Curcle_Buffer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Curcle_Buffer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Curcle_Buffer.dir/clean

CMakeFiles/Curcle_Buffer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Prog_2_sem\Curcle_Buffer D:\Prog_2_sem\Curcle_Buffer D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug D:\Prog_2_sem\Curcle_Buffer\cmake-build-debug\CMakeFiles\Curcle_Buffer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Curcle_Buffer.dir/depend
