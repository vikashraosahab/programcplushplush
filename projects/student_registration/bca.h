
#ifndef BCA_H
#define BCA_H

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Bca {
   
   public:
   Bca ();
   void getData ();
   ~Bca ();
   
   void display () const;

   private:
   const int subjectLength = 5;
   int duration;
   int semester;
   string subjects [5] = {};
};

#endif