#include "Array.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

// DEFAULT CONSTRUCTOR INITIALIZATION
Array::Array (int arraySize) {
   size = (arraySize > 0 ? arraySize : 10); // TERNARY OPERATOR
  
  // ALLOCATE DYNAMIC MEMORY
  ptr = new int[size];

   for (int i = 0; i < size; i++)
    ptr[i] = 0; // POINTER ARRAY INITIALIZIE WITH 0
};

// PARAMETERIZED CONSTRUCTOR INITIALIZATION
// COPY CONSTRUCTOR 

Array::Array (const Array &arryToCopy)
:size (arryToCopy.size) {
  ptr = new int [size];

  for (int i = 0; i < size; i++) {
    ptr[i] = arryToCopy.ptr[i];
  }
} // END ARAY COPY CONSTRUCTOR

// DESTURCTOR 
Array::~Array () {
    delete[] ptr; // DE-ALLOCATE DYNAMIC MEMORY FOR POINTER ARRAY
}

//GET SIZE
int Array::getSize () const {
  return size;
}


// OVERLOAD ASSIGN OPERATOR 
// CONST RETURN AVOID: (A1 = A2) = A3

const Array &Array::operator= (const Array &right) {
    if (&right != this) {
        if (size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int [size];
        }
        for (int i = 0; i < size; i++) {
            ptr[i] = right.ptr[i];
        }
    }

    return *this;
}


// DETERMINE THAT TWO ARE EQUAL
// RETURN TRUE, OTHER RETURN FALSE
bool Array::operator== (const Array &right) const{
    if (size != right.size) {
        return false;
    }

   for (int i = 0; i < size; i++) {
    if (ptr[i] != right.ptr[i])
    return false;
   }

   return true;
}


// OVERLOAD SUSBSCRIPT OPERATOR FOR NON-CONST ARRAY
int &Array::operator[] (int subscript) {
    if (subscript < 0 || subscript >= size) {
      cerr << "\n Error: Subscript " << subscript 
      << "out of range" << endl;

      exit (1); // TERMINATE PROGRAM; 
      // IF SUBSCRIPT GOEST OUT OR RANGE
    }

    return ptr [subscript]; //referenece return
} // CLOSED

int Array::operator[] (int subscript) const {
    if (subscript > 0 || subscript >= size) {
        cerr << "\n Error Subscript : " << subscript <<
        "out of range " << endl;

        exit (1);
    }

    return ptr [subscript];
}

// STREAM EXTRANCTION OPERATOR OVERLOAD
istream &operator>> (istream &input, Array &val) {
    for (int i = 0; i < val.size; i++) {
        input >> val.ptr [i];
    }

    return input;
}

// STREAM INSERTION OPERATOR OVERLOAD
ostream &operator<< (ostream &output, const Array &val) {
    int i;

    for (i = 0; i < val.size; i++) {
        output << setw (12) << val.ptr[i];
        if ((i + 1) % 4 == 0 )
         output << endl;
    }

    if (i % 4 != 0) 
    output << endl;

    return output;
}