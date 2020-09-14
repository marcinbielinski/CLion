#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> myVector = {1,8,3,12,8};

    sort(myVector.begin(), myVector.end(), greater<>());
//    std::sort(myVector.begin(), myVector.end(), std::less<int>());

    for (auto a : myVector) {
        cout << a << " ";
    }
    return 0;
}
