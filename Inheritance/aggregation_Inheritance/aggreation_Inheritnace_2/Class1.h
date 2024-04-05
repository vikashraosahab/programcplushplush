// CLASS FIRST

#include <iostream>
#include <iomanip>

// SET STADNDARD METHODS
using std::cout;
using std::setw;
using std::setfill;


class Time {
    public:
     Time (
        const int &,
        const int &,
        const int &
     ); // CLASS CONSTRUCTOR 

     ~Time (); // DESTURCTOR DECLARATION
     void validateTime () const;
     void display () const;
    private:
    int hours;
    int minutes;
    int seconds;

    // UTILITY FUNCITON
};

// CLASS INTTIALIZATION 

// INITIALIZATION OF CLASS CONSTRUCTOR 
Time::Time (const int &h, const int &m, const int &s) {
    hours = h > 24 ? (hours = 1) : h ;
    minutes = m > 60 ? (minutes = 1) : m;
    seconds = s > 60 ? (seconds = 1) : s;
};


void Time::validateTime () const {
    if (hours >=12) {
        cout << "PM" << std::endl;
    }
    else cout << "AM" << std::endl;
}
// DISPLAY MESSAGE TO TIME PATCH
void Time::display () const {
    std::cout << setfill ('0') << setw (2) << hours << ":"
    << setw (2) << minutes  << ":" << setw (2) << seconds << " ";
    validateTime ();
    std::cout << std::endl;

};

// INITIALIZATION OF UTILITY FUNCTION

// INITIALIZATION OF DESTRUCTOR OF THE CLASS
Time::~Time () {
    std::cout << "Object is destroyed!" << std::endl;
}