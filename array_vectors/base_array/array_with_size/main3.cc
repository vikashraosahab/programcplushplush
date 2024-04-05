// INITIALZIE AN ARRAY THAT IS DECLARED WITH GIVEN ARRAY SIZE
// ARRAY INITILIZIE BY VALUE THAT INPUT BY USER HIMSELF

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM HEADER FILE
#include <iomanip> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT MANIPULATION HEADER FILE

// SETTING OF STANDARD NAMESPACE FOR USING BY USING using KEYWORD THAT PROVIDE BY C++
using std::cout; // FOR STANDARD  OUTPUT
using std::cin; // FOR STANDARD INPUT
using std::endl; // FOR STANDARD END OF LINE
using std::setfill; // FOR SETFILL 
using std::setw; // FOR SETWIDTH 

// MAIN () FUNCTION OF THE PROGRAM
int main (void) {
    // CONSTANT INTEGER VARIALBE DECLARATIONS FOR ARRAY SIZE
    // CONSTANT VARIABLE IS BETTER THAN LITERAL VARIABLE FOR SIZE OF AN ARRAY 
    // IT PROVIDE RELIABILITY AND SCALABILITY IN LARGE PROGRAMS
    const int length = 10;

    // DECLAREA AN ARRAY WITH SIZE
    std::string name [length];

    // INITIALZE IT WITH STRING BY USING LOOP
    for (int i = 0; i < length; i++) {
        cout << "Enter Name of person : " << i + 1 << endl; // OUTPUT STATEMENT
        //cin >> name[i];
        getline (cin, name[i]); // INPUT STATEMENT
       // cin.getline (name[i],10); IT USE FOR DATA TYPE WITH POINTER 
    }

   // DISPLAYING OUTPUT OF NAME THAT STORE PEOPLE NAME
   // BY USING LOOP  
    for (int i = 0; i < length; i++) {
        cout << "Person " << i + 1 << " :  " << name[i] << endl; // OUTPUT STATEMENT
    }

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}