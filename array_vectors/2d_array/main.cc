// CREATE 2- DIMENSONAL ARRAY

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int val;

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // 2-D ARRAY DECLARATION 
    int array[4][4];

    int val;
   {
     for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
           int a;
            cin >> ::val ;
            array[i][j] = ::val;
        }
    }
      
      // INNER OUTPUT 
      cout << "INNer OUTPUT " << endl;
       for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      cout << array[i][j] << endl;
   }

     
     cout << "OUTER OUTPUT" << endl;
   for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      cout << array[i][j] << endl;

    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}