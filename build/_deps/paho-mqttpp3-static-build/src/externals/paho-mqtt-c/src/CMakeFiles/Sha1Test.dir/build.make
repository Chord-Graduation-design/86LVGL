# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /root/lv_examples/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/lv_examples/src/build

# Include any dependencies generated for this target.
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/depend.make

# Include the progress variables for this target.
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/flags.make

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.o: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/flags.make
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.o: _deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/SHA1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lv_examples/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.o"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sha1Test.dir/SHA1.c.o   -c /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/SHA1.c

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sha1Test.dir/SHA1.c.i"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/SHA1.c > CMakeFiles/Sha1Test.dir/SHA1.c.i

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sha1Test.dir/SHA1.c.s"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/SHA1.c -o CMakeFiles/Sha1Test.dir/SHA1.c.s

# Object files for target Sha1Test
Sha1Test_OBJECTS = \
"CMakeFiles/Sha1Test.dir/SHA1.c.o"

# External object files for target Sha1Test
Sha1Test_EXTERNAL_OBJECTS =

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/Sha1Test: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/SHA1.c.o
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/Sha1Test: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/build.make
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/Sha1Test: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lv_examples/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Sha1Test"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sha1Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/build: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/Sha1Test

.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/build

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/clean:
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src && $(CMAKE_COMMAND) -P CMakeFiles/Sha1Test.dir/cmake_clean.cmake
.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/clean

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/depend:
	cd /root/lv_examples/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lv_examples/src /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src /root/lv_examples/src/build /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/CMakeFiles/Sha1Test.dir/depend
