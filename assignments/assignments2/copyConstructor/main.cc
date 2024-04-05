// ASSIGNMENT 
// COPYCONSTRUCOTR 

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT HEADER FILE
#include "Cars.h" // INCLUDE CLASS HEADER FILE

// USE STANDARD NAMESPACE OF INPUT/OUPTUT STREAM OBJECT
using std::cout;
using std::cin;
using std::endl;

// HEADING OF THE MAIN () FUNCTION 

int main (void) {
     
     const int myCarNumber = 248475347;
     char *name = new char [10];
     char *model = new char [10];
      char *color = new char [10];
      cout << "Enter Company Name : ";
      cin.getline (name,10);
      cout << "Enter Model Name : ";
      cin.getline (model,10);
      cout << "Enter Model Color : ";
      cin.getline (color,10);
     // CREATING CLASS OBJECT 
     Cars myCar (name,model,&myCarNumber,color),myCar1,myJoin;
     myCar.display ();


     delete[] name;
     delete[] model;
     delete[] color;
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}