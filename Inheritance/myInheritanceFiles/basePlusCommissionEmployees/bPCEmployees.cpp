// CLASS DEFINTION 

#include <iostream> // INCLUDE INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "bPCEmployees.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

// BASEPLUSHEMPLOYEE CLASS MEMBER FUNCITON DEFINITION INITLIATION 
BasePlusCommissionEmployee::BasePlusCommissionEmployee (
    const string &n,
    const string &ssn,
    const double &gS,
    const double &s,
    const double &cRate
):name (n),
socialSecurityNumber (ssn),
grossSales (gS),
salary (s),
commissionRate (cRate) {};


inline string  BasePlusCommissionEmployee::getName () {
    return name;
};

inline string BasePlusCommissionEmployee::getSSN ()  {
    return socialSecurityNumber;
};

inline double BasePlusCommissionEmployee::getGrossRate ()  {
    return grossSales;
}

inline double BasePlusCommissionEmployee::getCommissionRate () {
    return commissionRate;
};
 
inline double BasePlusCommissionEmployee::employeeEaring ()  const{
    return (grossSales/commissionRate) * 100;
}

// DISPLAY OUTPUT STATED RESULT
void BasePlusCommissionEmployee::print () const {
    cout << "Name : " << this->name << endl; 
    cout << "SocialSecurity Number : " << this->socialSecurityNumber << endl;
    cout << "Gross Sales : " << this->grossSales << endl;
    cout << "Commission Rate : " << this->commissionRate << endl;
    cout << "Employee Base Salary : " << this->salary << endl;
    cout << "Employee Commission : " << this->employeeEaring() << endl;
    cout << "\n\n TOTAL EMPLOYEE EARINGS : " << this-> salary + employeeEaring () << endl;
    cout << "\n\n\n CHECKLIST IS COMPLETED ... \n" << endl;
}

// BASEPLUSHEMPLOYEE CLASS DESTRUCTOR MEMBER FUNCTION DEFINITION 
BasePlusCommissionEmployee::~BasePlusCommissionEmployee () {
    cout << "OBJECT IS DESTORYED NOW!";
}