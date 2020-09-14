#include <iostream>
#include <memory>
#include <utility>
#include "findShort.h"
#include "findLong.h"

class Child : public Parent1, public Parent2 {
protected:
    std::string m_name;
public:
    Child(int value, std::string name)
        : Parent1(value), m_name(std::move(name))
    {
    }

    [[nodiscard]] const std::string& getName() const { return m_name; }

    ~Child() override = default;

//    void parentInfo() override{
//        std::cout << "I am a child!" <<std::endl;
//    }
};

int main() {
    std::string myString("i want to travel the world writing code one day");

    auto* object = new Parent1(5);
    auto* object2 = new Parent2();
    auto* object3 = new Child(5, "child");

    Child child(1, "KidA");
    Parent1 &ptr = child;
    Child &ptr2 = dynamic_cast<Child&>(ptr);

    std::cout << "The name of the Child is: " << ptr2.getName() << std::endl;

    int val1{object->find_short(myString)};
    std::cout << "Size of the shortest word in that sentence is: " << val1 << std::endl;

    // static member accessed through instance
    int someVal{Parent1::find_short(myString)};
    std::cout << "Test: " << someVal << std::endl;

    int someVal2{object3->find_long(myString)};
    std::cout << "Dostęp do metody find short poprzez dziedziczenie... " << someVal2 << std::endl;

    int val2{object2->find_long(myString)};
    std::cout << "Size of the longest word in that sentence is: " << val2 << std::endl;

    return 0;
};