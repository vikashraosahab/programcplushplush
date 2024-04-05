// IMPORT CLASS DECLARATION FILE
#include "Student.h"
#include <iostream>
#include <string.h>
// USE NAMESAPCE STANDARD 
using std::cout;
using std::cin;
using std::endl;


// DATA MEMBERS INITIALIZE WITH IN DEFAULT CONSTRUCTOR
Students::Students () {
   length = 0;
    // STUDION 
    name = nullptr;
    father = nullptr;
    department = nullptr;
    course = nullptr;
    studentId = nullptr;
    age = nullptr;
    startYear = nullptr;
    endYear = nullptr;
    courseDuration = nullptr;
};

Students::Students (
    const char *n,
    const char *f,
    const char *d,
    const char *c,
    const char *sId,
    const char *a,
    const char *sY,
    const char *eY,
    const char *cD
) {
    length = strlen (n);
    name = new char [length + 1];
    // COPY N CHARACTERS WITHIN NAME
    strcpy (name,n);
    length = strlen (f);
    father = new char [length + 1];
    strcpy (father,f);
    
    length = strlen (d);
    department = new char [length + 1];
    strcpy (department,d);

    length = strlen (c);
    course = new char [length];
    strcpy (course,c);

    length = strlen (sId);
    studentId = new char [length];
    strcpy (studentId,sId);

    length = strlen (a);
    age = new char [length];
    strcpy (age,a);

    length = strlen (sY);
    startYear = new char [length];
    strcpy (startYear,sY);
    
    length = strlen (eY);
    endYear = new char [length];
    strcpy (endYear,eY);
    
    length = strlen (cD);
    courseDuration = new char [length];
    strcpy (courseDuration,cD);
};


Students &Students::display () {
    cout << "\n\n Student Registration ::::::::: \n\n";
    cout << "Student's Name : " << this->name << endl;
    cout << "Student's Father : " << this->father << endl;
    cout << "Department : " << this->department << endl;
    cout << "course : " << this->course << endl;
    cout << "StudentId : " << this->studentId << endl;
    cout << "Age : " << this->age << endl;
    cout << "Start Year : " <<this->startYear << endl;
    cout << "End Year : " << this->endYear << endl;
    cout << "courseDuration : " <<this->courseDuration << endl;
};

Students::~Students () {
    cout << "\n\nObject is destroyed Now !\n\n" << endl;
    delete[] name;
    delete[] father;
    delete [] department;
    delete [] course;
    delete[] studentId;
    delete age;
    delete startYear;
    delete endYear;
    delete courseDuration;
};