/* 
***********'
    CREATE A SALARY PAYEMENT TO BASE PLUS
    COMMISSION SALARYTO EMPLOYEES
***********
*/
#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "bPCEmployees.h"
// SET NAMESPACE OF STANDARD COUT,CIN,ENDL,STRING etc
using std::cout;
using std::cin;
using std::endl;
using std::string;

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
     cout << "\n\nBase Plus Commission Employees Salary Blance Sheets ---- \n\n";
    // CREATE AN OBJECT OF CLASS
    BasePlusCommissionEmployee salary ("Vikash","274ydhadfga",30,2034.42,50);
    salary.print ();
  
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}
