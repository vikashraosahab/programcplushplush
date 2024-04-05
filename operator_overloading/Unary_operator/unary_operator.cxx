#include <iostream>

using std::cout;
using std::cin;
using std::operator+;
using std::ostream;
using std::operator<<;
using std::endl;

class A {

    public:

    A (const int &, const int &);
    A (const int &);

    A operator+ (const A &) const;

    friend ostream &operator<< (ostream &, const A &);

    private:
    int val1;
    int val2;
};

ostream &operator<< (ostream &output, const A &val) {
    output << val.val1 << " ";
    //output << val.val2 << endl;

    return output;
}
// INITIALIZATION 
A::A (const int &value1, const int &value2) {
    this->val1 = value1;
    this->val2 = value2;
}

A::A (const int &val) {
    val1 = val;
};

A A::operator+ (const A &value) const {
    return A (val1 + value.val1);
}

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
     
     A a1 (55,66);
     A b1 (44,44);
     A c (33);

     cout << "a1 : " << a1 << endl;
     cout << "b1 : " << b1 << endl;
     cout << "c : " << c << endl;

     cout << "a1 + b1 : " << a1 + b1 << endl;
     cout << "c + a1: " << c + a1 << endl;
     return 0;
}