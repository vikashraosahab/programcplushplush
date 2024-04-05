// CREATE A INHERITED CLASS FOR DISPLAYING OUTPUT RESULT

#ifndef RESULT_H
#define RESULT_H

#include <iostream>
#include  "SumOfArray.h" // INCLUDE SUMOFARRAY CLASS HEADER FILE

using namespace std;
class Result:public SumOfArray {
    public:
    Result (int[],const int&, const string&);
    ~Result ();
    int getValue ();
};

#endif