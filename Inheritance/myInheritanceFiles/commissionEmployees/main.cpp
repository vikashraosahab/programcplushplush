// CREATE COMPANY COMMISSIONEMPLOYEES SALARY SYSTEM 
// MAIN () FUNCTION OF THE PROGRAM 
#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM HEADER FILE

#include "commision.h" // INCLUDE COMMISSION HEADER FILE 

// SET NAMESPACE OF STANDARD
using std::cout;
using std::cin;
using std::cout;
using std::string;

// SET MAX_LENGTH = 10;

// MAIN() FUNCTION 
int main (void) {
    cout << "\n\n Commission Based Employees Salaries ---- \n";
    
    /* 
      DECLARE VARIABLES WITH POINTER FOR DYNAMIC MEMORY
    */
    string fname,lname,ssNumber;
    double gSales,cRate;

    cout << "Employee First Name : ";
    cin >> fname;
    cout << "Employee Last Name : ";
    cin >> lname;
    cout << "Employee Social Security Number : ";
    cin >> ssNumber;
    cout << "Gross Sales : ";
    cin >> gSales;
    cout << "Commission Rate : ";
    cin >> cRate;

    // CREATE AN OBJECT OF CLASS
    /* INSTANTIATED OF CLASS */
    CommissionEmployees employee (fname,lname,ssNumber,gSales,cRate);
    employee.print (); // PRINT OUTPUT OF CLASS PRINT FUNCTION BY USING OBJECT 
   
    return 0; // IT INDICATE THAT PROGRAM 
}