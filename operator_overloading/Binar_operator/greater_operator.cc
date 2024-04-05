#include <iostream>

using namespace std;

class Sum {

 public:
 Sum (const int &val):value (val) {};
 
  int operator> (const Sum &val) {
    if (value > val.value) 
     return 1;

     return 0;
  }

 private:
 int value;
};

int main (void) {

    Sum val (50);
    Sum Val2 (40);
    
   switch (val.operator> (Val2)) {
      case 1: 
      cout << "Val is greater" << endl;
      break;
      case 0:
      cout << "VAl2 is greater" << endl;
      break;
      default :
      cout << "This is default" << endl;
   }
    return 0;
}