// CHECK THE GIVEN NUMBER IS EVEN OR ODD
#include "Checking.h" // INCLUDE HEADER FILE
#include <iostream>

// SET ALL THE NAMESPACE STD
using namespace std;

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    int value;
    cout << "Enter number ..... " << endl;
    cin >> value;

    // CREATE A OBJECT OF THE CLASS
    Checking objValue (value);
    objValue.EvenOrOdd();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}