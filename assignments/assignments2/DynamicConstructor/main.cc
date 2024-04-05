/* 
******************* ASSIGNMENT 2 *******************
*********  DYNAMICALLY MEMORY ALLOCATION  **********
*/

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM HEADER FILE

#include "Person.h" // INCLUDE HEADER FILE
// USE NAMESPACE STANDARD
using std::cout;
using std::cin;
using std::endl;


// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    Person p1 ("Vikash"),p2 ("Yadav"),s1,s2;
    p1.displayMessage();
    p2.displayMessage();
    s1.join ("Vikash"," yadav");
    s2.join ("Vikash"," Raosahab");
    s1.displayMessage();
    s2.displayMessage();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULY
}