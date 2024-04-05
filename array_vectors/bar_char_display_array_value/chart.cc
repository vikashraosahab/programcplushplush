#include <iostream> // INCLUDE INPUT/OUTPUT STREAM OBJECT HEADER FILE
#include "chart.h" // INCLUDE CHART CLASS DECLARATION FILE

// USE STANDARD METHODS
using std::cout;
using std::cin;
using std::endl;

// CHART CLASS DEFINITION SECTION
Chart::Chart (int array[], const int &val) {
    Display (array,val);
};
void Chart::Display (int array[], const int &val) const {
    cout << "\n\n\n DISPLAY CHART BASED ON ARRAY ELEMENT VALUE : ";
     for (int i = 0; i <val; i++) {
        cin >> array[i];
     } // FOR GETTING VALUE WITH IN ARRAY 

     for (int i = 0; i < val; i++) {
        if (i == 0) cout << "0 - 9 : " << endl;
        else if (i == 10) cout << "100 - :" << endl;
        else cout << i * 10 << " - " << (i * 10) + i << " :" << endl;
        
        for (int i = 0; i <= array[i]; i++) {
            cout << "*" << endl;
        }
     }
    cout << endl;
};
