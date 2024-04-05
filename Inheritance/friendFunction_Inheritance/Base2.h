#ifndef BASE_2
#define BASE_2

#include <iostream>

#include "Base.h"
using std::cout;
using std::string;
using std::cin;


class Base2:protected Base{
   
   public:
    Base2 (const string &,const int &);
    void print ();
   private:
   const string name;
   int age;
};

#endif