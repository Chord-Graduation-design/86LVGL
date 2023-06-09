# Install script for directory: /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/paho-mqtt-cpp/samples" TYPE FILE FILES
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTAsync_publish.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTAsync_publish_time.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTAsync_subscribe.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTClient_publish.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTClient_publish_async.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/MQTTClient_subscribe.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/paho_c_pub.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/paho_c_sub.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/paho_cs_pub.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/paho_cs_sub.c"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/src/samples/pubsub_opts.c"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/paho-mqtt-cpp" TYPE FILE FILES
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/CONTRIBUTING.md"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/epl-v20"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/edl-v10"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/README.md"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/externals/paho-mqtt-c/notice.html"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/lv_examples/src/build/_deps/paho-mqttpp3-static-build/src/externals/paho-mqtt-c/src/cmake_install.cmake")

endif()

