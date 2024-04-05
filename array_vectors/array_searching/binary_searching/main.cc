// SORTING UN SORTED ARRAY BY INSERTION SORT
// SEARCH A PARTICULAR KEY ELEMENT IN SORTED ARRAY BY USING BINARY SEARCH

#include <iostream>
#include "Data.h"
#include "binary_search.h"

// MAIN FUNCTION OF THE PROGRAM 
int main (void) {
    
    const int length = 10;


    // CREATING AN OBJECT OF THE CLASS
    Data d1;

    int result = BinarSearch (d1);
     
     if (result != -1) {
        std::cout << result;
     }
     else std::cout << result;
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}