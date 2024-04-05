#include "Person.h" // INCLUDE HEADER FILE 

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUPTUT STREAM OBJECT HEADER FILE

#include <string.h>

using std::cout;
using std::cin;
using std::endl;

// CLASS INITILIAZATION

Person::Person () {
    length = 0;
    name = new char [length];
};

Person::Person (const char *s) {
   length = strlen (s);
   name = new char [length + 1];
   strcpy (name,s);
}
void Person::join (const char * a , const char *b) {
    length = strlen (a) + strlen (b);
    delete[] name;
    name = new char [length + 2];
    strcpy (name,a);
    strcat (name,b);
};
void Person::displayMessage () const {
  cout << name << endl;
};