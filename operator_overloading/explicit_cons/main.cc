#include <iostream>
#include "Array.h"

using namespace std;

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    
    Array val1 (10);
    Array val2;

    // PRINT FIRST OBJECT ARRAY
    cout << "Size of Array val is " << val1.getSize() 
    << "\nArray after initialization:\n" << val1;

    // PRINT SECOND OBJECT ARRAY
    cout << "\nSize of Array VAL2 IS : " << val2.getSize ()
     << "Values after intialization are : \n" << val2;

     // INPUT BOTH OBJECT ARRAY
     cout << "Enter value : ";
     cin >> val1  >> val2;

     cout << "Size of Val1 : " << val1.getSize() << "\n"
          << "Size of Val2 array : " << val2.getSize();

    cout << "\n VALUE OF ARRAYS : " << endl;
    cout << "Value of val1 array : " << val1 <<
            "Value of val2 array : " << val2 << endl;

    if (val1 != val2) 
    cout << "Val1 and val2 are not equal : " << endl;

    const Array val3 (val1);

    cout << "\nSize of val 3 : " << val3.getSize () <<
      "Array Value : " << val3 << endl;

    cout << "Assign operator val1 = val2 : " << endl;

    val1 = val2;
    val1[4] = 10000;

    cout << "Value : \n" << val1  << "Value 2 : \n" << val2;

    cout << "Value : \n" << val3 [20];

    if (val1 == val3) {
        cout << "Yes :";
    }
    else cout << "no";
    return 0;
}