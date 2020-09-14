#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

template <typename T, typename U>
void forEach(std::vector<T>& values, std::function<void(U)>& func)
{
    for(const int& value : values)
        func(value);
}

int main() {
    std::vector<int> values = { 1, 5, 4, 2, 3 };
    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; } );
    std::cout << *it << std::endl;

    std::function<void(int)> lambda = [](int value) { std::cout << "Value: " << value << std::endl; };
    forEach(values, lambda);

    return 0;
}

//std::function<void(int)> ifFunc = [](int value){
//    std::cout << "Takie fajne body lambdy z wartością: " << value << std::endl;
//};
//
//int main()
//{
//    [](int value){
//        std::cout << "Takie fajne body lambdy z wartością: " << value << std::endl;
//    }(1);
//
//    int val {100};
//    int i {10};
//
//    [=](){
//        std::cout << "Takie fajne body lambdy z parametrem: " << val << " oraz " << i << std::endl;
//    }();
//
//    [&](){
//        i++;
//        val++;
//        std::cout << "Takie fajne body lambdy z referencją: " << val << " oraz " << i << std::endl;
//    }();
//
//    [val, &i](){
//        //val++; // val jest read only, nie można zmieniać
//        i++;
//        std::cout << "Takie fajne body lambdy z parametrem i referencją: " << val << " oraz " << i << std::endl;
//    }();
//
//    ifFunc(1000);
//
//    return 0;
//}

//void findMe(std::vector<int>& vector, int& val){
//    if ( std::find(vector.begin(), vector.end(), val) != vector.end() )
//        std::cout << "Znalazłem " << val << std::endl;
//    else
//        std::cout << "Nie znalazłem " << val << std::endl;
//}
//
//int main() {
//    std::vector<int> vec {5, 6, 7, 2, 10, 2};
//    int A{3};
//    bool test = std::find(vec.begin(), vec.end(), 2) != vec.end();
//    if (test)
//        std::cout << "Znalazłem" << std::endl;
//
//    findMe(vec, A);
//}