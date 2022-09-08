cmake_minimum_required(VERSION 3.14)    # or the version you have installed

# The test program
add_executable(my_benchmark
    my_benchmark.cpp
)
# Linking to the test program the GTest libraries and our Example lib.
target_link_libraries(my_benchmark 
    benchmark::benchmark_main
    Example
)