cmake_minimum_required(VERSION 3.22.1)
project(mundo_core)

set(MUNDO_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/api/mundo_api.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/mundo_core.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/integration/keyauth_bridge.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/integration/frida_integration.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/security/security_manager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/nonroot/nonroot_manager.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/utils/mundo_utils.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/jni/mundo_jni_bridge.cpp
)

add_library(mundo SHARED ${MUNDO_SOURCES})

target_include_directories(mundo
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/../app/src/main/cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/../Plugin/src/main/cpp
)

target_compile_features(mundo PRIVATE cxx_std_17)

target_compile_definitions(mundo PRIVATE MUNDO_LIBRARY_BUILD)

target_compile_options(mundo PRIVATE
        -fvisibility=hidden
        -ffunction-sections
        -fdata-sections
        -Wall
)

target_link_options(mundo PRIVATE -Wl,--gc-sections)

# Set optimization level based on build type
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_options(mundo PRIVATE -O0 -g)
else()
    target_compile_options(mundo PRIVATE -O2)
endif()

set_target_properties(mundo PROPERTIES
        VERSION 1.0.0
        SOVERSION 1
)

target_link_libraries(mundo
        log
        android
        dl
)
