// CREATE A CLASS
#include <iostream>


class Checking {

   // PUBLIC ACCESS SPECIFIER
   public:
    Checking (const int &val) {
        number = val;
    };

    void EvenOrOdd () {
        if (number % 2 == 0) {
            std::cout << "Given number is Even" << std::endl;
        }
        else {
            std::cout << "Given number is odd" << std::endl;
        }
    };
   // PRIVAE ACCESS SPECIFIER
   private:
   int number;
};