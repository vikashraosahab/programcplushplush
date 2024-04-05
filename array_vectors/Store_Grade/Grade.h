// CREATE CLASS 
/*
USE WRAPPER PRERPCESSOR FOR PREVENT CLASS DEFINITION MORE THAN ONE
*/
#ifndef STORE_GRADE
#define STORE_GRADE

#include <iostream> // INPUT/OUTPUT STREAM OBJECT PREPROCESSOR HEADER FILE

//#include "student_details.h" // INCLUDE FUNCTION THAT DECLARE AS FRIEND WITH IN CLASS

// USE NAMESPACE STRING STANDARD METHOD
using std::string;

class StudentsGrade {
    // DECLARE FRIEND FUNCTION FOR TAKING STUDENTS LENGTH FOR GETTING THEIR RESPECTIVE DEATAILS
    friend void StudentDetails (StudentsGrade &val);
  // PUBLIC ACCESS SPECIFIER
  public:
  
  // DECLARE TOTAL NUMBER OF STUDENTS STATICLY
  static const int studentLength = 10;
  
  StudentsGrade (const string &, const int *); // PARAMETERIZED CONSTRUCTOR 
  ~StudentsGrade(); // CLASS DESTURCTOR
  string getCourse() const; // CASCASE MEMBER FUNCTION
  inline int getMiniMarks () const;
  inline int getMaximunMarks () const;

  void gradeProcessing () const;
  void gradeBar() const;
  void outputGrade () const;
 

 // PRIVATE DATA MEMBER 
 private:
 const string courseName;
 int grades [studentLength];
};

#endif