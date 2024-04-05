// CASE STUDY FOR LEARNING PROGRAMMING

#include <iostream>

#include "Date.h"

using std::cout; // ENABLE COUT STDANRD METHOD FOR OUTPUT
using std::cin; // ENABLE CIN STANDARD METHOD FOR INPUT
using std::endl; // ENABLE ENDLINE METHOD FOR NEW LINE

// HEADING OF THE MAIN () FUNCTION
int main (void) {

   Date d1;
   
   cout << "D1 : " << d1 << endl;

   Date d2 (52,24,2005);
   cout << "D2 : " << d2 << endl;

   Date d3 (11,12,2005);
   d3.setDate (11,28,2005);
   d3.operator++ ();
   cout << "D3 : " << d3 << endl;

   Date d4 (12,31,2020);

   cout << "D4 : "<< d4.operator++() << endl;
   cout << "d4 : " << d4 << endl;
    return 0; // IT IND
}

