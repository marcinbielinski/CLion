#include <iostream>
#include <string>
#include "findShort.h"

int Parent1::find_short(std::string &str) {
    std::string temp;
    std::string shortest = str;
    int len = str.size();

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ')
            temp += str[i];
        else {
            if (temp.size() < shortest.size())
                shortest = temp;
            temp = "";
        }
    }
    if (!temp.empty()) {
        if (temp.size() < shortest.size())
            shortest = temp;
    }

    return shortest.size();
}

std::string info = "I am a parent!";

Parent1 parentInfo() {
    std::cout << "Info about Parent1: " << info;
}