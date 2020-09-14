#include <iostream>
#include <vector>
#include <memory>
#include <string>

//struct A {
//    virtual void foo() { std::cout << "B::foo \n"; }
//
//    virtual ~A() = default;
//
//};
//
//struct B : A {
//    void foo() { std::cout << "A::foo \n"; }
//};

struct A
{
    int value = 10;
    virtual ~A() = default;
    virtual void foo() const
    {
        std::cout << value;
    }
};

struct B : A
{
    B() = default;

    void foo() const override
    {
        std::cout << value + 30;
    }
};


int main() {
//    B b_object;
//    A *some_object = &b_object;
//    some_object->foo();
//    return 0;

//    A a;
//    B b;
//    std::vector<A> objects = {a, b};
//    for ( const auto& object : objects )
//    {
//        object.foo();
//    }

    A a;
    B b;
    std::vector<A*> objects = {&a, &b};
    for (const auto & object : objects)
    {
        object->foo();
    }
}
