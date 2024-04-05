// FUNCTION THAT CALLEND FRIEND WITH IN GRADE CLASS
#include <iostream>
#include "Grade.h" // INCLUDE CLASS GRADE HEADER FILE

using std::cout;
using std::endl;


void StudentDetails (StudentsGrade &val) {
  cout << "Total Number of students : ";
  cout << val.studentLength << endl;
}