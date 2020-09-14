#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (larger < smaller) {
        std::cout << "Swapping the values..." << std::endl;
        int temp{ larger };
        larger = smaller;
        smaller = temp;
    } else
        std::cout << "Values stay the same..." << std::endl;

    std::cout << "The smaller value is " << smaller << std::endl;
    std::cout << "The larger value is " << larger;
    return 0;
}
