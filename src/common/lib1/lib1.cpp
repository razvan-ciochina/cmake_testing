#include <iostream>
#include <base_dep.hpp>
#include <lib1.hpp>

Lib1::Lib1()
{
    BaseDep bdep(50, 100);
    _random_number = bdep.random_number();
}

int Lib1::get_one_random()
{
    return _random_number;
}


