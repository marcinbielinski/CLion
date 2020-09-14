//
// Created by marcin on 16.08.2020.
//
#include <iostream>

void doSomething() {
#ifdef PRINT
    std::cout << "Printing!";
#endif
#ifndef PRINT
    std::cout << "Not Printing!";
#endif
}