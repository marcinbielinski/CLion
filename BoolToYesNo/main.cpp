#include <iostream>

class Person {
public:
    explicit Person(int x) { std::cout << "Person::Person(int) called" << std::endl; }

    Person() { std::cout << "Person:: Person() called" << std::endl; }
    
    virtual void firstMethod(int a) = 0;
};

class Faculty : virtual public Person {
public:
    explicit Faculty(int x) : Person(x) { std::cout << "Faculty::Faculty(int) called" << std::endl; }
};

class Student : virtual public Person {
public:
    explicit Student(int x) : Person(x) { std::cout << "Student::Student(int) called" << std::endl; }
};

class TA : public Faculty, public Student {
public:
    explicit TA(int x) : Student(x), Faculty(x), Person(x) { std::cout << "TA::TA(int) called" << std::endl; }
    
    void firstMethod(int a) override
    {
        std::cout << a + 10 << std::endl;
    }
};

int main() {
    Person* ta1 = new TA(30);
    ta1->firstMethod(30);
    return 0;
}