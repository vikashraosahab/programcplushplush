#include <iostream>

#include "Heading.h"
using namespace std;


void Person::set_p () {
    cout << "Enter name : ";
    std::getline (cin,name);
    cout << "Enter age : ";
    cin >> age;
};

void Person::display_p () {
    cout << " Student Name : " <<this-> name  << "\nStudent age : "<< age;
};




Student::Student () {
    set_p ();
    cout << "enter student id : ";
    cin >> studentId;
};

void Student::print () {
  display_p ();
  cout << "Student Id : " << studentId << endl;
}
