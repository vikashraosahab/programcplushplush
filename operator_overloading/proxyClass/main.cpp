#include <iostream>
#include "interface.h"

using namespace std;

int main (void) {
    Interface i (3);

    cout << i.getValue() << endl;
    i.setValue (1000);

    cout << i.getValue() << endl;
    return 0;
}