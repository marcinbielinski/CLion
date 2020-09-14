#include <iostream>

void fizzBuzz(int& range)
{
    auto myRange = range;

    for ( int i = 1; i <= myRange; ++i) {
        if (i % 15 == 0)
            std::cout << i << " FizzBuzz" << std::endl;
        else if (i % 3 == 0)
            std::cout << i << " Fizz" << std::endl;
        else if (i % 5 == 0)
            std::cout << i << " Buzz" << std::endl;
        else
            std::cout << i << std::endl;
    }
}

int main() {
    int a = 100;
    fizzBuzz(a);
}
