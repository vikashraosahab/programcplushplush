#ifndef DATA_H
#define DATA_H

#include "Searching.h"

class Data {
   friend Searching (Data &val, const int *, const int);
    public:
    Data (const int &);
    
   private:
   const int key;
};

#endif