cmake_minimum_required(VERSION 3.14...3.16)

project(temple VERSION 0.1
        DESCRIPTION "Temple" 
        LANGUAGES CXX)

include(packages.cmake)
find_program(CCACHE_PROGRAM ccache)

if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
    set(CMAKE_CUDA_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

add_executable(temple "")
add_subdirectory(${temple_SOURCE_DIR}/src)
add_subdirectory(${temple_SOURCE_DIR}/include)

target_include_directories(temple PRIVATE ${LIBRARY_INCLUDES})
target_compile_features(temple PUBLIC cxx_std_20)
set_target_properties(temple PROPERTIES CXX_EXTENSIONS OFF)