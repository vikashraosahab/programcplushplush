// DECLARAE AN ARRAY AND ASSIGN IT BY USING LOOP

#include <iostream> // INPUT/OUTPUT STREAM OBJECT HEADER FILE
#include <iomanip> // INPUT/OUTPUT MANIPULATOR OPERATOR


// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // ARRAY DECLARATIONS WITH INITILIZERS - LIST
    int array[] = {};

   // INITIALIZAING ARRAY VIA LOOP 
    for (int i = 0; i < 15; i++) {
        array[i] = i; // INITILIAZIE ARRAY WITH INTERATION VALUE
    };

    int count = 0;
     
    while (count <14) {
        std::cout << count <<  " = " << std::setfill ('0') << std::setw (3) << array[count] << std::endl;
        count++;
    }

    
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}