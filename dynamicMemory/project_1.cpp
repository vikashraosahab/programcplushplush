#include <iostream>

class value {
    public:
    value () {
        x = 0;
        length = 5;
    };

    void getData () {
        x = new int [length];

        for (int i = 0; i < length; i++) {
            * (x + i) = i;
        }

    };

     void display () {
       for (int i = 0; i < length; i++) {
         std::cout << i + 1 <<"\n" << *(x + i);
       }

       delete[] x;
     }

    
    private:
    int *x;
    int length;
};

int main (void) {
     value objCall;
     objCall.getData();
     objCall.display();
    return 0;
}