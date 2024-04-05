/*
 ************* VIRTUAL CLASS **************
 IT A CLASS PROPERTIES THAT REMOVE ALL COPIES DATA WITHIN AN CLASSES THAT ARE INHERITED 
*/

#include <iostream> 
#include <string.h>

#include "department.h"

#include "Testing.h"

// SET ALL NAMESPACE STANDARD 
using std::cout;
using std::cin;
using std::endl;
using std::string;

// DEFINE SYMBOLIC CONSTANT
#define MAX_LENGTH 50
// HEADING OF THE MAIN () FUNCTION 

int main (void) {
    // VARIABLE DECLARATIAONS
    char *name;
    char *age;
    char *d;
    char *hod;
    char *product;
    cout << "Enter name : ";
    
    // ASSIGN DAYMICALLY MEMEORY
    name = new char [MAX_LENGTH];
    
    cin.getline (name,MAX_LENGTH);
    
   // int length = strlen (name);


    cout << "Enter age : ";

    age = new char [MAX_LENGTH];

    // READ A LINE OF TEXT
    cin.getline (age,MAX_LENGTH);
     
     // PROMPT OUTPUT STATEMENT
    cout << "Enter department : ";
    
    // CREATE DYNAMIC MEMORY 
    d = new char [MAX_LENGTH];

    // READ A LINE OF TEXT UNITL IT'S NOT REACH IT'S LENGTH
    cin.getline (d,MAX_LENGTH);

    // OUTPUT STATEMENT (PROMPT)
    cout << "Enter hod name : ";
    hod = new char [MAX_LENGTH];
    cin.getline (hod,MAX_LENGTH);

    cout << "Enter product details (name) : ";
   
    product = new char [MAX_LENGTH];

    cin.getline (product,MAX_LENGTH);

    // CREATE AN OBJECT OF THE CLASSES
  
    WebDesigning web (
        d,
        hod,
        product
    );
    web.print ();
    
    // CLASS TESTING IS EXPLICILTY CALLING
    TestDepartment tested (
        name,
        age,
        d,
        hod,
        product,
        "passed"
    );
    tested.print();


    delete[] name;
    delete[] age;
    delete[] d;
    delete[] hod;
    delete[] product;

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}