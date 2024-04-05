// LAP ASSIGNMENT TWO CHANGE TWO CLASS DATA VALUES BY USING FRIEND FUNCTION 
// MAIN FILE OF THE PROGRAM 

#include <iostream> // INPUT/ OUTPUT STREAM OBJECT HEADER FILE

// SET ALL STANDARD NAMESPACES 
using namespace std;

// First CLASS DEFINITION 

// CLASS PROTOTYPE
class Second;

// FIRST CLASS DEFINITION 

class First {
    // FRIEND FUNCTION 
     friend void swap (First &val, Second &val2);
    public:
     First (); // CONSTRUCTOR
     ~First(); // DESTURCTOR
     void print () const {
        cout << "First Class = " <<  value << endl;
     }
    private:
    int value;
};

// FIRST CLASS DEFINITION
First::First () {
    int val;
    value  = 0;
    cout << "Enter value : ";
    cin >> val;

    value = val;
};

First::~First () {
    cout << "First Class Object is destoryed !";
}


// SECOND CLASS DEFINITION 

class Second {
    // FRIEND FUNCTION 
    friend void swap (First &val1, Second &val2);
    public:
     Second ();
     ~Second ();
     void print () const {
        cout << "Second class = " << value << endl;
     }
     private:
     int value;
};

// SECOND CLASS DEFINITION 
Second::Second () {
    value = 0;
    int val;
    cout << "Enter value : ";
    cin >> val;

    value = val;
};

Second::~Second () {
    cout << "Second class object is destoryed!" << endl;
}
// SWAP VALUES

void swap (First &val1, Second &val2) {
    int swap = val1.value;
    val1.value =  val2.value;
    val2.value = swap;

    // OUTPUT RESULT

    cout << "First Class = " << val1.value << endl;
    cout << "Second Class = " << val2.value << endl;
}

// HEADING OF THE MAIN () FUNCTION 
int main (void) {

     // CLASS OBJECT CREATION
     First objCall1;
     Second objCall2;   

     cout << "BEFORE SWAPPING -----" << endl;
      objCall1.print();
      objCall2.print();

     cout << "AFTER SWAPPING -----" << endl;
     swap (objCall1,objCall2);
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCESSFULY
}