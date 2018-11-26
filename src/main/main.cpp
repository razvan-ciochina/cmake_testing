#include <iostream>
#include <main.hpp>


int main(int argc, char **argv)
{
    MainClass app;
    BaseDep random_gen(1, 10);
    std::cout << "Generated between 1 and 10: " << random_gen.random_number() << std::endl;
    Lib2 saved_random_number;
    saved_random_number.print_number();
    return 0;
}

MainClass::MainClass()
{
    std::cout << "The cmake_test application has started." << std::endl;
}

MainClass::~MainClass()
{
    std::cout << "The cmake_test application has completed." << std::endl;
}
