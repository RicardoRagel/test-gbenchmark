cmake_minimum_required(VERSION 3.14)

# The Benchmark program
add_executable(my_benchmark
    my_benchmark.cpp
)
# Linking to the benchmark program the GBenchmark libraries and our Example lib.
# Notice that we are using benchmark_main, so it is not necessary to call later
# to main in the source code.
target_link_libraries(my_benchmark 
    benchmark::benchmark_main
    Example
)