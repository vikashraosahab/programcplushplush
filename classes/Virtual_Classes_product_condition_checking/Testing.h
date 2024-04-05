// CREATE AN INHERITED CLASS FROM CHILD
// USE WRAPPER PREPROCESSOR TO PREVENT CLASS REDEFINITION MULTIPLE TIEM
#ifndef TESTING_H
#define TESTING_H

// PREPROESSOR DIRECITVE HEADER FILES 
#include <iostream>
#include "department.h"
#include "base.h"

using std::cout;
using std::endl;
using std::string;


class TestDepartment/* public Base,public WebDesigning */ {
   public:
   TestDepartment (
      char *,
      char *,
      char *,
      char *,
      char *,
      const string &
   );
   ~TestDepartment ();
   
 void print () const;

   private:
    string condition;
};

// CLASS DEFINITION 
TestDepartment::TestDepartment (
   char *cName,
   char *cAge,
   char *cDepartment,
   char *dHOD,
   char *dProduct,
   const string &con
):Base(
   cName,
   cAge
),
WebDesigning (
   cDepartment,
   dHOD,
   dProduct
)
{

   // PRINT CALLING WHEN CONSTRUCTOR INSTANCIATED
   condition = con;
};

// VOID DISPLAY 
void TestDepartment::print () const {
   cout << "Model Condition - : ";
   cout << "Condition - " << condition << endl;
}

// DESTURCTOR DEFINITION 
TestDepartment::~TestDepartment () {
   cout << "\n\nTestDepartment data is remove from memory !" << endl;
}

#endif