#ifndef Array_h
#define Array_h

// CLASS DECLARATIONS
#include <iostream>

using namespace std;

// DECLARE A CLASS NAMED AS ARRAY

class Array {

    // STREAM INSERTION AND EXTRACTION OPERATOR OVERLOAD
    friend ostream &operator<< (ostream &, const Array &);

    // STREAM EXTRACTION OPERATOR OVERLOAD
    friend istream &operator>> (istream &, Array &);

    public: /* PUBLIC VISIBILITY OPEARTOR*/
    explicit Array (int = 10); // DEFAULT CONSTRUCTOR 
    Array (const Array &); // COPY CONSTRUCTOR
    ~Array ();
    int getSize ();
    const int getSize () const{
        return size;
    }
    const Array &operator= (const Array &);
    bool operator== (const Array &) const;
    // INEQUALITY OPERATOR OVERLOAD; RETURN OPPOSITE OF == OPERAOTR
    bool operator!= (const Array &right) {
        return ! (*this == right);
    }

    // SUBSCRIPT OPERATOR FOR NON-CONST OBJECTS RETURNS MODIFIABLE LAVLUE
    int &operator[](int);
    // SUBSCRIPT OPERATOR FOR CONST OBJECTS RETURN RVALUE
    int operator[] (int) const;
    // PRIVATE ACCESS SPECIFIER 
    private:
    /*
      DATA MEMBER OF THE CLASS
    */
    int size;
    int *ptr;
};

#endif