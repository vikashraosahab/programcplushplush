#include <iostream>
#include "Date.h"

using namespace std;

// INITIALIZE LAST DATE OF EACH MONTH
const int Date::days[] = {
 0,31,28,31,30,31,30,31,31,30,31,30,31
};

// DEFINE CONSTRUCTOR 
Date::Date (int m, int d, int y) {
    
    // PASS VALUES WITHIN SETDATE() MEMBER FUNCTION 
    setDate(m,d,y);
};

// DEFINE SETDATE MEMBER FUNCTION
void Date::setDate (int m, int d, int y) {
  month = (m >= 1 && m <= 12 ) ? m : 1;
  day = (d >= 1 && d <= 31) ? d : 1;
  year = (y >= 1990 && y <= 2024) ? y : 2000;
};


// DEFINE PREFIX OPERATOR OVERLOADING 
Date &Date::operator++ () {
    helpIncrement ();
    
    return *this;
}

// DEFINE POSTFIX OPERATOR OVERLOADING
Date Date::operator++ (int) {
    Date temp = *this;

    helpIncrement ();

    return temp;
}

// ASSIGNMENT OPERATOR DEFINITION
const Date &Date::operator+= (int additionalDays) {
   for (int i = 0; i < additionalDays; i++) {
     helpIncrement ();
   }

   return *this;
} 


bool Date::leapYear (int testYear) {
    if (
        testYear % 400 == 0 || 
        (testYear % 100 != 0 && testYear % 4 == 0)
    ) {
        return true;
    }
    else {
        return false;
    }
}

bool Date::endOfMonth (int testDay) const {
    if (month == 2 && leapYear (year)) 
    return testDay = 29;
    else 
    return testDay == days[month];
}

// INREMENT DAY, MONTH AND YEAR ACCORDINGLY
void Date::helpIncrement () {
   if (!endOfMonth (day)) {
    day++;
   }
   else 
    if (month < 12){
     month++;
     day = 1;
   }
   else {
    year++;
    month = 1;
    day = 1;
   }
   
}


// DEFINE STREAM INSERTION OPERATOR OVERLOADING
ostream &operator<< (ostream &out, const Date &date) {
    static string monthName[13] = {
        "","Jan","Feb","Mar","April","May","June","July",
        "August","Sept","Oct","Nov","Dec"
    };

    out << monthName [date.month] << ' ' <<
      date.day << " , " << date.year;
      return out;
}





