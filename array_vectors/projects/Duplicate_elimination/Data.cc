#include "Data.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Data::Date () {
   getData ();
};


void Data::getData () {// UNSIGNED INTEGER VARIABLE

    for (int i = 0; i < length; i++) 
    {
       cout << "Enter value : " << endl;
        cin >> ary[i];
    }
}

void Data::putData () {

   for (int i = 0; i < length; i++) {
     if (ary[i] != ary[i + 1 ]) {
        cout << ary[i];
     }
   }
}


