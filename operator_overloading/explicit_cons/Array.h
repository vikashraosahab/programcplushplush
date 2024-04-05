// CLASS DECLARATION

#ifndef ARRAY_H
#define ARRAY_H

// PREPROCESSOR DIRECTIVE HEADER INPUT/OUTPUT STREAM FILE
#include <iostream>

using namespace std;



class Array {
  
  // STREAM INSERTION OPERATOR OVERLOAD
 friend ostream &operator<< (ostream &, const Array&);

 // STREAM EXTRACTION OPERATOR OVERLOAD
 friend istream &operator>> (istream &, Array &);

 public:
 Array (int = 10); // DEFAULT CONSTRUCTOR
 Array (const Array &); // PARAMETERIZED CONSTRUCTOR
 ~Array (); // DESTRUCTOR 
 int getSize () const;
 
 // ASSIGNMENT OPERATOR
 const Array &operator= (const Array &);

 // equality operator
 bool operator== (const Array &) const;

// ENQULITY OPERATOR RETURN OPPOSITE OF == OPERATOR
 bool operator!= (const Array &RIGHT) const {
    return ! (*this == RIGHT);
 }

 // SUBSCRIPT OPERATOR FOR NON-CONST OBJECTS RETURNS MODIFIABLE LVALUE
 int &operator[] (int);

 // subscript operator for CONST OBJECT RETURN RVALUE
 int operator[] (int) const;

 private:
 int size;
 int *ptr;
};

#endif