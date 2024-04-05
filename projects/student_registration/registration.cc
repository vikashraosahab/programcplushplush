// CLASS DEFINITION SECTION 
#include "registration.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Registration::Registration (
    char *studentName,
    char *studentId,
    char *studentFather,
    const string &studentDepartment,
    char *departmentHOD
) {
 int length = 0;
 // GET LENGTH OF STUDENT NAME
 length = strlen (studentName);
 name = new char [length];
 strcpy (name,studentName);
 // GET LENGTH OF STUDENT ID
 
 length = strlen (studentId);

 id = new char [length];
 strcpy (id,studentId);

 // GET LENGTH OF STUDENT FATHER NAME
 length = strlen (studentFather);

 father = new char [length];

 strcpy (father,studentFather);

// GET LENGTH OF THE DEPARTMENT HOD NAME
length = strlen (departmentHOD);

hod = new char [length];

strcpy (hod,departmentHOD);

department = studentDepartment;

 if (
    department == "btech" ||
    department == "Btech" ||
    department == "BTECH" ||
    department == "BTech"
 ) {
    Btech::getData();
    
 }
 else if (
    department == "BCA" ||
    department == "Bca" ||
    department == "bca"
 ) {
    Bca::getData();
 }
 else {
    cout << "Department is not valid!" << endl;
 }


};

// DISPLAY OUTPUT 
void Registration::print () const {
cout << "\n\n\nREGISTERATION SUCCESSFULLY - \n\n" << endl;
cout << "Student Name : " << this->name << endl;
 cout << "Student Id : " << this->id << endl;
 cout << "Student Father : " << this->father << endl;
 cout << "Student Department : " << this->department << endl;
 cout << "Department HOD : " << this->hod << endl;
  
   if (
    department == "btech" ||
    department == "Btech" ||
    department == "BTECH" ||
    department == "BTech"
 ) {
    Btech::display();
    
 }
 else if (
    department == "BCA" ||
    department == "Bca" ||
    department == "bca"
 ) {
    Bca::display();
 }
 else {
    cout << "Department is not valid!" << endl;
 }
 
};


// DEFINITION OF DESTRUCTOR
Registration::~Registration () {
    cout << "Object is destoryed " << endl;
    delete[] name;
    delete[] id;
    delete[] father;
    delete[] hod;
};