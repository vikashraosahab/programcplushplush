// CREATE A FACTORAIL CLASS

// #include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Factorial {
   public: // ACCESS SPECIFIER
   Factorial (); // CONSTRUCTOR
   ~Factorial(); // DESTRUCTOR
   void displayResult () const;
   int user_value;
   private:
   int factorial_value;

};

// CLASS INITIALIZATION
Factorial::Factorial () {
  factorial_value = 1; 
  cout << "Enter value : " << endl;
  cin >> user_value;
   for (int i = 1; i <= user_value; i++) {
        factorial_value *= i;
    };
};

void Factorial::displayResult () const {
    cout << "Factorial Result : " << this->factorial_value << endl;
}

Factorial::~Factorial () {
    cout << "Hello,Program is ended Now";
}
