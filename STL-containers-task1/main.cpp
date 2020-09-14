#include <iostream>
#include <vector>

std::vector<int> myMethod (int n)
{
    std::vector<int> myInts;
    myInts.reserve(n);
    for (int i = 1; i < n + 1; i++)
        myInts.push_back(i);
    return myInts;
}

int main() {
    int userInput{};
    std::cout << "Enter size of a vector: ";
    std::cin >> userInput;

    auto V { myMethod(userInput) };


    int sum{0};

    for (int i = 0; i < userInput; i++)
        sum += V[i];

    std::cout << sum;
    return 0;
}
