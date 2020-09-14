#include <iostream>
#include <string>
#include <cstdlib>


static const char alphanum[] =
        "0123456789"
        "!@#$%^&*"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

int stringLength = sizeof(alphanum) - 1;

char genRandom(int& x) {
    auto times;
    x * times = x;
    for(int i=0; i<=times; ++i) {
        return alphanum[rand() % stringLength];
    }
}

int main() {
        genRandom(100);
    return 0;
}