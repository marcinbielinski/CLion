#include <iostream>

int removeFirstLast(std::string &str) {
    str.erase(0,1);
    str.pop_back();
}

int main() {

    std::string x ("Cool String");

    removeFirstLast(x);

    std::cout << x;
    return 0;
}
