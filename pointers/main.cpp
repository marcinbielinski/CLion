#include <iostream>

void celebrateBirthday(int* age) {
    (*age)++;
    std::cout << "Yeeey, celebrated " << *age << ", birthday" << std::endl;
}

int main() {
    int myAge{25};
    std::cout << "Before function age is " << myAge << std::endl;
    celebrateBirthday(&myAge);
    std::cout << "After function age is " << myAge << std::endl;
    return 0;
}