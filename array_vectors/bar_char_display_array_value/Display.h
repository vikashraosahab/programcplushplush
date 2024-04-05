#ifndef DISPLAY_H
#define DISPLAY_H

#include "chart.h"

class Display:public Chart {
    public:
    Display (int[],const int &, const std::string &); // CONSTRUCTOR
    ~Display(); // DESTURTOR 
    void print(int[],const int&) const;
};

#endif