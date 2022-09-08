#include <benchmark/benchmark.h>

// Example from https://github.com/google/benchmark
//
// static void BM_StringCreation(benchmark::State& state) {
//   for (auto _ : state)
//     std::string empty_string;
// }
// // Register the function as a benchmark
// BENCHMARK(BM_StringCreation);

// // Define another benchmark
// static void BM_StringCopy(benchmark::State& state) {
//   std::string x = "hello";
//   for (auto _ : state)
//     std::string copy(x);
// }
// BENCHMARK(BM_StringCopy);

#include "Example.h"

static void BM_int_sum(benchmark::State& state)
{
    int a = 2, b = 33;

    for (auto _ : state)
        Example::int_sum(a, b);
}
BENCHMARK(BM_int_sum);

static void BM_double_sum(benchmark::State& state)
{
    double a = 32.5423, b = -17.25;

    for (auto _ : state)
        Example::double_sum(a, b);
}
BENCHMARK(BM_double_sum);