// POLLING SURVEY

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main (void) {
    
    const int responseSize = 20;
    const int frequenceSize = 11;

     const int responses [responseSize] = {
        1,2,3,5,67,54,32,44,2,1,
        1,2,3,5,67,54,32,44,2,1
     };

     int frequence [frequenceSize] = {};

     for (int answer = 0; answer < frequenceSize; answer++) {
        frequence [responses[answer]]++;
     }

     cout << "Rating " << setw (17)<< "Frequence " <<
     endl;

     for ( int rating = 1; rating < frequenceSize; rating++ ) {
        cout << setw (10) << rating << setw (10) << frequence[rating] << endl;

     }
    return 0;
}