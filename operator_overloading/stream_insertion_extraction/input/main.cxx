// STREAM EXTRACTION OPERATOR OVERLOADING

#include <iostream> // INPUT/OUTPUT STREAM OBJECT

using std::cout;
using std::cin;
using std::istream;
using std::operator>>;
using std::ostream;
using std::operator<<;


// CRAETING A CLASS

class Input {
  friend istream &operator>>(istream &input, Input &val) {

    val.name = new char[20];
    
    operator>>(input,val.name);

    return input;
  }

  friend ostream &operator<<(ostream &output, const Input &val) {
     
    operator<< (output,val.name);
    return output;
  };

  public:
  ~Input ();

  private:
  char *name;
};

Input::~Input () {
    delete[] name;
}

int main (void) {
     
     Input val;

     cin >> val;

     cout << val;
     
    return 0;
}