# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\cmake-3.26.3-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\cmake-3.26.3-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build"

# Include any dependencies generated for this target.
include googletest/googletest/CMakeFiles/sample7_unittest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include googletest/googletest/CMakeFiles/sample7_unittest.dir/compiler_depend.make

# Include the progress variables for this target.
include googletest/googletest/CMakeFiles/sample7_unittest.dir/progress.make

# Include the compile flags for this target's objects.
include googletest/googletest/CMakeFiles/sample7_unittest.dir/flags.make

googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj: googletest/googletest/CMakeFiles/sample7_unittest.dir/flags.make
googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj: googletest/googletest/CMakeFiles/sample7_unittest.dir/includes_CXX.rsp
googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj: C:/Users/dovyd/OneDrive/Stalinis\ kompiuteris/Uni/Uni/2\ semestras/objektinis\ programavimas/pirmas\ darbas/V2.0/googletest/googletest/samples/sample7_unittest.cc
googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj: googletest/googletest/CMakeFiles/sample7_unittest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj"
	cd /d C:\Users\dovyd\OneDrive\STALIN~1\Uni\Uni\2SEMES~1\OBJEKT~1\PIRMAS~1\V2.0\build\GOOGLE~1\GOOGLE~2 && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj -MF CMakeFiles\sample7_unittest.dir\samples\sample7_unittest.cc.obj.d -o CMakeFiles\sample7_unittest.dir\samples\sample7_unittest.cc.obj -c "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\googletest\googletest\samples\sample7_unittest.cc"

googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.i"
	cd /d C:\Users\dovyd\OneDrive\STALIN~1\Uni\Uni\2SEMES~1\OBJEKT~1\PIRMAS~1\V2.0\build\GOOGLE~1\GOOGLE~2 && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\googletest\googletest\samples\sample7_unittest.cc" > CMakeFiles\sample7_unittest.dir\samples\sample7_unittest.cc.i

googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.s"
	cd /d C:\Users\dovyd\OneDrive\STALIN~1\Uni\Uni\2SEMES~1\OBJEKT~1\PIRMAS~1\V2.0\build\GOOGLE~1\GOOGLE~2 && C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\googletest\googletest\samples\sample7_unittest.cc" -o CMakeFiles\sample7_unittest.dir\samples\sample7_unittest.cc.s

# Object files for target sample7_unittest
sample7_unittest_OBJECTS = \
"CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj"

# External object files for target sample7_unittest
sample7_unittest_EXTERNAL_OBJECTS =

googletest/googletest/sample7_unittest.exe: googletest/googletest/CMakeFiles/sample7_unittest.dir/samples/sample7_unittest.cc.obj
googletest/googletest/sample7_unittest.exe: googletest/googletest/CMakeFiles/sample7_unittest.dir/build.make
googletest/googletest/sample7_unittest.exe: lib/libgtest_main.a
googletest/googletest/sample7_unittest.exe: lib/libgtest.a
googletest/googletest/sample7_unittest.exe: googletest/googletest/CMakeFiles/sample7_unittest.dir/linkLibs.rsp
googletest/googletest/sample7_unittest.exe: googletest/googletest/CMakeFiles/sample7_unittest.dir/objects1.rsp
googletest/googletest/sample7_unittest.exe: googletest/googletest/CMakeFiles/sample7_unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sample7_unittest.exe"
	cd /d C:\Users\dovyd\OneDrive\STALIN~1\Uni\Uni\2SEMES~1\OBJEKT~1\PIRMAS~1\V2.0\build\GOOGLE~1\GOOGLE~2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sample7_unittest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest/googletest/CMakeFiles/sample7_unittest.dir/build: googletest/googletest/sample7_unittest.exe
.PHONY : googletest/googletest/CMakeFiles/sample7_unittest.dir/build

googletest/googletest/CMakeFiles/sample7_unittest.dir/clean:
	cd /d C:\Users\dovyd\OneDrive\STALIN~1\Uni\Uni\2SEMES~1\OBJEKT~1\PIRMAS~1\V2.0\build\GOOGLE~1\GOOGLE~2 && $(CMAKE_COMMAND) -P CMakeFiles\sample7_unittest.dir\cmake_clean.cmake
.PHONY : googletest/googletest/CMakeFiles/sample7_unittest.dir/clean

googletest/googletest/CMakeFiles/sample7_unittest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0" "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\googletest\googletest" "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build" "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build\googletest\googletest" "C:\Users\dovyd\OneDrive\Stalinis kompiuteris\Uni\Uni\2 semestras\objektinis programavimas\pirmas darbas\V2.0\build\googletest\googletest\CMakeFiles\sample7_unittest.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : googletest/googletest/CMakeFiles/sample7_unittest.dir/depend

