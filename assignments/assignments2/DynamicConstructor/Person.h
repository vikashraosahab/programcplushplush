// CREATE CLASS  PROTOTYE
// CLASS DECLARATIONS WITH IT'S MEMBER AND DATA MEMBER

#define PERSON_H
#ifdef PERSON_H


#include <string.h>
#include <iostream>
using std::string;

class Person {
   
   public:
   Person ();
   Person (const char *s);
   void displayMessage () const;
   void join (const char *a, const char *b);

   private:
   char *name;
   int length;
};

#endif