/*
*********************************** MULTIPLE INHERITANCE ********************************
*********************** CREAET A BASE CLASS NAMED AS SALARY *****************************
******* 
        CREATE A ANTOHER CLASS NAMED AS BASESALARYEMPLOYEE AND 
        INHERITE PROPERTIES AND CHARACTERISTICS FROM SALARY CLASS 
********
******** 
         CREATE A ANOTHER CLASS NAMED AS COMMISSIONSALARYEMPLOYEE AND 
         INHERITE PROPERTIES AND CHARACTERISTICS FROM SLARY CLASS AND ENHANCE IT WITH 
         NEW CAPABLILITES
*********
*/
#include <iostream> // PREPROCESSOR DIRECTIVE HEADER FILE OF INPUT/OUTPUT STREAM OBJECT 
//#include "Salary.h" // INCLUDE SALARY HEADER FILE
#include "monthlyBaseSalary.h"
#include "commissionBasedSalary.h"

// SET STANDARD FILES
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

#include "Date.h"

// MAIN() FUNCTION OF THE PROGRAM 
int main (void) {
    string EmCategory;
    string name;
    double age;
    string ssNumber;
    string department;
    string joinningYear;

    cout << "Enter Name : ";
    getline (cin,name);
    cout << "Enter Social Security Number : ";
    getline (cin,ssNumber);
    cout << "Enter Employee Department : ";
    getline (cin,department);
     
    start:cout << "Enter employee Category (salary based or commission based ) : ";
    getline (cin,EmCategory);
    cout << EmCategory << endl;

    if (EmCategory == "commission based") {
        CommissionBasedSalary cSalary (
          name,
          303.44,
          ssNumber,
          department,
          "asdfaf"
          
        );
      cSalary.print ();   
    }
    else if (EmCategory == "salary based") {
         monthlyBaseSalary salary (
            name,
            49,
            ssNumber,
            department,
            "asdfafd"
         );

         salary.print();
    }
    else {
        cout << "Please enter valid statement that given in prompt : ";
        goto start;
    }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}