//
// Created by marcin on 16.08.2020.
//

#include "getTowerHeight.h"
#include <iostream>

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}
