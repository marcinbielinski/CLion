#include <iostream>
#include <stdexcept>
#include <vector>

class Test {
public:
    Test() { std::cout << "Test constructor.\n"; }
    ~Test() { std::cout << "Test destructor.\n"; }
};


int main() {
    std::vector<int> values{1, 2, 3, 4, 5};

    try {
        Test test;
        values.at(20);
    }
    catch (const std::out_of_range& exception) {
        std::cout << "Exception caught! what(): " << exception.what() << std::endl;
    }
    return 0;
}
