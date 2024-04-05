#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::cin;

class Chart
 { 
    public:
    Chart (int [],const int&);
    ~Chart();
};

Chart::Chart (int array[], const int &val) {
   cout << " Sales Graph : " << endl;
    for (int i = 0; i < val; i++) {
        cout << "Enter value : " << i << endl;
        cin >>  array[i];
    }

    for (int i = 0; i < val; i++) {
       if (i == 0) {
         cout << "00 - 09 : " ;
       }
       else if (i == 10) {
        cout << "100 - 110: " ;
       }
       else {
        cout << i * 10 << " - " << (i * 10) + 9  << " : ";
       }

       // PRINT BAR OF ASTERISK
       for (int j = 0; j < array[i]; j++)  {
       cout << " *";
       }

       cout << endl;
    };
};

Chart::~Chart () {
    cout << "\n\n\n\nObject is destroyed !\n\n" << endl;
}

