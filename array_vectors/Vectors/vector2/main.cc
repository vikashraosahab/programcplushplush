#include <iostream>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;


void inputState (vector <int> &);
void outputState (vector <int> &);

// HEADIN OF THE MAIN  () FUNCTION 

int main (void) {
   
 // DECLARE VECTOR
 vector <int> value1(5);
 vector <int> value2(5);

 inputState (value1);
 outputState (value1);

 cout << "Second Vector" << endl;
 inputState (value2);
 outputState (value2);

 cout << "Vector  3  : " << endl;
 
 vector <int> value3 (5);

 value3 = value1;n 
  
 cout <<  "Length of the vector is : " << value3.size() << endl;
 outputState (value3);

 if (value2 == value1) {
    outputState (value2);
 }
 else {
    cout << "Not same same ";
 }
 return 0;
};

void inputState (vector <int> &val) {

    for (int i = 0; i < val.size (); i++) 
     cin >> val[i];
}

void outputState (vector <int> &val) {
   size_t i; // UNSIGNED INTEGER I;
    for (i = 0; i < val.size (); i++)  {
      cout << setw (12) << val[i];

      if ((i + 1) % 4 == 0) {
         cout << endl;
      }
    }

    if (i % 4 != 0) {
      cout << endl;
    }
}
