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
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/depend.make

# Include the progress variables for this target.
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/flags.make

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.o: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/flags.make
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.o: _deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/test/thread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lv_examples/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.o"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/thread.dir/thread.c.o   -c /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/test/thread.c

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/thread.dir/thread.c.i"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/test/thread.c > CMakeFiles/thread.dir/thread.c.i

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/thread.dir/thread.c.s"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/test/thread.c -o CMakeFiles/thread.dir/thread.c.s

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.o: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/flags.make
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.o: _deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/Thread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/lv_examples/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.o"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/thread.dir/__/src/Thread.c.o   -c /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/Thread.c

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/thread.dir/__/src/Thread.c.i"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/Thread.c > CMakeFiles/thread.dir/__/src/Thread.c.i

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/thread.dir/__/src/Thread.c.s"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && /usr/bin/riscv64-linux-gnu-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/Thread.c -o CMakeFiles/thread.dir/__/src/Thread.c.s

# Object files for target thread
thread_OBJECTS = \
"CMakeFiles/thread.dir/thread.c.o" \
"CMakeFiles/thread.dir/__/src/Thread.c.o"

# External object files for target thread
thread_EXTERNAL_OBJECTS =

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/thread: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/thread.c.o
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/thread: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/__/src/Thread.c.o
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/thread: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/build.make
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/thread: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/lv_examples/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable thread"
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/thread.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/build: _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/thread

.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/build

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/clean:
	cd /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test && $(CMAKE_COMMAND) -P CMakeFiles/thread.dir/cmake_clean.cmake
.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/clean

_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/depend:
	cd /root/lv_examples/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/lv_examples/src /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/test /root/lv_examples/src/build /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test /root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/test/CMakeFiles/thread.dir/depend
