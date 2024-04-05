#include <iostream>

using namespace std;

class Value {
   
   friend ostream &operator<< (ostream &res, const Value &val) {
     res << val.value << endl;
     return res;
   }
  public:
  Value (const int &val) {
    value = val;
  }
  
  Value &operator++ ();
  private:
  int value;
};

Value &Value::operator++ ()  {
    Value (++value);
    return *this;
}

int main (void) {
     Value v (20);
    cout << v << endl;
    // v.print ();
     v.operator++();
     v.operator++();
     v.operator++();
     cout << v << endl;
    return 0;
}