//# include <iostream>
//
//int returnFive()
//{
//    return 5;
//}
//
//int main()
//{
//    std::cout << returnFive() << '\n';
//    std::cout << returnFive() + 2 << '\n';
//
//    returnFive(); // main doesn't do anything with this function call, hence it's return 5 is ignored
//
//    return 0;
//}

//#include <iostream>
//
//int getValueFromUser()
//{
//    std::cout << "Enter an integer: ";
//    int input{};
//    std::cin >> input;
//
//    return input;
//}
//
//int main()
//{
//    int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()
//
//    std::cout << num << " doubled is: " << num * 2 << '\n';
//
//    return 0;
//}

//#include <iostream>
//
//void returnNothing()
//{
//    std::cout << "Hi" << '\n';
//    // This function does not return a value so no return statement is needed
//}
//
//int main()
//{
//    returnNothing(); // function call with no return value!
//
////    std::cout << returnNothing(); // this line will not compile!!!!!
//
//    return 0;
//}

//#include <iostream>
//
//int getValueFromUser()
//{
//    std::cout << "Enter an integer: ";
//    int input{};
//    std::cin >> input;
//
//    return input;
//}
//
//int main()
//{
//    int x{ getValueFromUser() };
//    int y{ getValueFromUser() };
//
//    std::cout << x << " + " << y << " = " << x + y << '\n';
//
//    return 0;
//}
//
//#include <iostream>
//
//int getValueFromUser()
//{
//    std::cout << "Enter an integer: ";
//    int input{};
//    std::cin >> input;
//
//    return input;
//}
//
//void printDouble(int value)
//{
//    std::cout << value << " double is: " << value * 2 << '\n';
//}
//
//int main()
//{
////    int num{ getValueFromUser() };
////
////    printDouble(num);
//
//    printDouble(getValueFromUser());
//
//    return 0;
//}

//#include <iostream>
//
//int add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    std::cout << add(4,5) << '\n';
//
//    return 0;
//}

//#include <iostream>
//
//int add(int x, int y)
//{
//    return x + y;
//}
//
//int multiply(int z, int w)
//{
//    return z * w;
//}
//
//int main()
//{
//    std::cout << add(4, 5) << '\n';
//    std::cout << add(1+2, 3*4) << '\n';
//
//    int a{ 5 };
//    std::cout << add(a, a) << '\n';
//
//    std::cout << add(1, multiply(2, 3)) << '\n';
//    std::cout << add(1, add(2, 3)) << '\n';
//
//    return 0;
//}
#include <iostream>

int doubleNumber(int num) {
    return num * 2;
}

int main() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << x << " doubled is: " << doubleNumber(x);

    return 0;
}