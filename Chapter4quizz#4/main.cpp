#include "calculateAndPrintHeight.h"
#include "getTowerHeight.h"

int main() {
    const double initialHeight { getTowerHeight() };

    int seconds{ 0 };
    double height{};

    do
    {
        height = calculateHeight(initialHeight, seconds);
        printHeight(height, seconds);
        ++seconds;
    } while (height > 0.0);

    return 0;
}
