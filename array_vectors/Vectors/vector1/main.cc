// CREATE A VECTOR 
/*
STL vectors PROVIDE ROBUST AND EFFICIENT THAN ARRAY
*/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main (void) {
    
    // DECLARE A VECTOR
    vector <int> vector1 (5); // 5 IS THE LENGTH OF VECTOR

    for (int i = 0; i < 5; i++)
    cin >> vector1[i];

    cout << std::endl;

    for (int i = 0; i < 5; i++)
    cout << vector1[i];

    // DECLARE A VECTOR FOR STRINGS

    vector <char> vector2 (5);

    for (int i = 0; i < 5; i++)
     cin >> vector2 [i];

    for (int i = 0; i < 5; i++) {
        cout << i << " : " << vector2[i] << std::endl;
    }

    // DECLARE AN ARRAY
    int array[5];

    for (int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < 5; i++)
     cout << array [i];

    
    // DECLARE A VECTOR FOR STRING
    vector <std::string> vector3 (2);

    for (int i = 0; i < 2; i++)
    cin >> vector3[i];

    for (int i = 0; i < 2; i++)
    cout << vector3[i];
    return 0;
}

