#include <iostream>

class A
{
public:
    virtual void show()
    {
        std::cout << "Hello base class \n";
    }
};

class B: public A{
public:
    void show() override
    {
        std::cout << "Hello derived class";
    }
};

int main()
{
    A aobj;
    B bobj;
    A *bptr;

    // assign reference to a pointer
    bptr = &aobj;
    bptr->show();
    bptr = &bobj;
    bptr->show();
    return 0;
}