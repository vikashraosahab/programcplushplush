// CHILD1 CLASS IS INHERITED FROM BASE CLASS PROTECTED
#ifndef CHILD_H
#define CHILD_H

#include "Base.h" // INCLUDE BASE CLASS DECLARATION HEADER FILE
#include <iostream>

using std::string;
#include "friendFunction.h"

class Child1:private Base {
    /*
     FRIEND FUNCTION IS A SPECIAL FUNCTION PROVIDE BY C++ 
     THAT BREAK ENCAPSULATION FEATURE OF THE CLASS
     IT PROVIDE CLASS PRIVATE DATA TO THE FUNCTION THAT DECLARED 
     FRIEND FUNCTION WITH IN THAT CLASS.
     IT'S DECLARED BY USING friend keyword of C++
     
     *** FRIEND CLASS WORK SAME AS FRIEND FUNCITON BUT IT PROVIDE 
     PRIVATE DATA OF PARTICULAR CLASS TO ANOTHER CLASS NOT FUNCTION.
     IT'S ALSO BREAK SAME FEATURE (ENCAPSULATION) OF C++
     ****
    */
    friend void message (Child1 &val);
    public:
    Child1 (const int&, const string&, const int&);
    ~Child1(); // DESTURCTOR 
    void display () const; 
    int get_value () const;// FOR DISPLAYING CONFIRMPASSWORD;
    private:
    const int confirmPassword;
};

#endif