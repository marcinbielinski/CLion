#include <iostream>

//int main() {
//
//    int x { 5 };
//    int y = ++x; // x is being incremented to 6, x is evaluated to the value 6, and 6 is assigned to y
//
//    std::cout << x << ' ' << y; // both x and y are 6
//    return 0;       6   6
//}

//The postfix increment/decrement operators are trickier. First, a copy of the operand is made.
//Then the operand (not the copy) is incremented or decremented. Finally, the copy (not the original) is evaluated.
//For example:

//int main() {
//    int x{5};
//    int y = x++; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y
//
//    std::cout << x << ' ' << y;
//
//    return 0; //  6   5
//}

int main() {
    int x{ 5 };
    int y{ 5 };

    std::cout << x << " " << y << std::endl;        // 5 5
    std::cout << ++x << " " << --y << std::endl;    // 6 4
    std::cout << x << " " << y << std::endl;        // 6 4
    std::cout << x++ << " " << y-- << std::endl;    // 6 4
    std::cout << x << " " << y << std::endl;        // 7 3

    return 0;
}

//Strongly favor the prefix version of the increment and decrement operators,
//as they are generally more performant, and you’re less likely to run into strange issues with them.