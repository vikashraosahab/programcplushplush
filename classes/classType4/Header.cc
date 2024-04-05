// CLASS DEFINITION 

#include "Header.h"
#include <iostream>
#include <string>

using namespace std;

Header::Header () {
    length = 0;
    name = new char [length + 1];
};

Header::Header (char * s) {
    length = strlen(s);

    s = new char [length + 1];
}

void Header::join () const {

}

void Header::displayMessage () const {
   cout << this->name;
};