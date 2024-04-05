#include <iostream>
using namespace std;

class Person {
  
  public:
  void set_p ();
  void display_p ();
  private:
  string name;
  int age;
};


class Student: private Person {
    public:
    Student ();
    void print ();

    private:
    string studentId;
};