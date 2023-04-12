# Install script for directory: /root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mqtt" TYPE FILE FILES
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/async_client.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/buffer_ref.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/buffer_view.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/callback.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/client.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/connect_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/create_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/delivery_token.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/disconnect_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/exception.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/iaction_listener.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/iasync_client.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/iclient_persistence.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/message.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/properties.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/response_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/server_response.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/ssl_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/string_collection.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/subscribe_options.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/thread_queue.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/token.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/topic.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/types.h"
    "/root/lv_examples/src/build/_deps/paho-mqttpp3-static-src/src/mqtt/will_options.h"
    )
endif()

