// CREATE FOR BCA STUDENT 
#include <iostream>
#include "bca.h"
#include <string.h>
#include <limits>

using namespace std;

Bca::Bca () {}



void Bca::getData (){
   cout << "\nBACHELOR OF COMPUTER APPLICATION REGISTRATION --- \n" << endl;

   cout << "Enter Course duration : ";
   cin >> duration;
   cout << "Enter Current Semester : ";
   cin >> semester;

   for (int i = 0; i < subjectLength; i++) {
      cout << "Enter Subjects name - ";
      string sub;
      cin >> sub;
      subjects [i] = sub;
   }

}

// DESTRUCTOR 
Bca::~Bca () {
   cout << "Object is destoryed!" << endl;
}

// DISPLAY ()
void Bca::display () const {
  // Registration::print();
    cout <<  "COURSE DURATION : " << this->duration << endl;
    cout << "Current Semester : " << this->semester << endl;
    cout << " Subjects - " << endl;

    for (int i = 0; i < subjectLength; i++) {
      cout << " o " << subjects[i] << endl;
    }
}