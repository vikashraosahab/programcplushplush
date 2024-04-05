// CLASS DECLARATION 

#include <iostream>
using std::string;
class Person {
   
   public:
   int length;
   Person (); // DEFAULT CONSTRUCTOR
   Person (const char *name, const int *age); // PARAMETERIZED CONSTRUCTOR
   ~Person (); // DESTRUCTOR 
   Person &display();
   //void join (const string &, const string &);
   private:
   char *name;
   int *age;
};