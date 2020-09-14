#include <iostream>
#include <algorithm>
#include <map>

double calcSavings (const std::map<std::string, double>& map, char letter)
{
    double sum = 0;
    for (const auto& pair : map)
    {
        const auto& name = pair.first;
        const auto& savings = pair.second;

        if (tolower(name[0]) == tolower(letter))
            sum += savings;
    }
}

int main() {
    std::map<std::string, double> savings {
            {"Tommy", 10.99},
            {"Josh", 11.77},
            {"John", 25.00},
            {"Jane", 102.00}
    };
    std::cout << calcSavings(savings, 't');
    return 0;
}