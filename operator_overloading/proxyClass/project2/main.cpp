#include <iostream>

#include "A.h"

using namespace std;


int main (void) {
    A a(20);
   // a.setValue (4);
    cout << a.getValue() << endl;

    a.setValue (2302);
    cout << a.getValue () << endl;

    cin >> a;
    cout << a.getValue () << endl;
    return 0;
}