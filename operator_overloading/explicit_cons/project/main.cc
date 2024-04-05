// EXPLICIT  CONSTRUCTORS

#include <iostream>

#include "Array.h"

using namespace std;
// HEADING OF THE MAIN () FUNCTION 

void outputArray (const Array &);


int main (void) {
    Array a (4);
    
    cout << a << endl;
    Array b;
    cin >> b;

    cout << "Size B : " << b.getSize()
      << b << endl;

    const Array c = b;

    cout << "Size C : " << c.getSize() << "Array : " << c << endl;

     Array d (35);

     outputArray (d);

     outputArray (Array (100)); // EXPLICIT SINGLE ARGUMENT PASSED
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY

};

void outputArray (const Array &out) {
    cout << "Size : " << out.getSize()
    << "Array : " << out << endl;
}