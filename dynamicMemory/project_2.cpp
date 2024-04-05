#include <iostream>

#include <ctype.h>
#include <string.h>
using namespace std;

class Name {
   
   public:
   Name ();
   Name (char *s);
   ~Name ();
   void display ();
   void join ();

   private:
   char *name;
   int length;
};

// CLASS DEFINITION 
Name::Name () {
    length = 0;
    name = new char [length];
};

Name::Name (char *s) {
    length = strlen (s);

    name = new char [length + 1];
}
void Name::join () {
  
}

void Name::display () {
   std::cout << name;
};

Name::~Name () {
    std::cout << "Object is destroyed";
};

int main (void) {
     Name objCall("Vikash"),s1;
     s1.display();
    return 0;
}