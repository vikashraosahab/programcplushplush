// CLASS TYPE 1 
// CREATE A CLASS MAIN () FUNCTION 

#include <iostream> // PREPROCESSOR DIRECTIVE 

// SET STANDARD OBJECTS
using std::cout;
using std::cin;
using std::endl;

// HEADING OF THE MAIN () FUNCITON 
int main (void) {

    // CREATE SUM CLASS
    class Sum {
      protected: // PROTECTED ACCESS SPECIFIER
      int a; // VARIABLE A
      int b; // VARIABLE B

      public: // PUBLIC ACCESS SPECIFIER
      // CREATE A CONSTRUCTOR OF CLASS
       Sum () {
        int val1,val2; // VARIABLE DECLARATION
        cout << "Enter both value : "; // OUTPUT STATEMENT
        cin >> val1 >> val2; // INPUT STATEMENT

        this->a = val1; // ASSIGN VALUE WITH IN PROTECTED DATA MEMBER
        this->b = val2; // INITIALIZE PROTECTED DATA MEMBER NAMED B
       };

       void getSum () {
         sum = a + b; // GET SUM OF BOTH PROTECT DATA MEMBER A AND B AND INITLIATION THIER CALCUALTED VALUE WITHIN SUM
         cout <<"Sum of the given value : " <<this->a << " & " << this-> b << " = " <<this-> sum; // OUTPUT STATEMENT
       }
      private:
      int sum; // PRIVATE DATA MEMBER
    };

    // CREATE OBJECT OF THE CLASS
    Sum objVal;
    objVal.getSum (); // CALLING GETSUM() FUNCTION 

    return 0;
}