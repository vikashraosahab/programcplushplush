#include <iostream>

using std::string;

class Main {
  public:

   Main (int value) {
    setValue (value);
  };

  void setValue (int value) {
    age = value;
  }

  int getvalue () const {
    return age;
  }
  private:
  int age;
  string name;
};