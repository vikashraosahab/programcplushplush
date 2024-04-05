
#ifndef SUMOFARRAY_H
#define SUMOFARRAY_H

class SumOfArray {
   
   public:
   SumOfArray (int [],const int&);
   ~SumOfArray ();
   void getResult (int [],const int&) const;
   void print () const;
   int getSum () const;
   private:
   int totalSum;
};

#endif