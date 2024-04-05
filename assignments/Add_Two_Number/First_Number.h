// FIRST NUMBER 

#include "Second_Number.h"

class FirstNumber {
    
    // FRIEND CLASS
    friend inline int Sum (FirstNumber &val1, SecondNumber &val2);

    public:
     FirstNumber (const int &val):value (val) {};
    private:
    const int value;
};