// COMPUTE SUM OF ARRAY VALUES

#include <iostream>
#include <iomanip>

#include "result.h"

using std::cout;
using std::cin;
using std::endl;
using std::setfill;
using std::setw;

// HEADING OF THE MAIN () FUNCTION 
int main (void)  {
    // DECLARATION OF CONSTANT VARIABLE FOR ARRAY SIZE
    const int maxLength  = 7;

    // DECLARATION OF AN ARRAY 
    int array[maxLength];
    // CREATE AN OBJECT OF THE CLASS
    Result sum (array,maxLength,"OUTPUT RESULT");
    sum.getResult(array,maxLength);
    
    cout << "\n\n OUTPUT OF ALL ELEMENTS OF THE ARRAY : " << endl;
    // PRINT ALL ELEMENTS OF THE ARRAY 
   // sum.getResult (array,maxLength);

  
    return 0; // INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}