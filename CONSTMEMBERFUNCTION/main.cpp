#include <iostream>

class myClass {
    int value{};
public:
    explicit myClass(int val = 0) : value(val) {}

    ~myClass() = default;

    static void showMessage() {
        std::cout << "Dobry wieczór, jagódki,\n"
                     "Ale śmiesznie łohoho! \n"
                     "Jestem w środku metody showMessage()" << std::endl;
    }

    static void display() {
        std::cout << "Dobry wieczór, truskawki,\n"
                     "Jeszcze śmieszniej!\n"
                     "Jestem w środku metody display()" << std::endl;
    }
};

int main() {
    const myClass d1;
    d1.showMessage();
    d1.display();

    return 0;
}
