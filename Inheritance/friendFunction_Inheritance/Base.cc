// INCLUDE PREPROCESSOR DIRECTIVE HEADER FILE
#include "Base.h"
#include <iostream>

// SET STANDARD METHODS
using std::cout;
using std::cin;
using std::endl;
using std::string;

// DEFINITION OF THE BASE CLASS CONSTRUCTOR
Base::Base () {}; // DEFAULT CONSTRUCTOR
Base::Base (
    const int &userpass,
    const string &username,
    const int &userage
) {
    name  = username;
    password = userpass;
    age = userage;
};

// DISPLAY MESSAGE BY USING THIS METHOD
void Base::display () const {
    cout << this->name << endl;
};


// DEFINITION OF THE base CLASS DESTRUCTOR
Base::~Base () {
    cout << "BASE OBJECT IS DESTROYED NOW !" << endl;
}