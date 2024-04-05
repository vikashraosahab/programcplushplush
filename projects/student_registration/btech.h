// CREATE BTECH CLASS FOR BTECH STUDENTS

#ifndef BTECH_H
#define BTECH_H

#include <iostream>
using std::string;

class Btech{
   
   public:
  // void getData ();
  void getData ();
   ~Btech ();
   
   void display () const;

   private:
   int duration;
   string subjects[5];
};

#endif