// LINEARSEARCHING 

#include <iostream>
#include "Header.h"
#include "Searching.h"

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    
    // DECLARE AND DEFINE CONSTANT INTEGER ARRAY
    const int ary[] = {48,8,4,2,32,77,99,54,37,72};

    const int length = sizeof (ary) / sizeof (int);

    // CREATE CLASS OBJECT
    static int key;
    std::cout << "Enter key value : ";
    std::cin >> key;
    Data d1 (key);

    int value = Searching (d1, ary,length);

    if (value != -1) {
        std::cout << "Value found at element : " << value;
    }
    else std::cout << "Sorry Value not found!";
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}