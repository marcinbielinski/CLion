#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <vector>

int my_at(const std::vector<int>& values, std::size_t position) {
    if (position % 2 != 0) {
        throw std::invalid_argument{"Position has to be even!"};
    }

    if (position >= values.size()) {
        throw std::out_of_range{"Position exceeded collection size!"};
    }

    return values.at(position);
}

int main() {
    std::vector<int> values{1, 2, 3, 4, 5};

    try {
        my_at(values, 3);
    }

    catch (const std::out_of_range& exception) {
        std::cout << "std::out_of_range\n";
    }
    catch (const std::invalid_argument& exception) {
        std::cout << "std::invalid_argument\n";
    }
    catch (const std::exception& exception) {
        std::cout << "std::exception\n";
    }
    catch (...) {
        std::cout << "...\n";

    }
}
