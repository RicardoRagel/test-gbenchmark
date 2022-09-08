# Test Google Benchmark

## Overview

Simple CMake project as example about how to add [Google Benchmark](https://github.com/google/benchmark) to our project and generate some benchmarks of our code.

The main CMake file will download and compile Google Benchmark together with its dependencies (Google Test). Later, it will compile or code (in the `src` folder, just a library with 2 simple functions) and our benchmark tests (in the `test` folder) to check the CPU time consuming of each funtion.

## Usage

Compile the project as usual using CMake:

```bash
mkdir build
cd build
cmake ..
make
```

Then, run the test as:

```bash
./test/my_benchmark
```