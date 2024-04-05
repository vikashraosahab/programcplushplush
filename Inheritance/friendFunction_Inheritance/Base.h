// CREATE A CLASS NAMED AS BASE CLASS
#ifndef BASE_H
#define BASE_H

#include <iostream>

using std::string;

class Base {
    public:
    Base();
    Base (const int&, const string&, const int&);
    ~Base ();
    void display() const;
    private:
    int password;
    string name;
    int age;
};

#endif