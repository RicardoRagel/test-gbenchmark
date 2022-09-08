cmake_minimum_required(VERSION 3.14)    # or the version you have installed
project(test-gbenchmark)

# Google Benchmark doesn't specify, setting C++14
set(CMAKE_CXX_STANDARD 14)

# Get GoogleBenchmark from Github using the FetchContent CMake module
include(FetchContent)
FetchContent_Declare(
  benchmark
  GIT_REPOSITORY https://github.com/google/benchmark.git
  GIT_TAG v1.7.0
)

# Download Google Benchmark and its dependencies
set (BENCHMARK_DOWNLOAD_DEPENDENCIES ON CACHE INTERNAL "Download Benchmark dependencies")
FetchContent_MakeAvailable(benchmark)

# Compile our Example Library
include_directories(
    include
)
add_library(Example STATIC 
    src/Example.cpp
)

# # Prepare things to test it and run tests including our testing folder "test"
add_subdirectory(test)