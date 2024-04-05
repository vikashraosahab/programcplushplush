// STATIC ARRAY AND AUTOMATIC ARRAY CREATION 
// CREATE AN ARRAY THAT IS STATIC IN NATURE
/*
STATIC ARRAY ARE INITIALIZE WITH ZERO THEN IT'S NOT EXPLICITLY INITIALIZE AFER DECLARATION
IT'S SHARE LAST INITIALIZE VALUE WITH THE INDEX 
*/
#include <iostream> // PREPROCESSOR DIRECTIVE HEADER FILE OF INPUT/OUTPUT STREAM OBJECT

// SET IMPORTANT STANDARD INPUT/OUTPUT NAMESPACE  FOR USE
using std::cout;
using std::cin;
using std::endl;


// SYMBOLIC CONSTANT FOR ASSIGNING ARRAY SIZE
#define MAX_LENGTH 5

// FUNCTION PROTOTYPE FOR STATIC ARRAY
void staticArray (void);

// FUNCTION PROTOTYPE FOR AUTOMATIC ARRAY
void autoArray (void);

// HEADING OF THE MAIN () FUNCTION 

int main (void) {
   // CALLING FUNCTION 

   cout << "First Time Calling  function " << endl;
   cout << "\n\tAutomatic Array : " << endl;
   autoArray (); 
   cout << "\n\tStatic Array : " << endl;
   staticArray ();

   cout << "Second Time Calling Function " << endl;
   cout << "\t\t Automatic Array : " << endl;
   autoArray ();
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
};

// FUNCTION DECLARATION 
void staticArray (void) {
  
  cout << "This is Static Array" << endl;
  // ARRAY DECLARATION   
  static int arry[MAX_LENGTH];

  cout << "\t OUTPUT ARRAY WITHOUT INITIALIZATION " << endl;

  for (int i = 0; i < MAX_LENGTH; i++)
   cout << "Array [ " << i << " ]" << arry[i] << endl;

  for (int i = 0; i < MAX_LENGTH; i++)
  cout << "Array [ " << i << " ]" << (arry[i] += 5) << endl;
};
// END OF THE STATIC ARRAY SECTION 

// FUNCTION DECLARATION OF AUTOMATIC ARRAY

void autoArray (void) {

  cout << "This is Automatic array " << endl;

  // ARRAY DECLARATIONS
  int array [MAX_LENGTH] = {1,2,3,4,5};

 cout << "\tOUTPUT OF ARRAY WITHOUT INITIALIZATION " << endl;
  for (int i = 0; i < MAX_LENGTH; i++)
    cout << "ARRAY [ " << i << " ]" << array[i] << endl;

 cout << "\tOUTPUT OF ARRAY AFTER Modifiy Array " << endl;
 for (int i  = 0; i < MAX_LENGTH; i++) {
   cout << (array[i] += 5) << endl;
 }

}


 