#include "contstants.h"
#include <iostream>

int main()
{
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    double circumference { 2.0 * radius * constants::pi };
    std::cout << "The circumference is: " << circumference << std::endl;

    return 0;
}