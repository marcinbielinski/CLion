#include <iostream>
#include <vector>

// class Base
// {
// public:
//     Base()
//     {
//         std::cout << "skonstruowano klase bazowa" << std::endl;
//     }

//     virtual ~Base()
//     {
//         std::cout << "zniszczono klase bazowa" << std::endl;
//     }

//     void mojaFunkcja()
//     {
//         std::cout << "wywolano mojaFunkcja() z klasy base" << std::endl;
//     }

//     int add_2_numbers(int a, int b)
//     {
//         return a+b;
//     }

//     std::vector<int> nasz_array;
// }

// class Derived : public Base
// {
// public:
//     Derived()
//     {
//         std::cout << "skonstruowano klase dziedziczaca" << std::endl;
//     }

//     ~Derived()
//     {
//         std::cout << "zniszczono klase dziedziczaca" << std::endl;
//     }

//     void mojaFunkcja()
//     {
//         std::cout << "wywolano mojaFunkcja() z klasy derived" << std::endl;
//     }
// }
namespace constants {
    const double pi = 3.141592653589793238463;
}

class Shape
{
public:
    virtual ~Shape() = default;
    virtual double calculateArea() = 0; // pure virtual

};

class Circle : public Shape
{
public:
    Circle() = default;

    explicit Circle(int radius)
            : rad(radius)
    {
    }

    ~Circle() override = default;

    double calculateArea() override
    {
        return constants::pi * rad * rad;
    }



private:
    int rad{};
};

class Rectangle : public Shape
{
public:
    Rectangle() = default;

    Rectangle(int a, int b) : width(a), height(b)
    {
    }

    ~Rectangle() override = default;

    double calculateArea() override
    {
        return width * height;
    }

private:
    int width{};
    int height{};
};

int main()
{
    Shape* koleczko = new Circle{5};
    Shape* kwadracik = new Rectangle{10, 5};
    Shape* kwadracik2 = new Rectangle{2, 10};

    std::vector<Shape*> tablica_ksztaltow;
    tablica_ksztaltow.push_back(koleczko);
    tablica_ksztaltow.push_back(kwadracik);
    tablica_ksztaltow.push_back(kwadracik2);


    for(const auto& ksztalt : tablica_ksztaltow)
    {
        std::cout << ksztalt->calculateArea() << ",";
    }

    return 0;
}