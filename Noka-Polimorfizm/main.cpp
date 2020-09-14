#include <iostream>
#include <memory>
#include <vector>
//template <typename T> T foo(T, T);
//
//template <class T> T foo(T, T);
//struct A
//{
//
//};
//
//class B : public A{
//    int* secret_number;
//public:
//    B()
//    {
//        secret_number = new int(19);
//    }
//    ~B()
//    {
//        delete secret_number;
//    }
//};
//struct A
//{
//    virtual void foo() { std::cout << "B::foo\n"; }
//    virtual ~A() = default;
//};
//struct B : A
//{
//    void foo() { std::cout << "A::foo\n"; }
//};
//int main() {
//    B b_object;
//    A* some_object = &b_object;
//    some_object->foo();
//    std::unique_ptr<A> object = std::make_unique<B>();
//    auto x = *object;
//    std::cout << x;
//    int add(int lhs, int rhs);
//    double add(double lhs, double rhs);
//
//    int low = 0;
//    int high = 10;
//    double mid = 5.0;
//
//    auto x{ add(mid, mid) };
//    std::cout << x << std::endl;
//
////    auto y{ add(high, mid) };
////    std::cout << y << std::endl;
//
//    auto z{ add(low, high) };
//    std::cout << z << std::endl;

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
    B()
    {}

    void foo() const override
    {
        std::cout << value + 30;
    }

};

int main()
{
    A a;
    B b;
    std::vector<A> objects = {a, b};
    for (const auto& object : objects)
    {
        object.foo();
    }
    return 0;
}