#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;


class Date {
  // STREAM INSERTION OPERATOR OVERLOADING 
 friend ostream &operator<< (ostream &, const Date &);

 public:
 Date (int m = 1, int d = 1, int y = 2000); // DEFAULT CONSTRUCTOR
 void setDate (int, int, int); // MEMBER FUNCTION FOR SET VALUE WITHIN PRIVATE DATA MEMBERS
 Date &operator++ (); // PREFIX OPERATOR OVERLOADING
 Date operator++ (int); // POSTFIX OPERATOR OVERLOADING
const Date &operator+= (int);
static bool leapYear (int);
bool endOfMonth (int) const;

 private:
 int month;
 int day;
 int year;

 static const int days [];
 void helpIncrement (); // PRIVATE MEMBER FUNCTION 
};

#endif