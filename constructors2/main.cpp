#include <iostream>

class A
{
    int x;
public:
    void setX(int i) { x = i;}
    void print() const { std::cout << x;}
};

class B: virtual public A
{
public:
    B() : A() {setX(10);}
};

class C: virtual public A
{
public:
    C() : A() {setX(20202020);}
};

class D: public B, public C{};

int main() {
    D d;
    d.print();
    return 0;
}
