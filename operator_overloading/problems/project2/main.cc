// COMPARE TWO VALUE 
// EQUALITY OPERATOR OVERLOADING 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::operator==;

class Class {
  public:
   Class (const int &val) {
     value = val;
   }
  void operator== (const Class &);
  private:
  int value;
}; 


void Class::operator== (const Class &val) {
    if (value == val.value) {
      cout << "Both are equal";
    }
    else {
        cout << "First value : " << value << endl;
        cout << "Second Value : " << val.value << endl;
        cout << "Both are not equal";
    }
}


int main (void) {

    Class x (30);
    Class y (35);

    x.operator== (y);
    return 0;
}