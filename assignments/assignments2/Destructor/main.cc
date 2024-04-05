// ASSIGNMENT 
// DESTURCTOR 

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "Person.h"

using std::cout;
using std::cin;
using std::endl;

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    const char *name = "vikas Yadav";
    int age;
    cout << "Enter age : ";
    cin >> age;

     Person p1(name,&age); // Pass the address of the integer value for age
     p1.display();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE 
}