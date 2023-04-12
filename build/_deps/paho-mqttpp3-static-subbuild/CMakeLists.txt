# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.16.3)

# We name the project and the target for the ExternalProject_Add() call
# to something that will highlight to the user what we are working on if
# something goes wrong and an error message is produced.

project(paho-mqttpp3-static-populate NONE)

include(ExternalProject)
ExternalProject_Add(paho-mqttpp3-static-populate
                     "UPDATE_DISCONNECTED" "False" "GIT_REPOSITORY" "https://github.com/HpLightcorner/paho.mqtt.cpp.git" "GIT_TAG" "mqtt-c-submodule"
                    SOURCE_DIR          "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src"
                    BINARY_DIR          "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
                    USES_TERMINAL_DOWNLOAD  YES
                    USES_TERMINAL_UPDATE    YES
)
