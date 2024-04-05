// ASSIGNMENT - 4
// SWAP VALUE 

#include <iostream>
#include "swap.h"

// SET NAMESPACE STD

using namespace std;

// HEADING OF THE MAIN() FUNCTION
int main (void) {
    // CREATE AN OBJECT OF THE CLASS
    Swap objSwap (33,44);
    objSwap.print();
    std::cout << "After swapping " << std::endl;
    objSwap.swap();
    objSwap.print();
    return 0;
}