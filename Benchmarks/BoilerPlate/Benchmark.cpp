#include <benchmark/benchmark.h>
#include <BoilerPlate/Boilerplate.h>

static void Foo(benchmark::State& state)
{
    for (auto _ : state)
    {
        BoilerPlate::Foo(1, 2);
    }
}

static void Bar(benchmark::State& state)
{
    for (auto _ : state)
    {
        BoilerPlate::Bar(1, 2);
    }
}

BENCHMARK(Foo);
BENCHMARK(Bar);