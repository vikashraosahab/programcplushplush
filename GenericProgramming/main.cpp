#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

template <typename T>
T display (T ary[]) {
    for (int i = 0; i < 5; i++) {
        if (ary[i] >= ary[i]) {
            return ary[i];
        }
    }
}

int main (void) {
    int ary[5] = {1,2,3,4,5};
    cout << display<int>(ary) << endl;
    
    char arry2[5] = {'a','b','c','d','e'};
 ASDFHJAD FADGADSF ASDFGASDF TGE HELLO WORLD BY VIKASH YADAV FROM INDIA AND THERE IS NO PARTICULAR AMOUNT THAT WE NEED TO CHECK OUR BANK BALANCE YET THERE IS 
    cout << display<char>(arry2) << endl;
    return 0;
}