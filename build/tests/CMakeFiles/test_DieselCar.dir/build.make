# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = C:/msys64/mingw64/bin/cmake.exe

# The command to remove a file.
RM = C:/msys64/mingw64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_DieselCar.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_DieselCar.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_DieselCar.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_DieselCar.dir/flags.make

tests/CMakeFiles/test_DieselCar.dir/codegen:
.PHONY : tests/CMakeFiles/test_DieselCar.dir/codegen

tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj: tests/CMakeFiles/test_DieselCar.dir/flags.make
tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj: tests/CMakeFiles/test_DieselCar.dir/includes_CXX.rsp
tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj: C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/tests/test_DieselCar.cpp
tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj: tests/CMakeFiles/test_DieselCar.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj"
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj -MF CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj.d -o CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj -c C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/tests/test_DieselCar.cpp

tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.i"
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/tests/test_DieselCar.cpp > CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.i

tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.s"
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/tests/test_DieselCar.cpp -o CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.s

# Object files for target test_DieselCar
test_DieselCar_OBJECTS = \
"CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj"

# External object files for target test_DieselCar
test_DieselCar_EXTERNAL_OBJECTS =

tests/test_DieselCar.exe: tests/CMakeFiles/test_DieselCar.dir/test_DieselCar.cpp.obj
tests/test_DieselCar.exe: tests/CMakeFiles/test_DieselCar.dir/build.make
tests/test_DieselCar.exe: lib/libgtest_main.a
tests/test_DieselCar.exe: src/libAutomobileMaintenanceLibrary.a
tests/test_DieselCar.exe: lib/libgtest.a
tests/test_DieselCar.exe: tests/CMakeFiles/test_DieselCar.dir/linkLibs.rsp
tests/test_DieselCar.exe: tests/CMakeFiles/test_DieselCar.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_DieselCar.exe"
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/cmake.exe -E rm -f CMakeFiles/test_DieselCar.dir/objects.a
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/ar.exe qc CMakeFiles/test_DieselCar.dir/objects.a @CMakeFiles/test_DieselCar.dir/objects1.rsp
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/test_DieselCar.dir/objects.a -Wl,--no-whole-archive -o test_DieselCar.exe -Wl,--out-implib,libtest_DieselCar.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/test_DieselCar.dir/linkLibs.rsp
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && C:/msys64/mingw64/bin/cmake.exe -D TEST_TARGET=test_DieselCar -D TEST_EXECUTABLE=C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests/test_DieselCar.exe -D TEST_EXECUTOR= -D TEST_WORKING_DIR=C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=test_DieselCar_TESTS -D CTEST_FILE=C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests/test_DieselCar[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_DISCOVERY_EXTRA_ARGS= -D TEST_XML_OUTPUT_DIR= -P C:/msys64/mingw64/share/cmake/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/test_DieselCar.dir/build: tests/test_DieselCar.exe
.PHONY : tests/CMakeFiles/test_DieselCar.dir/build

tests/CMakeFiles/test_DieselCar.dir/clean:
	cd C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_DieselCar.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_DieselCar.dir/clean

tests/CMakeFiles/test_DieselCar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/tests C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests C:/Users/a1mma/OneDrive/Desktop/KPIT/AutomobileMaintenanceLibrary/build/tests/CMakeFiles/test_DieselCar.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/test_DieselCar.dir/depend

