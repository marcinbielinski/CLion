#include <iostream>

class rectangle{
public:
    int length, width;

    // Default constructor
    rectangle(){
        length = 0;
        width = 0;
        std::cout << "Default constructor is called!" << std::endl;
    }

    // Parametrised constructor
    rectangle(int x, int y){
        length = x;
        width = y;
        std::cout << "Parametrised constructor is called!" << std::endl;
    }
    // Copy constructor.. (Passing object reference to constructor)
    rectangle(rectangle &x){
        length = x.length;
        width = x.width;
        std::cout << "Copy constructor is called!" << std::endl;
    }

};

int main(){
    // Creating object with default constructor
    rectangle r1;

    // Creating an object with parametrised constructor
    rectangle r2(5, 6);

    // Creating an object with copy constructor (Passing object r2)
    rectangle r3(r2);
    rectangle r4 = r2;
}