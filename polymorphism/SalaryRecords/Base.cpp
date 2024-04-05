#include <iostream> // PREPROCESSOR DIRECTIVE HEADER FILE OF INPUT/OUTPUT
#include "Base.h" // INCLUDE BASE CLASS

using std::string;
using std::cout;

// ENABLE THOSE STANDARD NAMESPACE METHOD THAT WE NEED
void Base::SetDetails (
    const string &n,
    const string &dep,
    const string &userid,
    const int &userAge,
    const int &userSalary
) {
    name = n;
    department = dep;
    id = userid;
    age = userAge;
    salary = userSalary;
}

void Base::print () const {
  cout << this->name << endl;
}

string Base::getName () const {
    return name;
}