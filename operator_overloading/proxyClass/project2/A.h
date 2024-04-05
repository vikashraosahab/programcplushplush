#include "Main.h"
#include <iostream>

using namespace std;

class A {
  friend istream &operator>> (istream &, const A &);
  public:
   A (int);
   void setValue (int);
   int getValue () const;
   ~A () {
    delete ptr;
   }
   private:
   Main *ptr;
};

istream &operator>> (istream &input, const A &val) {
    input >> val.mobile;

    return input;
}

A::A (int value)
:ptr (new Main (val)) {

}

void A::setValue (int val) {
    ptr->setValue (val);
}

int A::getValue () const{
    return ptr->getvalue ();
}