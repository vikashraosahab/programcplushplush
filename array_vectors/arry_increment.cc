#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;
using std::setw;
using std::srand;
using std::rand;
using std::time;

int main () {
    
    const int arrySize =50;

    int arry[arrySize] = {};
   
    srand (time (0));

   // SEED THE RANDOM

   {
    // INNER OUTPUT
    cout << "INNER OUTPUT " << endl;
     for (int i = 0; i < 5; i++)
      cout << rand () << endl;
   }

   cout << "Outer output" << endl;

    for (int i = 0; i < 5; i++) {
     int a;
     std::cin >> a;
      arry [i] = a++;
    }

    cout << setw (10) << endl;
    for (int i = 0; i  < 10; i++) {
        cout << arry[i] << endl;
    }
    return 0; 
}