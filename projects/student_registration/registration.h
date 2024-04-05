// REGISTRATION CLASS REGISTRATIO BASIC INFORMATION OF STUDENT
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include "bca.h"
#include "btech.h"
#include <iostream>

using std::string;

class Registration : virtual public Bca,
virtual public Btech {
  // PUBLIC ACCESS SPECIFIER
      public:
      Registration (
        char *,
        char *,
        char *,
        const string &,
        char *
      ); // CONSTRUCTOR OF THE CLASS
      ~Registration (); // DESTRUCTOR OF THE CLASS
      void print () const;
      //void registryValidate ();

   // PRIVATE DATA MEMBER
      private:
      char *name;
      char *id;
      char *father;
      string department;
      char *hod;
      
};

#endif