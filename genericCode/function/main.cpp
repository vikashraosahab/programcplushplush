// USE GENERIC PROGRAMMING METHODS
// CREATE FUNCTION WITH HELP OF TEMPLATES 
// AVOID FUNCTION OVERLOADING

#include <iostream> // PREPROCESSOR DIRECTIVE HEADER FILE

// ENABLE SPECIFIC METHOD NAMESPACE STD
using std::cout;
using std::cin;
using std::endl;
using std::string;

// SYMBOLIC CONSTANT 
#define MAX_LENGTH 5

// CREATE TEMPLATE FUNCTION TYPENAME (USER-DEFINE DATA TYPE )

template <typename Array>

Array myBookName (Array ary[]) {
    for (int i = 0; i < MAX_LENGTH; i++) {
        return ary[i];
    };
};

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    

    // DELCARATION OF THE BOOK ARRAY
    string books[MAX_LENGTH] = {"Zero","hero","tero","mero","kero"};
    char books2[MAX_LENGTH] = {'z','h','t','m','k'};
    int values[MAX_LENGTH] = {1,3,4,5,5}; // 
    myBookName <string> (books); // STRING 
    myBookName <char> (books2); // CHAR 
    myBookName <int> (values); // INT
    return 0; // IT INDICAT THAT PROGRAM EXECUTE SUCCESSFULLY
};
