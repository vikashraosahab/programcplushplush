// CLASS DEFINITION SECTION 

#include "Grade.h" // INCLUDE GRADE CLASS HEADER FILE
#include <iomanip>

// USE ALL NAMESPACE STD
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setfill;
using std::setw;

// CONSTURCTOR DEFINITION SECTION
StudentsGrade::StudentsGrade (
    const string &course,
    const int *grade
):courseName (course) /* COPY CONSTRUCTOR THAT INITIALIZE COURSE WITH IN COURSENAME DATA MEMBER*/
{
 
 // INITIALZATION PRIVATE DATA MEMBER BY ARRAY
 for (int i = 0; i < StudentsGrade::studentLength; i++) {
     grades[i] = grade[i];
 }
}

inline int StudentsGrade::getMiniMarks () const {
   int lowGrade = 100;

   for (int i = 0; i < studentLength; i++ ) {
     if (grades[i] < lowGrade) {
        lowGrade = grades[i];
     }
   }

   return lowGrade;
} 

inline int StudentsGrade::getMaximunMarks () const {
     int highGrade = 0;

     for (int i = 0; i < studentLength; i++) {
        if (grades[i] > highGrade)
        {
            highGrade = grades[i];
        }
     }

     return highGrade;
}

void StudentsGrade::gradeProcessing () const {
   cout << "Course Name : " << getCourse () << endl;
   outputGrade();
   cout << "\nLowest Student Marks : " << getMiniMarks () << endl;
   cout << "Highest Student Marks : "<<getMaximunMarks () << endl;
   cout << "No. of Students that get same marks : " << endl;
   //gradeBar ();
   gradeBar ();
}

void StudentsGrade::outputGrade () const {
    cout << "\tStudents Grades : " << endl;
   
   for (int grade = 0; grade < studentLength; grade++)
    cout << "Students " <<
    setfill ('0') << setw (2) << grade + 1 
     << " : " <<  setw (2) << grades[grade] << endl;
}

string StudentsGrade::getCourse () const {
    return this-> courseName;
}

void StudentsGrade::gradeBar () const
{
  
  int frequencysize = 11;
  int frequence [frequencysize] = {};

  for (int grade = 0; grade < studentLength; grade++) {
    frequence [grades[grade] / studentLength]++;
  }

  for (int count = 0; count < frequencysize; count++) 
  {
     if (count == 0) {
      cout << "00 - 09 : ";
     }
     else if (count == 10) {
      cout << "100 : ";
     }
     else cout << count * 10 << "-" << 
     (count * 10) + 9 << ": ";

     for (int star = 0; star < frequence [count]; star++) 
     {
        cout << '*';
     }
     cout << endl;
  }
}

StudentsGrade::~StudentsGrade () {
    cout << "\n\n Object is destoryed ! Now" << endl;
}