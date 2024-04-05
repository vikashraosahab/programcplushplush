#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::operator+;
using std::istream;
using std::operator>>;

class Sum {
    // ISTREAM FRO INPUT
    // EXTRACTION OPERATOR OVERLOADING
  
     friend istream &operator>> (istream &getting, Sum &val) {
        getting >> val.value1;
        getting >> val.value2;
        return getting;

     }
    public:
    void operator+ (const Sum &val1){
        cout << "Val " << value1 << " + val2 " << value2 << " = "
        << value2 + val1.value1 << endl;
    }
    void print () const {
        cout << "VAlue 1 : " << this->value1 << endl;
        cout << "Value 2 : " << this->value2 << endl;
    }
   private:
   int value1;
   int value2;
};


int main (void) {
     Sum val;
     cin >> val;

     Sum val2;
     cin >> val2;
     val.operator+ (val2);
    
     cin >> val2;
    return 0;
}