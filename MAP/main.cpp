#include <iostream>
#include <map>
#include <functional>
#include <vector>

int main() {
//    std::map<std::string, int> MAP; // default is ascending order of keys (must be unique)
    std::map<std::string, int, std::greater<>> MAP; // std::less - ascending
    MAP["firstKey"] = 90909090;
    MAP["secondKey"] = 98234819;
    MAP.insert(std::make_pair("thirdKey", 782348818));

    for(auto &ell: MAP) {
        std::cout << ell.first << " " << ell.second << std::endl;
    }
    return 0;
}
