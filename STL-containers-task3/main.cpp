#include <iostream>
#include <map>
#include <numeric>
#include <algorithm>

typedef std::map<std::string, double> Map;
typedef std::pair<std::string, double> Pair;

double sumMethod (const Map& MAP, const std::string& input)
{
    auto Iter = MAP.lower_bound(input);

        std::accumulate(std::begin(MAP), std::end(MAP), 0.0,
                            []( const double previous, const Pair& mapElement )
                            { return previous + mapElement.second; });
}

int main() {
    const std::map<std::string, double> myMap = { {"Tommy â€“", 10.99},
                                                  {"Josh â€“",  11.77},
                                                  {"John â€“",  25.00},
                                                  {"Jane â€“",  102.00} };
    std::string input{};
    std::cout << "Enter first letter of names you want a sum of savings for printed: ";
    std::cin >> input;
    std::cout << sumMethod(myMap, input);

    return 0;
}


//double sumMethod (const std::map<std::string, double>& MAP, std::string& input)
//{
//    auto itr = MAP.find(input);
//    if (itr != MAP.end()){
//        std::accumulate(std::begin(MAP), std::end(MAP), 0.0,
//                        []( const double previous, const Pair& mapElement )
//                        { return previous + mapElement.second; });}
//}



//const double sum = std::accumulate(std::begin(myMap), std::end(myMap), 0.0,
//                                   [](const double previous, const Pair& element)
//                                   { return previous + element.second; });