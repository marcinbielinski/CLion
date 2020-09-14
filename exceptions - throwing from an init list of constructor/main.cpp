#include <iostream>
#include <stdexcept>
#include <string>

struct Time {
    Time(const std::string& hours_, const std::string& minutes_)
    try:
            hours{static_cast<unsigned int>(std::stoul(hours_))},
            minutes{static_cast<unsigned int>(std::stoul(minutes_))}
    {
        if (hours >= 24) {
            throw std::invalid_argument{"Hours must be in range [0; 24)."};
        }
        if (minutes >= 60) {
            throw std::invalid_argument{"Minutes must be in range [0; 60)."};
        }
    }
    catch (const std::exception& exception) {
        std::cout << "Exception caught at constructor! what(): " << exception.what() << "\n";
        throw;
    }

    unsigned int hours;
    unsigned int minutes;
};

int main() {
    try {
        Time time{"INVALID", "18"};
    } catch (const std::exception& exception) {
        std::cout << "Exception caught at main! what(): " << exception.what() << "\n";
    }
}