#include <iostream>
#include "Base2.h"

using namespace std;

Base2::Base2 (
    const string &username,
    const int &userage
):Base (userage,username,userage),name (username),age (userage){

}

void Base2::print () {
    cout << this->age << endl;
    Base::display();
};