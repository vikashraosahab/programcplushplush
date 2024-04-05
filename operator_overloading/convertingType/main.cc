#include <iostream>

using namespace std;

class S {

    friend ostream &operator<< (ostream &output, const S &val) {
        output << val.value << endl;

        return output;
    }
  
  public:
    
    // TYPE CONVERSION 

     &operator float (){
        return *this;
     };
  private:
  int value = 50.32;
};


int main (void) {

    S val;

    cout << val;
    val.operator float();
    cout << val;
    return 0;
}