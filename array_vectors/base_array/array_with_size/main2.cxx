// INITIALZIE ARRAY BY USING LOOP THAT DECLARATION WITH A CONSTANT LENGTH

// INCLUDE PREPROCESSOR DIRECTIVE HEADER FILES
#include <iostream> // INPUT / OUTPUT STREAM OBJECT HEADER FILE
#include <iomanip> // INPUT/OUTPUT MANIPULATION HEADER FILE

// SET STANDARD NAMESPACE METHODS (cout,cin,endl,setfill,setwidth) 
// FOR SETTING OF STANDARD NAMESPACE MEHTODS, WE USE USING KEYWORD
using std::cout;
using std::cin;
using std::endl;
using std::setfill;
using std::setw;

// HEADING OF THE MAIN () FUNCITON 
int main (void) {
   // DECLARATION AND INITILIZATION OF CONST VARIABLE FOR ARRAY SIZE
   /*
    CONSTANT VARIABLE IS MORE SCALABLE FOR ARRAY SIZE INSTEAD 
    LITERAL VARIABLES. IN LARGE PROGRAM IT MAKE CODE MORE RELIABLE AND CLEAN.
   */
  const int MAX_SIZE = 10;

  // DECLARATION OF AN ARRAY
  int array [MAX_SIZE];

  // INITIALIZATION OF THE ARRAY BY USING LOOP (WHILE,DO/WHILE OR FOR LOOP)
  int index = 0;

  cout << "ARRAY INITILIZATION PROGRAM BY USING LOOP " << endl;
  for (index; index < MAX_SIZE; ++index) {
     array [index] = 5 + index * 2 ; 
     cout << "Index = " << index << endl; // INITIALZIE ARRAY BY INTERATION AS ELEMENTS OF ARRAY ON PARTICULAR MEMORY ADDRESS OF ARRAY
  } 


  std::cout << array[0] << endl;
  // FOR GETTING ARRAY ELEMENTS AS OUTPUT BY USING LOOP
  int count = 0;

  while (count < MAX_SIZE) {
    cout << setfill ('0') << setw (5) << array [count] << endl;
    count++;
  }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULY
}

