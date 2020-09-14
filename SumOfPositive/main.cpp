#include <algorithm>
#include <vector>
#include <iostream>

int positive_sum(const std::vector<int> &arr) {
    int sum{0};
    for (int i : arr)
        if (i >= 0)
            sum += i;
    return sum;
}

int main() {
    auto a = {1, -2};
    std::cout << positive_sum(a);

    return 0;
}
//#include <iostream>
//
//int sum(int arr[], int n)
//{
//    int sum{0};
//
//    for (int item{0}; (item < n); item++)
//        if (arr[item] >= 0)
//            sum += arr[item];
//    return sum;
//}
//
//int main()
//{
//    int arr[] = {-10, 12, 3, 4, 15, -1, -20};
//    int n{ sizeof(arr) / sizeof(arr[0]) };
//    std::cout << "Sum of given array is: " << sum(arr, n);
//    return 0;
//}
//#include <vector>
//
//int positive_sum (const std::vector<int> arr){
//    int sum_of_elems = 0;
//
//    for (auto& n: arr)
//        sum_of_elems += n;
//
//    return -1;
//}
//
//int main()
//{
//    int vector[] = {-10, 12, 3, 4, 15, -1, -20};
//    positive_sum(
//            )
//}


//    for (int item{0}; (size(arr)/sizeof(arr[0])); item++)
//    {
//        if (arr[item] >= 0)


//#include <iostream>
//#include <numeric>
//#include <vector>
//
//
//int positive_sum(const std::vector<int> &arr)
//{
//    std::cout << "Sum of this vector's positive elements is: " << accumulate(arr.begin(), arr.end(), 0);
//
//    return -1;
//}
//
//int main()
//{
//    auto array = {12, 3, 4, 15, -1, -20};
//    positive_sum(array);
//
//    return 0;
//}

