#include "Base.h"
#include "A.h"

class B:public Base, public A {
    public:
    B (const int&, const int&);
    ~B ();
    void print () const;

    private:
    int sum;
};

B::B (const int &val, const int &val2): Base (val,val2),A (val) 
{
    sum = val;
};

void B::print () const {
    B::Base::print ();
    std::cout << "Value of B: " << this->sum << std::endl;
}

B::~B () {
    std::cout << "Object is destroyed of number : " << this->sum << std::endl;
};

B::Base::~Base () {
    std::cout << "Delete constructor" << std::endl;
}

B::A::~A() {
    std::cout << "Sorry siry object is destoryed ";
}
