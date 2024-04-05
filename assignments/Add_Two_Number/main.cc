// ASSIGNMENT - 3 
// ADD TWO VALUE 

// PREPROCESSOR DIRECTIVE INPUT/OUTPU STREAM HEADER FILE
#include <iostream>

// SET ALL NAMESAPCE STD
using namespace std;

// CLASS HEADING

class SecondNumber;
// FIRST CLASS
class FirstNumber {

    // FRIEND FUNCTION OF SUM_Val
    friend inline int Sum_Val (FirstNumber &val1, SecondNumber &val2);
   public:
   FirstNumber (const int &val):value (val) {};
   private:
   int value;
};

// SECOND CLASS
class SecondNumber {
    // FRIEND FUNCTION OF SUMVAL
   friend inline int Sum_Val (FirstNumber &val1, SecondNumber &val2);
   public:
   SecondNumber (const int &val):value (val) {};
   private:
   int value;
};

// ADD TWO NUMBER
/*
INLINE FUNCTION IS A SPECIAL TYPE FUNCTION IN C++ 
WHICH RETURN VALUE IN ONE SINGLE RETURN LINE
*/
inline int Sum_Val (FirstNumber &val1, SecondNumber &val2) {
    return val1.value + val2.value;
};

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS
    int value1,value2;
    // OUTPUT STATEMENT
    std::cout << "Enter First Value : " << std::endl;
    std::cin >> value1;
    std::cout << "Enter Second Value : " << std::endl;
    std::cin >> value2;

    // CREATE OBJECTS OF CLASS
    FirstNumber firstNumber (value1);
    SecondNumber secondNumber (value2);

    // FRIEND CLASS
   std::cout <<
   "Sum of given two : "
   << Sum_Val (firstNumber,secondNumber) << std::endl;
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}