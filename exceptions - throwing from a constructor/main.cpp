#include <iostream>
#include <stdexcept>

struct Time {
    Time ( unsigned int hours_, unsigned int minutes_ ) :
            hours{ hours_ },
            minutes{ minutes_ }

    {if (hours_ > 23) {
        throw std::invalid_argument{"Pass hours: 24 hour format"};
    }
    if (minutes_ > 59) {
        throw std::invalid_argument{"Pass minutes: minutes can go up to 60"};
    }}

    unsigned int hours;
    unsigned int minutes;
};

int main() {
    try
    {
        Time time{24, 59};
        std::cout << "The time is " << time.hours << ":" << time.minutes << std::endl;
    }
    catch (const std::invalid_argument& exc) {
        std::cout << "Niepoprawnie wprowadziłeś godzinę lub/i minutę!";
    }
    catch (...) {
        std::cout << "...\n";
    }
    return 0;
}