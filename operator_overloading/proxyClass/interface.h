#include "implementation.h"
#include <iostream>

using namespace std;

class Interface {
 public:
 Interface (int);
 ~Interface ();
 void setValue (int value);
 int getValue () const;
private:
Implementation *ptr;
};

Interface::Interface (int value)
:ptr (new Implementation (value)) {

}

void Interface::setValue (int v) {
  ptr->setValue (v);
}

int Interface::getValue () const{
    return ptr->getValue ();
}

Interface::~Interface () {
    delete ptr;
}
