
#include "First_Number.h";

class SecondNumber {
    
    // FRIEND CLASS
    friend inline int Sum (FirstNumber &val1, SecondNumber &val2);

    public:
     SecondNumber (const int &val):value (val) {};
    private:
    const int value;
};