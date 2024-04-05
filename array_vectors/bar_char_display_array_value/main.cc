// DISPLAY A CHART ACCORDINGLY ARRAY VALUE BASED ON ELEMENT 

#include <iostream> // INPUT / OUTPUT STREAM OBJECT HEADER FILE
#include "Display.h"
// USE SPECIFIC STANDARD NAMESPACE
using std::cout;
using std::cin;
using std::endl;

//#define MAX_LENGTH 10 // CREATE A SYMBOLIC CONSTANT FOR ARRAY SIZE

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // DECLARATION OF AN ARRAY
    const int MAX_LENGTH = 10;
    int array[MAX_LENGTH];

    Display display (array,MAX_LENGTH,"SHOW DISPLAY RESULT");
    
    return 0; // IT INDCIATE THAT PROGRAM EXECUTE SUCCESSFULLY
}