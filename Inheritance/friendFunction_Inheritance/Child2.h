// ANOTHER CHILD CLASS THAT IS INHERITED FROM CLASS BASE

#ifndef CHILD2_H
#define CHILD2_H

#include "child1.h"

class Childs:public Child1  {
    
   public: 
   int getValue ();
   void setValue ();

   private:
   int value;

};

#endif