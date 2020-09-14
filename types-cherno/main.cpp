#include <iostream>

class Base {
public:
    Base() = default;

    virtual ~Base() = default;
};

class Derived : public Base {
public:
    Derived() = default;

    ~Derived() override = default;
};

class AnotherClass : public Base {
public:
    AnotherClass() = default;

    ~AnotherClass() override = default;
};

int main() {
//    int a {5};
//    double value = a; // casting int into double is fine

//    double a {5.25};
//    int value = a; // casting double into int is fine

    double value = 5.25;
    double a = (int)value + 5.3; // C style cast works fine

    Derived* derived = new Derived();

    Base* base = derived;

    Derived* ac = dynamic_cast<Derived*>(ac);

    std::cin.get();
}
