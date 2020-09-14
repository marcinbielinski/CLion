#include <iostream>
#include <memory>
#include <vector>

class Pizza {
public:
    virtual void makePizza() = 0;
};

class NYStyleCrust {
public:
    static std::string addIngredient() {
        return "Crust so thin you can see through it! \n\n";
    }
};

class DeepDishCrust {
public:
    static std::string addIngredient() {
        return "Super Awesome Chicago Deep Dish! \n\n";
    }
};

template<typename T>
class LotsOfMeat : public T {
public:
    std::string addIngredient() {
        return "Lots of Random Meat. " + T::addIngredient();
    }
};

template<typename T>
class Vegan : public T {
public:
    std::string addIngredient() {
        return "Vegan Cheese, Veggies. " + T::addIngredient();
    }
};

template<typename T>
class MeatNYStyle : public T, public Pizza {
public:
    void makePizza() override {
        std::cout << "Meat NY Style Pizza: "
                  << T::addIngredient();
    }
};

template<typename T>
class VeganDeepDish : public T, public Pizza {
public:
    void makePizza() override {
        std::cout << "Meat NY Style Pizza: "
                  << T::addIngredient();
    }
};

int main() {
//    std::vector<std::unique_ptr<Pizza>> pizzaOrders;
//    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>());
//    pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>());
//
//    for (auto &pizza : pizzaOrders) {
//        pizza->makePizza();
//    }
//
    std::vector<std::unique_ptr<Pizza>> ORDER;
    ORDER.emplace_back(std::make_unique<MeatNYStyle<LotsOfMeat<NYStyleCrust>>>());
    ORDER.emplace_back(std::make_unique<VeganDeepDish<Vegan<DeepDishCrust>>>());


    for (auto &pizza : ORDER) {
        pizza->makePizza();
    }
    return 0;
}