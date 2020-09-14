//
// Created by marcin on 30.08.2020.
//

#include <string>
#include "findLong.h"

int Parent2::find_long(std::string &str) {
    std::string temp;
    std::string longest;
    int len = str.size();

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ')
            temp += str[i];
        else {
            if (temp.size() > longest.size())
                longest = temp;
            temp = "";
        }
    }
    return longest.size();
}