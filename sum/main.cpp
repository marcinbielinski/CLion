#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
int main()
{

    int input1{};
    std::cin >> input1;

    int input2{};
    std::cin >> input2;

    std::cout << sum(input1, input2);
    return 0;
}