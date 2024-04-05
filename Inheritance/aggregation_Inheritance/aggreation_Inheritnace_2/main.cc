// AGGREGATION INHERITANCE 
#include <iostream>
#include "Class2.h" // INCLUDE HEADER 

int main (void) { 
    Time t(3,4,5);
     
     Booking B = Booking("VIKASH",200.4553,&t);

     B.print();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}