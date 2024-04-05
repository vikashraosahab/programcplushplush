// CREATE A NAMESAPCE AND INSIDE NAMESPACE DECLARE A FUNCITON 
#include <iostream> // PREPROCESSOR DIRECTIVE HEADER OF INPUT / OUTPUT STREAM OBJECT

// CREATE A NAMESPACES
// FIRST NAMESPACE IS HERE

namespace myFunction {
  void myFunction1 () {
    std::cout << "Hey Krishna !" << std::endl;
  };
} 

// SECOND NAMESPACE IS HERE
namespace myFunction {
   void myFunction2 (){
     std::cout << "Hello, Krishna !" << std::endl;
   };
} /* NAMESPACE DOESN'T REQUIRED SEMICOLON AT THE END */


// THIRD NAMESPACE WITH DIFFERENET FUNCTION 
namespace ThirdName {
 // NAMESPACE METHOD
 void myGobalFun () {
    std::cout << "Hello, Vikash Yadav with Namespace " << std::endl;
 };
}
// CALLING NAMESPACE METHODS
// FIRST NAMESPACE CALLED 
/* FOR CALLING NAMESPACE WE USE USING DIRECTIVE */
using namespace myFunction;

// GLOBAL FUNCTION 

void myGlobalFun () {
    std::cout << "Hello, Krishna Globally " << std::endl;
};
// MAIN () FUNCTION OF THE PROGRAM 
int main (void) {
    myFunction2 ();
    myFunction1 ();
    // CALLING GLOBAL FUNCTION 
    myGlobalFun ();
    
    // CALLING SAME FUNCTION WITH DIFFERENTIATE NAME WITH THE HELP OF NAMESPACE
    // CALL NAMESAPCE FUNCTION WITH THE HELP OF NAMESPACE AND USE SCOPE RESOLUTION OPERATOR (::)
    ThirdName::myGobalFun(); 
    // INSIDE BLOCK
     {
        std::cout << "INNER - BLOCK " << std::endl;
       ThirdName::myGobalFun ();
       myFunction::myFunction1 ();   
       myFunction::myFunction2 (); 
     }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULY
}