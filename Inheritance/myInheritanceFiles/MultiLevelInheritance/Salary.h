// CREATE A CLASS NAMED AS SALARY 
// CREATE SALARY FROM STRACTH AND OTHER TWO CLASS INHERIT IT'S PROPERTIES 

#ifndef SALARY_H
#define SALARY_H

#include <iostream> // INCLUDE HEADER FILE OF INPUT/OUTPUT STREAM OBJECT
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Salary {
    public: /* PUBLIC ACCESS SPECIFIER LABEL*/
    Salary (
    const string&,
    const double&,
    const string&,
    const string&,
    const string&
    ); // CONSTRUCTOR
   ~Salary (); // DESTURCTOR 
   //inline double employeEarings ();
   void print () const; // MEMBER FUNCTION 
   inline double employeEarings ();
    protected: /* PRIVATE ACCESS SPECIFIER LABEL */
    string name;
    double age;
    string socialSecurityNumber;
    string department;
    string joinningYear;
};


// CLASS DEFINITION 
Salary::Salary (
     const string &n,
     const double &a,
     const string &ssn,
     const string &d,
     const string &jYear
){
  name = n; // INITLIZATION OF NAME PROTECTED Member
  age = a; // INITIALIZATION OF AGE PROTECTED MEMBER
  socialSecurityNumber = ssn; // INITIALIZATION OF SOCIALSECURITYNUMBER
  department = d; // INITIALZATION OF DEPARTMENT 
  joinningYear = jYear; // INITIALIZATION OF JOININGYEAR
};


// DEFINE VOID PRINT() MEMBER FUNCTION
void Salary::print () const {
    cout << "Employee Name : " << this->name << endl;
    cout << "Employee Age : " << this->age << endl;
    cout << "Social Security Number : " << this->socialSecurityNumber << endl;
    cout << "Department : " << this->department << endl;
    cout << "Joining Year : " << this->joinningYear << endl;
}

#endif