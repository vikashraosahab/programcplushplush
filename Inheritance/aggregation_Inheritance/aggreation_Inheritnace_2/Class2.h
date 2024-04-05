// CLASS SECOND 
#include <iostream>
#include "Class1.h"

using namespace std;

class Booking {
  
  public:
   Booking (
    const string &,
    const double &,
    Time *time
   );

   void print () const;
  private:
  string name;
  double price;
  Time *time;

};

// CLASS DEFINTION
Booking::Booking (const string &username, const double &tice_value, Time *time) {
   this-> name = username;
   this-> price = tice_value;
   this-> time = time;
};


void Booking::print () const {
    cout << "Name : " << this->name;
 time->display ();
}

