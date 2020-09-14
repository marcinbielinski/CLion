//
// Created by marcin on 16.08.2020.
//
#include <iostream>

int readNumber()
{
    int input{};
    std::cin >> input;
    return input;
}

void writeAnswer(int ans)
{
    std::cout << "Your answer is: " << ans;
}