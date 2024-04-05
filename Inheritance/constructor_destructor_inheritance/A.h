#include "Base.h"

class A:public Base{
    private:
    int value;
    public:
    A (const int &);
   ~A();
    void print () const;
};

// CLASS DEFINITION 

A::A (const int &val):Base (val,4) {
    value = val;
};

void A::print () const {
    A::Base::print ();
    std::cout << "Number : " << this->value << std::endl;
};

A::~A () {}
A::Base::~Base () {}

