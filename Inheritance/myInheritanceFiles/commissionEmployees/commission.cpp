// CLASS DEFINITION SECTION
#include "commision.h"

#include <iostream> // PREPROCESSOR DIRECTIVE HEADER OF INPUT/OUPUT STREAM OBJECT 

// SET NAMESPACE SET 
using namespace std;


// CLASS CONSTRUCTOR DEFINTION 
CommissionEmployees::CommissionEmployees (
    const string &fName,
    const string &lName,
    const string &ssNumber,
    const double &gSales,
    const double &cRate
) {
  setFirstName (fName);
  setLastName (lName);
  setSocialSecurityNumber (ssNumber);
  setGrossSales (gSales);
  setCommissionRate (cRate);
};

// INITIALIZATION OF ALL SET MEMBER FUNCTION FOR VALUE INITIALZAITON OF PRIVATE DATA MEMBER
void CommissionEmployees::setFirstName (const string &fName) {
    firstName = fName;
};

void CommissionEmployees::setLastName (const string &lname) {
    lastName = lname;
}

void CommissionEmployees::setSocialSecurityNumber (const string &ssn) {
    socialSecurityNumber = ssn;
}

void CommissionEmployees::setGrossSales (const double &gSales) {
    grossSales = gSales;
}

void CommissionEmployees::setCommissionRate (const double &cRate) {
    commissionRate = cRate;
}

inline double CommissionEmployees::employeeEarings () const {
  return (commissionRate * grossSales) / 100;
}


// INITIALIZATION OF GET FUNCTION 
inline string CommissionEmployees::getFirstName () {
    return firstName;
}

inline string CommissionEmployees::getLastName () {
    return lastName;
}

inline string CommissionEmployees::getSocialSecurityNumber () {
    return socialSecurityNumber;
}

inline double CommissionEmployees::getGrossSales () {
    return grossSales;
}

inline double CommissionEmployees::getCommissionRate () {
    return commissionRate;
}



// INITIALIZATION OF PRINT () FOR DISPLAYED OUPUT RESULT
void CommissionEmployees::print () const {
    cout << "First Name : " << firstName << endl;
    cout << "Last Name : " << lastName << endl;
    cout << "SocialSecurity Number : " << socialSecurityNumber << endl;
    cout << "Gross Sales : " <<grossSales << endl;
    cout << "Employee Commission Rate : " << commissionRate << endl;
    cout << "Total Employee Earings : " << employeeEarings () << endl;
 
}



// DESTURCTOR DEFINITION SECTION 
CommissionEmployees::~CommissionEmployees () {
    cout << "\nOkay Object is destoryed now !\n" << endl;
}