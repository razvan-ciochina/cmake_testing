#include <iostream>
#include <lib1.hpp>
#include <lib2.hpp>

void Lib2::print_number()
{
    std::cout << "Generated and saved random number: " << _lib1.get_one_random() << std::endl;
}
