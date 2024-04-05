// ASSIGNMENT - 6

#include <iostream> // INPUT/OUTPUT STREAM OBJECT HEADER FILE

using namespace std;

#include "checking_ch.h"

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    char ch;
    cout << "Enter a character : " << endl;
    cin >> ch;
    
    // CREATE OBJECT OF THE CLASS
    CheckingCh objCh (ch);

    objCh.CheckCharacter();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}