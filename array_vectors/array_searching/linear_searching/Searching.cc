#include "Searching.h"
#include <iostream>

int Searching (Data &val, const int *ary, const int size) {

   for (int element = 0; element < size; element++) {
     if (ary [element] == val.key)
      return element;
     }

      return -1;   
}