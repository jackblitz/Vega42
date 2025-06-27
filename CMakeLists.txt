cmake_minimum_required(VERSION 3.30)

add_library(VegaAppObjects OBJECT
    VegaApplication.cpp
)

target_include_directories(VegaAppObjects PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../polaris/source/runtime/core) 