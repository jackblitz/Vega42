cmake_minimum_required(VERSION 3.30)
project(Vega42)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(WIN32)
    add_definitions(-DPLATFORM_WINDOWS)
elseif(APPLE)
    add_definitions(-DPLATFORM_MAC)
elseif(UNIX AND NOT ANDROID)
    add_definitions(-DPLATFORM_LINUX)
elseif(ANDROID)
    add_definitions(-DPLATFORM_ANDROID)
endif()

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/$<LOWER_CASE:$<CONFIG>>/)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/$<CONFIG>/)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/$<CONFIG>/)

# Build projects
add_subdirectory(polaris)

if(ANDROID)
    # When building for Android, create the Vega42 shared library.
    add_library(Vega42 SHARED
            app/main.cpp
            app/VegaApplication.cpp
    )
    target_compile_definitions(Vega42 PRIVATE PLATFORM_ANDROID)
    target_link_libraries(Vega42 PRIVATE PolarisEngine)
else()
    # When building for a host platform (Windows, macOS, Linux),
    # create the Vega42 executable directly.
    add_executable(Vega42 app/main.cpp app/VegaApplication.cpp)

    if(UNIX)
        # Set the RPATH to the executable's directory
        set_target_properties(Vega42 PROPERTIES
            INSTALL_RPATH "$ORIGIN"
            BUILD_WITH_INSTALL_RPATH TRUE
        )
    endif()

    # Link the Vega42 executable against the PolarisEngine library.
    target_link_libraries(Vega42 PRIVATE PolarisEngine)
    target_include_directories(Vega42 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
endif()

