#include "binary_search.h"


int BinarSearch (Data &val) {
 int low = 0;
 int size = sizeof (val.arry) / sizeof (int);
 int high = size - 1;
 int mid = (low + high + 1) / 2;
 int key = 25;
 int location = -1;

 while (low <= high && (location == -1)) {
   if (key == val.arry[mid]) {
     location = mid;
   }
   else if (key > val.arry[mid]) {
    low = mid + 1;
   }
   else {
    high = mid - 1;
   }
   mid = (low + high + 1) / 2;
 }
 
 return location;
}