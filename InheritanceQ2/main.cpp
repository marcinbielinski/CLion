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


class Shape
{
public:
    virtual ~Shape() = default;
    virtual int calculateArea() = 0; // pure virtua

};

class Circle : public Shape
{
public:
    explicit Circle(int radius)
            : rad(radius)
    {
    }

    ~Circle() override = default;

    int calculateArea() override
    {
        return 3.14 * rad * rad;
    }



private:
    int rad;
};

class Rectangle : public Shape
{
public:
    Rectangle(int a, int b) : width(a), height(b)
    {
    }

    ~Rectangle() override = default;

    int calculateArea() override
    {
        return width * height;
    }

private:
    int width;
    int height;
    const static std::string imie {"kwadrat"};
}

int main()
{
    Shape* koleczko = new Circle{};
    Shape* kwadracik = new Rectangle{};
    Shape* kwadracik2 = new Rectangle{};

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