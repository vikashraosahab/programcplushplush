// CREATE A NAMESPACE WHERE ONLY DEFINE VARIABLE
// NAMESAPCE

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/ OUTPUT STREAM OBJECT HEADER FILE

// CREATE NAMESPACE SCOPE
namespace myVar {
     const std::string bookName = "Think and Grow rich ";
     static const std::string bookAuthor = "Nepolean Hill";
}

const std::string bookName = "Zero to One";

// HEADING OF THE MAIN () FUNCITON 
int main (void) {
   std::cout << bookName << std::endl;
   
   // FIRST INNER-BLOCK OPEN CURLY BRACKET
     {
        // FIRST INNER-BLOCK AREA
       std::cout << myVar::bookName << std::endl;
       std::cout << bookName << std::endl;
        {
            // SECOND INNER-BLOCK AREA
            const std::string bookName = "The Psychology of Money";
            std::cout << bookName << std::endl;
            std::cout << ::bookName << std::endl;
            std::cout << myVar::bookAuthor << std::endl;
        }
     }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}