#include <iostream>

#include  "Base.h"

using namespace std;

int main (void) {
    
    Base b;

    b.SetDetails ("Vikash","Bca","@393yded",20,2003);

    Base c;
    b.SetDetails ("Vikash","Bca","2323",23,2034);

   b == c;


    return 0;
}