// CHILD ONE CLASS
 
// WRAPPER PREPROCESSOR THAT USED FOR PREVENT CLASS REDEFINITION MULTIPLE TYPES
#ifndef WEBDESIGN_H
#define WEBDESIGN_H

// PREPROCESSOR DIRECTIVE HEADER FILE
#include <iostream>
#include <string.h>

// INCLUDING BASE CLASS HEADER FILE
#include "Base.h"

// SET NAMESPACE FOR USING
using std::cout;
using std::cin;
using std::endl;
using std::string;

// CREATE AN INHERITED CLASS FROM BASE CLASS
class WebDesigning{

  // PUBLIC ACCESS SPECIFIER LABEL
  public:
  
  WebDesigning (
    char *,
    char *,
    char *
  );  // CONSTRUCTOR 

  ~WebDesigning (); // DESTRUCTOR 

  void print () const;
  private:
  // PRIVATE DATA MEMBERS
  char *department;
  char *hod;
  char *product;
};

// INITIALIZATION OF CLASS
WebDesigning::WebDesigning (
    char *d,
    char *h,
    char *ne
){
   int length = 0;
   
   length = strlen (d);
   // ASSIGN DAYNAMIC MEMORY
   department = new char [length + 1];

   // COPY ARGUEMNT WITN DEPARTMENT ,

   strcpy (department,d);

   // GET LENGTH FOR h
   length = strlen (h + 1);

   // ASSIGN DYNAMIC MEMORY FOR hod

   strcpy (hod,h);

   // GET LENGTH OF NE ARGUMENT
   length = strlen (ne + 1);
    product = new char [length];

   strcpy (product,ne);

};


void WebDesigning::print () const {
 // WebDesigning::Base::display ();
  cout << "Department : " <<department << endl;
  cout << "Head of the department : " << hod << endl;
  cout << "Total number of employees : " << product << endl;
 // Base::display ();
};

// INTIALIZATION OF CLASS DESTURCTOR
WebDesigning::~WebDesigning () { 
    cout << "Oject is destoryed Now !" << endl;

    delete[] department;
    delete[] hod;
    delete[] product;
}


#endif