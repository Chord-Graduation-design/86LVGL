cmake_minimum_required(VERSION 3.16)
# 判断 TARGETCONFIG_PREFIX 是否为空
if(NOT TARGETCONFIG_PREFIX)
    set(TARGETCONFIG_PREFIX /root/lv_examples/d1s-nezha/staging_dir/target)
endif()

project(lv_examples)

set(CMAKE_CXX_STANDARD 20)
set(PAHO_BUILD_SHARED OFF)
set(PAHO_BUILD_STATIC ON)
set(PAHO_ENABLE_TESTING OFF)
set(PAHO_BUILD_TESTS OFF)
set(PAHO_WITH_SSL OFF)
set(PAHO_WITH_MQTT_C ON)
add_compile_definitions(LV_USE_DEMO_WIDGETS)
add_compile_definitions(LV_USE_DEMO_BENCHMARK)
add_compile_definitions(LV_USE_DEMO_STRESS)
add_compile_definitions(LV_USE_DEMO_KEYPAD_AND_ENCODER)
add_compile_definitions(LV_USE_DEMO_MUSIC)
include(FetchContent)
# Fetch from fork until PR request is accepted
FetchContent_Declare(
    paho-mqttpp3-static
    GIT_REPOSITORY https://github.com/HpLightcorner/paho.mqtt.cpp.git
    GIT_TAG mqtt-c-submodule
)

FetchContent_MakeAvailable(paho-mqttpp3-static)



include_directories(${TARGETCONFIG_PREFIX}/usr/include)
# 添加lib目录 并且把该目录文件链接到可执行文件
link_directories(${TARGETCONFIG_PREFIX}/usr/lib)
# set(CMAKE_CXX_FLAGS "-Wall -Wshadow -Wundef -Wmissing-prototypes -Wno-discarded-qualifiers -Wall -Wextra -Wno-unused-function -Wno-error=strict-prototypes -Wpointer-arith -fno-strict-aliasing -Wno-error=cpp -Wuninitialized -Wmaybe-uninitialized -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wno-cast-qual -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wformat-security -Wno-ignored-qualifiers -Wno-error=pedantic -Wno-sign-compare -Wno-error=missing-prototypes -Wdouble-promotion -Wclobbered -Wdeprecated -Wempty-body -Wtype-limits -Wshift-negative-value -Wstack-usage=2048 -Wno-unused-value -Wno-unused-parameter -Wno-missing-field-initializers -Wuninitialized -Wmaybe-uninitialized -Wall -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -Wtype-limits -Wsizeof-pointer-memaccess -Wno-format-nonliteral -Wpointer-arith -Wno-cast-qual -Wmissing-prototypes -Wunreachable-code -Wno-switch-default -Wreturn-type -Wmultichar -Wno-discarded-qualifiers -Wformat-security -Wno-ignored-qualifiers -Wno-sign-compare")
include_directories(.)
add_subdirectory(lvgl)
add_subdirectory(lv_drivers)
# add_subdirectory(libs/protobuf)

# add_subdirectory(lib/paho.mqtt.cpp)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
# find_package(PahoMqttCpp REQUIRED)
# include_directories(${PAHOMQTT_INCLUDE_DIRS})

file(GLOB_RECURSE  CONTROL_DIR ./control/*.c ./control/*.cpp)
# aux_source_directory(./control CONTROL_DIR)

add_executable(${PROJECT_NAME} main.cpp ${CONTROL_DIR})
target_include_directories(
    ${PROJECT_NAME}
    PUBLIC include
    ${paho-mqttpp3-static_SOURCE_DIR}/src
)

target_link_libraries(${PROJECT_NAME} PRIVATE  lvgl lvgl::examples lvgl::demos lvgl::drivers m uapi pthread paho-mqttpp3-static )
# target_link_libraries(${PROJECT_NAME} PRIVATE lvgl lvgl::examples lvgl::demos lvgl::drivers m uapi pthread PahoMqttCpp::paho-mqttpp3-static)