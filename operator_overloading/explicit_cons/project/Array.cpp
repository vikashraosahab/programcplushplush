// CLASS DEFINITION SECTION
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

#include "Array.h" // INCLUDE ARRAY HEADER FILE

Array::Array (int arraySize) {
    size = (arraySize > 0 ? arraySize : 10); 

    // ALLOCATE DYNAMIC MEMORY
    ptr = new int[size];

    for (int i = 0; i < size; i++)
     ptr[i] = 0;
};

// DEFINE COPY CONSTRUCTOR
Array::Array (const Array &arrayToCopy)
:size (arrayToCopy.size) {
   ptr = new int [size];

   for (int i = 0; i < size; i++)
   ptr [i] = arrayToCopy.ptr[i];
}

// DE-ALLOCATE DYNAMIC MEMORY 
Array::~Array () {
 delete [] ptr;
}


// RETURN SIZE OF ARRAY
int Array::getSize () {
    return size;
}

// CONST RETURN AVOIDS (AI = A2 ) = A3
const Array &Array::operator= (const Array &right) {
    if (&right != this) {
        if (size != right.size) {
            delete[] ptr;
            size = right.size;

            ptr = new int [size];
        }

        for (int i = 0; i < size; i++)
        ptr[i] = right.ptr [i];
    }

    return *this;
}


// COMPARE TWO ARRAY ARE EAQUAL OR NOT
bool Array::operator== (const Array &right) const {
    if (size != right.size ) 
    return false;

    for (int i = 0; i < size; i++) {
        ptr [i] != right.ptr[i];

        return false;
    }

    return true;
}

// CHECK NON-CONST SIZE OF ARRAY 
// RETURN STATEMENT WHEN ARRAY SIZE GOT OUT OF RANGE MEANS MORE THAN 10
int &Array::operator[] (int subscript) {
    if (subscript < 0 || subscript >= size) {
      cerr << "\n Error : Subscript" << subscript 
      << "out of range : " << endl;
      exit (1);
    }

return ptr [subscript];
}


// FOR CONST CONSTRUCTR

int Array::operator[] (int subScript) const {
   
   if (subScript < 0 || subScript >= size) {
    cerr << "\n Error : Subscript" << subScript 
    << "Out of range :" << endl;

    exit (1);
   } 

   return ptr [subScript];
}

ostream &operator<< (ostream &output, const Array &array) {
    int i;
    for (i = 0; i < array.size; i++) {
        output <<setw (12) << array.ptr [i];

        if ((i + 1) % 4 == 0)
         output << endl;
    }
    
     if (i % 4 != 0) {
            output << endl;
         }
    return output;
}

istream &operator>> (istream &input, Array &array) {
    for (int i = 0; i < array.size; i++) {
        input >> array.ptr[i];
    }

    return input;
}

