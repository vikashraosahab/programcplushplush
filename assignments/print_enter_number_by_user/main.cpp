// ASSIGNMENT -2 
// PRINT USER ENTER NUMBER
/*
PREPROCESSOR DIRECTIVE HEADER FILE 
*/
#include <iostream> // INPUT/OUTPUT STREAM HEADER FILE
#include "Header.h" // INCLUDE CLASS HEADER FILE

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    int number; // VARIABLE DECLARATION
    std::cout << "Enter User Number : " << std::endl;
    std::cin >> number;

    // CREATE AN OBJECT OF THE CLASS AS NAMED OBJHEADER
    Header objHeader;
    objHeader.setValue (number); // PASS VALUE WITH IN CLASS SETFUNCTION THAT ASSING VALUE WITHIN CLASS PRIVATE DATA MEMBER
    objHeader.displayMessage(); // DISPLAY OUTPUT STATE RESULT
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}