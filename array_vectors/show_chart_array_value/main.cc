#include <iostream>

#include "Chart.h"

using namespace std;

// HEADING OF THE MAIN () FUNCTION 
int main (void) {

    const int size = 11;

     // DECLARATION OF AN ARRAY
     int array [size];

     // CREATE AN OBJECT 
     Chart bar (array,size);

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}