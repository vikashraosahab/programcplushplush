// WRAPPER PRECESSOR DIRECTIVE THAT PREVENT MULTIPLE TIME REDEFINITION OF CLASS
#ifndef BASE_H
#define BASE_H

// CREATE A BASE CLASS
#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Base {
   
   public:
   Base (char *, char*);
   ~Base ();
  // void getDate () const;
   void display () const;
   private:
   char *name;
   char *year;

};


// CLASS INITIALIZATION 
Base::Base (
    char *n,
    char *y
) {
   
   int length = 0;
   length = strlen (n);
   
   // ASSIGN DYNAMICALLY MEMORY
   name = new char [length];

   // COPY STRING WITHIN NAME DATA MEMBER
   strcpy (name,n);
   length = strlen (y);

   year = new char [length];

   strcpy (year,y);

} 


// INITIALIZATION OF DISPLAY MEMBER FUNCTION 
void Base::display () const {
    cout << "Company Name : " << this->name << endl;
    cout << "ESTABLISHMENT OF COMPANY : " << this->year << endl;
};


// INITIALIZATION OF DESTURCTOR
Base::~Base () {
    cout << "Object is destoryed !" << endl;
    // RELEASE DYNAMIC MEMORY
   
   delete[] name;
   delete[] year;
}

#endif