#include <iostream>

using namespace std;

int whatIsThis (int [],int);

int main (void) { 
   
   const int arrySize = 5;

   int a[arrySize] = {6,7,8,9,10};

   int value  = whatIsThis (a,arrySize);

   cout << value << endl;

    return 0;
};

int whatIsThis (int b[],int size) {

    if (size == 1) {
        return b[0];
    }
    else {
        return b [size - 1] + whatIsThis (b,size - 1);
    }
}