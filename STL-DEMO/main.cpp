#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//int main() {
//    vector<int> A = { 11, 2, 3, 14};
//
//    std::cout << A[1] << std::endl; // print 2nd element
//
//    std::sort(A.begin(), A.end()); // sort
//
//    bool present = binary_search(A.begin(),A.end(), 3); // check if 3 is there
//
//    present = binary_search(A.begin(), A.end(), 4); // false
//
//    A.push_back(100);
//
//    present = binary_search(A.begin(), A.end(), 100); // true
//
//    A.push_back(100);
//    A.push_back(100);
//    A.push_back(100);
//    A.push_back(100);
//
//    A.push_back(123);
//
//    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
//    return 0;
//}

void mapDemo()
{
    std::map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[1000000232] = 1;

    std::map<char, int> cnt;
    string x = "rachit jain";

    for (char c : x) {
        cnt[c]++;
    }

    std::cout << cnt['a'] << " " << cnt['z'] << std::endl;
}

void powerOfStl()
{

}