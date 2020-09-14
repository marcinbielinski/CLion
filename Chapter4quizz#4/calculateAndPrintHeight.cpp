//
// Created by marcin on 16.08.2020.
//
#include "constants.h"
#include "calculateAndPrintHeight.h"
#include <iostream>

double calculateHeight(double towerHeight, int seconds)
{
    double distanceFallen { (gravity * (seconds * seconds)) / 2.0};
    double currentHeight { towerHeight - distanceFallen };

    return currentHeight;
}

void printHeight(double height, int seconds)
{
    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters." << std::endl;
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground." << std::endl;
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
    double height {calculateHeight(towerHeight, seconds) };
    printHeight(height, seconds);
}