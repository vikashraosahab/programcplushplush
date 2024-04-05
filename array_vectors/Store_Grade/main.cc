// STUDENTS GRADE STORE IN AN ARRAY AND SHOW BAR ACCORDINGLY THEIR NUMBER 

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT HEADER STREAM

#include "Grade.h" // IMPORT CLASS HEADER FILE
#include "student_details.h" // IMPORT FUNCTION HEADER FILE

// USE ALL NAMESPACE FOR STD
using std::cout;
using std::cin;
using std::endl;
using std::string;

// HEADING OF THE MAIN () FUNCTION OF THE PROGRAM
int main (void) 
{
  int arry[StudentsGrade::studentLength] = {
    55,68,88,93,94,96,23,55,34,100
  };
  StudentsGrade s1 ("C++",arry);
  
  StudentDetails (s1);
  s1.gradeProcessing ();
  return 0; // IT INDICATE THE PROGRAM EXECUTE SUCCESSFULLY
}