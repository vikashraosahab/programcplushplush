// CLASS DEFINITION 
#include "child1.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Child1::Child1 (
    const int &userpass, 
    const string &username,
    const int &userage
    ):Base (userpass,username,userage),
    confirmPassword (userpass) 
    {
        // CHILD CONSTRUCTOR SCOPE
       Base::display ();
    };

int Child1::get_value () const{
  return confirmPassword;
}
void Child1::display () const {
  cout << this->confirmPassword << endl;
  Base::display ();
}


Child1::~Child1 () {};
