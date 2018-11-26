#include <random>
#include <base_dep.hpp>

BaseDep::BaseDep(int start, int end)
: _start(start), _end(end)
{
}

int BaseDep::random_number()
{
    std::random_device rand_dev;
    std::mt19937_64 mersenne_twister(rand_dev());
    std::uniform_int_distribution<int> unif_dist(_start, _end);
    return unif_dist(mersenne_twister);
}
