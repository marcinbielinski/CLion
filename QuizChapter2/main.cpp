
#include "io.h"
#include <iostream>

int main() {

    std::cout << "Enter first integer: ";
    int a{ readNumber() };

    std::cout << "Enter second integer: ";
    int b{ readNumber() };

    writeAnswer(a + b);

    return 0;
}
