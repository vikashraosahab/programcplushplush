// STREAM INSERTION OPERATOR OVERLOADING

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::operator<<;

class output {
    friend ostream &operator<<(ostream &out, const output &val) {
     out <<  "Name : " << val.name << "\n" << 
      "Age : " << val.age;

      return out;
    };

    private:
    string name = "Vikas Yadav";
    int age = 20;
};


// HEADING OF THE MAIN () FUNCTION 

int main (void) {

    output val;
    cout << val;
     
    return 0;
}