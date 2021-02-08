#include <iostream>
#include "funcs.h"

int main()
{
    std::cout << "Print interval from [-5, 10)" << std::endl;
    print_interval(-5, 10);
    std::cout << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << "Print interval from [-45, -10)" << std::endl;
    print_interval(-45, -10);
    std::cout << std::endl;
    std::cout << "-------" << std::endl;
    std::cout << "Print interval from [4, 5)" << std::endl;
    print_interval(4, 5);
    return 0;
}