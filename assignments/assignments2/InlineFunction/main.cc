// ASSIGNMENT 6
// COPY CONSTRUCTOR

// INCLUDING INPUT/OUTPUT STREAM OBJECT HEADER FILE
#include <iostream>

// SET ALL NAMESPACE OF STANDARD
using namespace std;

// INLINE FUNCTION 

inline int sum (int val1, int val2) {
    return val1 + val2;
};

// HEADING OF THE MAIN () FUNCTION 
int main (void) {

     // DECLARATION OF VARIABLE
     int val1,val2;
     cout << "Enter First value : ";
     cin >> val1;
     cout << "Enter Second Value : ";
     cin >> val2;
    
     cout << sum (val1,val2);
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}
