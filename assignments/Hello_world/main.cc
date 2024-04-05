// CREATE AN HELLO_WROLD PROGRAM

// INCLUDE PREPROCESSOR DIRECTIVE HEADER FILES
#include <iostream>
#include <string.h>

// USE ALL NAMESAPCE FOR STD 
using namespace std;

// DECLARE A CLASS NAMED AS GREET

class Greet {
    
    // PUBLIC ACCESS SPECIFIER
    public:
    Greet (const string &); // CREATE AN CONSTRUCTOR
    ~Greet(); // CREATE AN DESTRUCTO
    void displayMessage ();
   // PRIVATE ACCESS SPECIFIER
   private:
   string greeting;
};

// CLASS DEFINITION
Greet::Greet (const string &greets):greeting (greets){};
Greet::~Greet () {
    cout << greeting << " is beging program is terminated now!" << endl;
};

void Greet::displayMessage () {
    cout << greeting << endl;
};
// HEADING OF THE MAIN () FUNCTION
int main (void) {
    string greet; // VARIABLE DECLARATIONS
    cout << "Enter your greeting... "<< endl; // OUTPUT STATEMENT AS PROMPT
    getline (cin,greet); // INPUT STATEMENT 

   // CREATE AN OBJECT FOR CLASS GREET 
   Greet objGreeting (greet);
   /*
    CALLING DISPLAYMESSAGE() BY USING OBJECT OF THAT CLASS
   */
  objGreeting.displayMessage(); // SHOW MESSAGE AS OUTPUT RESULT

   return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
};