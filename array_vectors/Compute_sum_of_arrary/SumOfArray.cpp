// CLASS DEFINITION SECTION

#include "SumOfArray.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

SumOfArray::SumOfArray (int array[], const int &size) {
    totalSum = 0;
    // PASSED ARRAY[] ALL WITH GETRESULT FOR PRINT ALL ELEMENTS OF THE ARRAY
    
   // FOR INITILIAZATION OF ARRAY
   for (int i = 0; i < size; i++) {
    cout << "Enter Value of Index no. " << i + 1 << " : " << endl;
     cin >> array[i];
   };


   // FOR GETTING VALUE OF ARRAY AND STORE ALL VALUE WITH IN TOTALSUM
   for (int i = 0; i < size; i++) {
     totalSum += array[i];
   }
   
};


// OUTPUT RESUTL
void SumOfArray::print () const {
    cout << "Total Sum of array elements is : " << this->totalSum << endl;
}


int SumOfArray::getSum () const {
    return totalSum;
}
// PRINT ALL ELEMENTS OF THE ARRAY
void SumOfArray::getResult (int array[],const int &size) const {
    
    // FOR GETTING ALL ELEMENTS OF ARRAY BY USING LOOP
    for (int i = 0; i < size; i++ ) {
     cout << "Array : " << i + 1 << " = " << array[i] << endl; // OUTPUT STATEMENT 
    };
}

