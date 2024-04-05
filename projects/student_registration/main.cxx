// REGISTRATION OF STUDENT OF BCA AND BTECH BASED

#include <iostream> // INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "registration.h"
#include "bca.h"


using std::cout;
using std::cin;
using std::endl;
using std::string;

// SYMBOLIC CONSTANT 
#define MAX_LENGTH 20

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS
    char *name;
    char *id;
    char *father;
    string department;
    char *hod;
    
    // USER PROMPT FOR STUDENT NAME
    cout << "Enter student name : ";
    name = new char [MAX_LENGTH];
    cin.getline (name,MAX_LENGTH);

    // USER PROMPT FOR STUDENT ID
    cout << "Enter student id: ";
    id = new char [MAX_LENGTH];
    cin.getline (id,MAX_LENGTH);

    // USER PROMPT FOR STUDENT FATHER
    cout << "Enter Student Father Name : ";
    father = new char [MAX_LENGTH];
    cin.getline (father,MAX_LENGTH);
 
   // USER PROMPT FOR STUDENT DEPARTMENT
    cout << "Enter Student Department : ";
    getline (cin,department);
   // USER PROMPT FOR DEPARTMENT HOD
   cout << "Enter Student Hod : ";
   hod = new char [MAX_LENGTH];
   cin.getline (hod,MAX_LENGTH);


   // CREATE AN OBJECT OF THE CLASS
  Registration registration (
     name,
     id,
     father,
     department,
     hod
   );

   registration.print();
   
   //registration.registryValidate();
 // CREATE AN OBJECT
   

    // DEALLOCATE DYNAMIC MEMORY 
    delete[] name;
    delete[] id;
    delete[] father;
    delete[] hod;

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}