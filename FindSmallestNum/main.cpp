#include <iostream>
#include <vector>

int findSmallest(std::vector <int> list)
{
    int smallest{list[0]};
    for (int i=0 ; i < size(list); i++)
        if (list[i] < smallest)
            smallest = list[i];
    return smallest;
}

int main() {

    std::vector<int> array{1, 2, 10, -10, -100};
    std::cout << findSmallest(array);

    return 0;
}
