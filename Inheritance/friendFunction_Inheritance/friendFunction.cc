
#include "friendFunction.h"
#include "child1.h"

void message (Child1 &val) {
   std::cout << "Confirm Password = " << val.confirmPassword << std::endl;
}