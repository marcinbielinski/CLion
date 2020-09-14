#include <iostream>

double userNumber()
{
    std::cout << "Enter a double value: ";
    double num{};
    std::cin >> num;
    return num;
}

char userMathSym()
{
    std::cout << "Enter one of the following ('+', '-', '*', '/',): ";
    char symbol{};
    std::cin >> symbol;
    return symbol;
}

void calculateAndPrint(double x, char opr, double y)
{

    if (opr == '+')
        std::cout << x << " + " << y << " is " << x + y << std::endl;

    else if (opr == '-')
        std::cout << x << " - " << y << " is " << x - y << std::endl;

    else if (opr == '*')
        std::cout << x << " * " << y << " is " << x * y << std::endl;

    else if (opr == '/')
        std::cout << x << " / " << y << " is " << x / y << std::endl;

}

int main() {

    double a{ userNumber() };
    double b{ userNumber() };
    char oper{ userMathSym() };


    calculateAndPrint(a, oper, b);

    return 0;
}
