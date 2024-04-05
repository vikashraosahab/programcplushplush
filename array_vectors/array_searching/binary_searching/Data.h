#ifndef DATA_H
#define DATA_H

#include "binary_search.h"

class Data {
   friend int BinarySearch (Data &);
   public:
   static const int length = 10;
   int arry[length] = {1,2,3,4,5,6,7,8,9,10};
   Data ();
   void insertion_sort ();
   ~Data ();
  private:
  int key;
};

#endif