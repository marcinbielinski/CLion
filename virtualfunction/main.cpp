#include <iostream>

class A
{
public:
    virtual void myFunc()
    {
        std::cout << "A class function is called!" << std::endl;
    }
};

class B: public A{
public:
    void myFunc() override
    {
        std::cout << "B class function is called!" << std::endl;
    }
};
int main() {
    A* b; // base class pointer
    B d; // derived class object
    b = &d; // assignment
    b->myFunc(); // calling function, late binding
    return 0;
}
