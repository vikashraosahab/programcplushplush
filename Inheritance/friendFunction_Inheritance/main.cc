// CREATE A FUNCTION HYBRID CLASS INHERTIANCE
#include <iostream> // INPUT/OUTPUT STREAM OBJECT HEADER FILE

#include "child1.h"
#include "Child2.h"
#include "Base2.h"
#include "friendFunction.h"


// HEADING OF THE MAIN () FUNCITON 
int main (void) {
    Child1 objChild (2039484,"vikash",20);
    objChild.display();  



   message (objChild);


   Base2 obj ("Vikash",3);
   obj.print ();
   
   Childs objs;
   objs.setValue ();
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}