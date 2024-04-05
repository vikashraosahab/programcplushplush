// CLASS IS INHERITED FROM CAHRT CLASS
// DISPLAY IS A DERIVED CLASS THAT IS INHERITED OR ABORBS PROPERTIES FROM CHART BASED CLASS

#include <iostream>
#include "Display.h"
#include "chart.h"

using namespace std;


Display::Display (int array[], const int &val, const string &output):Chart (array,val) {
    print (array,val);
};

void Display::print (int array[],const int &val) const {
    cout << "SHOW CHAR BAR ---- \n\n";
    Display::Chart::Display(array,val);
}
Display::~Display () {
    cout << "OBJECT IS DESTROYED ! " << endl;
}

Display::Chart::~Chart () {
    cout << "Chart Object is destroyed Now !" << endl;
}