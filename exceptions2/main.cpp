#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <vector>

int my_at(const std::vector<int>& values, std::size_t position) {
	try {
		return values.at(position);
	}
	catch (const std::out_of_range& exception) {
		std::cout << "Exception at my_at, rethrowing.\n";
		throw;
	}
}

int main() {
	std::vector<int> values{1, 2, 3, 4, 5};

	try {
		my_at(values, 20);
	}
	catch (const std::out_of_range& exception) {
		std::cout << "Exception caught! what(): " << exception.what() << "\n";
	}
}