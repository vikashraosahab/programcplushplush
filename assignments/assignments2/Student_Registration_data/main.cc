// ASSIGNMENT - 7 
// REGISTRATION OF STUDENTS 
/*
******** STUDENT REGISTRATION DETIALS **************
*/
#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "Student.h"

#define MAX_LENGTH 30

// USE REQUIRED INPUT / OUTPUT STANDARD STREAM OBJECT
using std::cout; // FOR OUTPUT STATEMENT
using std::cin; // FOR INPUT STATEMENT
using std::endl; // FOR LINE BREAK STATEMENT
using std::string;

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    char *sName = new char [MAX_LENGTH];
    char *sFather = new char [MAX_LENGTH];
    char *sDepartment = new char [MAX_LENGTH];
    char *sCourse = new char [MAX_LENGTH];
    char *sStudentId = new char [MAX_LENGTH];
    char *sAge = new char [MAX_LENGTH];
    char *sYear = new char [MAX_LENGTH];
    char *eYear = new char [MAX_LENGTH];
    char *duration = new char [MAX_LENGTH];
    
    cout << "Enter Student Name : ";
    cin.getline (sName,MAX_LENGTH);
    cout << "Enter Student Father Name : ";
    cin.getline (sFather,MAX_LENGTH);
    cout << "Department Name : ";
    cin.getline (sDepartment,MAX_LENGTH);
    cout << "Student enrollement course : ";
    cin.getline (sCourse,MAX_LENGTH);
    cout << "Student Id : ";
    cin.getline (sStudentId,MAX_LENGTH);
    cout << "Student Age : ";
    cin.getline (sAge,MAX_LENGTH);
    cout << "Enrollement Year : ";
    cin.getline (sYear,MAX_LENGTH);
    cout << "End Year : ";
    cin.getline (eYear,MAX_LENGTH);
    cout << "Duration : ";
    cin.getline (duration,MAX_LENGTH);
    Students s1,
    s2 (
        sName,
        sFather,
        sDepartment,
        sCourse,
        sStudentId,
        sAge,
        sYear,
        eYear,
        duration
    );
   //s1.display();
    s2.display();

    delete[] sName;
    delete[] sFather;
    delete[] sDepartment;
    delete[] sCourse;
    delete[] sStudentId;
    delete[] sAge;
    delete[] sYear;
    delete[] eYear;
    delete[] duration;

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}