#include <iostream>
#include <string.h>

using namespace std;

class Strings {
  
  // STREAM EXTRACTION 
  friend ostream &operator<< (ostream &output,Strings &val) {
    output << val.name;

    return output;
  };

  friend istream &operator>> (istream &input, Strings &val) {

    input >> val.name;

    return input;
  }

 public:
 
 Strings operator!=(const Strings &val){
    if (name != val.name)
     cout << "Not Same";
    else 
    cout << "Same";
 }
 private:
 string name;
};


int main () {
    Strings s1;
    cin >> s1;
    cout << s1;

    Strings s2;
    cin >> s2;

    s1 != s2;
    return 0;
}