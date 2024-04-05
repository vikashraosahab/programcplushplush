// CLASS INITIALIZATION

#include "Person.h" // INCLUDE PERSON HEADER FILE
#include <iostream> // PREPROCESSOR DIRECTIVE INPUT / OUTPUT STREAM OBJECT HEADER FILE
#include <string.h>

using std::cout;
using std::cin;
using std::endl;

// CLASS DEFINITION
Person::Person () {
    length = 0;
    name = new char [length];
    age = new int(0);
};

Person::Person (const char *str, const int *a) {
    length = strlen (str);
    name = new char [length + 1];
    age = new int (*a);
    strcpy (name,str);
};

Person &Person::display () {
 cout << name << " " << *age << endl;
};


Person::~Person () {
    cout << "Object is destoryed ! ";
    cout << name << endl;
    delete[] name;
    delete age;
}