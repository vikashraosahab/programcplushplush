// CLASS DEFINITION SECTION 

#include "Header.h"
#include <iostream> // INPUT/OUTPUT STREAM OBJECT HEADER FILE

// USING ALL NAMESPACE STD
using namespace std;

#include <math.h>

// CLASS CONSTRUCTOR DEFINITION 
RootQuadratic::RootQuadratic () {
    int value1,value2,value3;
    cout << "Enter value of a : ";
    cin >> value1;
    cout << "Enter value of b : ";
    cin >> value2;
    cout << "Enter value of c : ";
    cin >> value3;

    // ASSIGN VALUES TO PRIVATE DATA MEMBER
    a = value1;
    b = value2;
    c = value3;
};

RootQuadratic &RootQuadratic::getResult () const{
   int  innerRoot = pow (b,2) - 4 * a * c;
   int root = innerRoot / 0.5;
   int positiveValue = (-b + root ) / 2 * a;
   int negativeValue = (-b - root) / 2 * a;

   cout << "First Value : " << positiveValue << endl;
   cout << "Second Value : " << negativeValue << endl;
};

RootQuadratic::~RootQuadratic () {
    cout << "\n Programming is ended now!";
}