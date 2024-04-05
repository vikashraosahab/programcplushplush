// CLASS TYPE 2 DECLARATION

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM OBJECT HEADER FILE
#include <iomanip> // INPUT OUTPUT MAINPULATAT
// SET ALL STANDARD NAMESPACE 
using namespace std;

// CREATE A CLASS
class DateAndTime {
   
   public:
   DateAndTime () {
      int D,y;
      string m;
      int h,min,sec;
      
      cout << "Enter Date, month, year respectively : ";
      cin >> D >> y;
      cout << "Enter month name : ";
      cin >> m;
      cout << "Enter  Hours, minutes, seconds : ";
      cin >> h >> min >> sec;

      // INITIALIZTION DATE
      Day = D;
      month = m;
      year = y;

     // INITIALIZATION TIME
      hours = h;
      minutes = min;
      seconds = sec;
   };
   // CLASS DESTRUCTOR 
   ~DateAndTime() {
     cout << "\nObject is destory !";
   };
   // GET DATE FUNCITON 
   void getDate () {
      cout << setfill ('0') << setw (2) << Day <<"|" << setw (2) << month <<"|" << setw (2)<< year << endl;
   };
   // GET TIME FUNCTION 
   void getTime () const {
       cout << hours << ":" << minutes << ":" << seconds << endl;
   };

   private:
   int Day;
   string month;
   int year;
   int hours;
   int minutes;
   int seconds;
};

// HEADING OF THE MAIN () FUNCTION
int main (void) {
    // CREATE AN OBJECT 
    DateAndTime objCall;
    objCall.getDate();
    objCall.getTime();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE
}