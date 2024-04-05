// CLASS DEFINTION SECTION
// DEFINITION EVERY CLASS

#include "Cars.h" // INCLUDE CLASS DEFINITION HEADER FILE

#include <iostream> // INCLUDE PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT FILE

#include <string.h>  // INCLUDE PREPROCESSOR STRING HEADER FILE

// USE STADNARD NAMESPACE OF INPUT/OUTPUT OBJECTS
using std::cout;
using std::cin;
using std::endl;

// CLASS INITILIZATION 

Cars::Cars () {
   length = 0;
   brand = new char [length];
   carModel = new char [length];
   numberPlate = new int (0);
   color = new char [length];
    
};

Cars::Cars (const char *company, const char *model, const int *number, const char *colors) {
    //length = strlen (model);
    brand = new char [strlen (brand)];
    carModel = new char [strlen (model)];
     strcpy (brand,company);
     strcpy (carModel,model);
    numberPlate = new int (*number);
    color = new char [10];
    strcpy (color,colors);
};

Cars &Cars::display () const{
    cout << "MyBrand : " << brand << endl;
    cout << "Number : " << *numberPlate << endl;
    cout << "Model : " << carModel << endl;
    cout << "Color : " << color << endl;
};

Cars &Cars::joinDetails (const char *a, const char *b, const int *number, const char *c) {
   
}

