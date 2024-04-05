#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Overloading the unary operator "-"
    Number operator--() {
        return Number (--value);
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Number num(10);
     num.display();  
    Number negNum = --num; // Using the overloaded unary operator
    // Original value
    negNum.display();   // Negated value

    return 0;
}