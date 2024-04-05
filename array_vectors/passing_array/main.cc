// PASSING ARRAY TO ANOTHER FUNCTION 
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

class Book {

    public:
    Book (int *,int);
    Book (const int []);
};

Book::Book (int *b, int size) {
    for (int i = 0; i < size; i++)
     cout << b[i] << endl;

     cout << "\n\n" << endl;

     for (int i = 0; i < size; i++) {
        b[i] += 5;
        cout << b[i] << endl;
     }
}

Book::Book (const int abc[]) {
  for (int i = 0; i < 5; i++) {
    cout << "Arry " << i + 1 << " : " << abc[i] << endl;
  }
}


int main (void) {
     
     int array[5] = {1,2,3,4,5};
     const int arrays[5] = {2,3,4,5,5};
     Book book (array,5), books(arrays);

    return 0;
}