// DIE ROLLING PROGRAM 
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using std::srand;
using std::cout;
using std::endl;
using std::rand;
using std::setw;
using std::time;

int main (void) {
    // DECLARE A CONSTANT VARIABLE AS SIZE OF THE ARRAY
    const int arraySize = 7;
   // SEED THE RANDOM NUMBER GENERATOR USING THE CURRENT TIME
    srand (time (NULL));
    cout << rand () % 15 << endl;
    // DECLARE A ARRAY NAMED AS FREQUENCE  AND INITIALIZE WITH NULL VALUES
    int frequence[arraySize] = {};
    
    for (int roll = 1; roll <= 6000000; roll++) {
        frequence [1 + rand () % 10]++;
    }

    cout << "Face " << setw (13) << "Frequence " << endl;

    for (int face = 1; face < arraySize; face++) {
        cout << setw (4) << face << setw (13) <<
        frequence [face] << endl;
    }


    return 0;
}