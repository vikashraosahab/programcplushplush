#include <iostream>

using namespace std;

namespace output {
    class myBook {
        public:
        void display () const {
            cout << "Hare Krishna !" << endl;
        }
    };

    void print () {
        cout << "HARE KRISHNA BY PRINT PRESS " << endl;
    }

    namespace intput{
        class myBook 
        {
            public:
             void display () {
                cout << "Hare Krishna !" << endl;
             }
        };

        void print (){
            cout << "Hare Krishna by input name space" << endl;
        }
    }
}

using namespace output;
int main (void) {
     print ();
     output::intput::print();
     output::myBook abc;
     abc.display();
     output::intput::myBook abcd;
     abcd.display();
    return 0;
}