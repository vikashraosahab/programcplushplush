// CREATE BSAE CLASS AS ABSTRUCT CLASS
/*
ABSTRUCT CLASS BY USING PURE VIRTUAL FUNCTION
*/
#include <iostream> // PREPROCESSOR DIRECTIVE HEADER FILE

// ENALBE IMPORTANT STD NAMNESPACE FUNCTION
using std::string;
using std::operator==; // OVERLOAD == EQUALITY OPERATOR
using std::cout;
using std::endl;


// CREATE A BASE CLASS
class Base {
  
  // PUBLIC MEMBER FUNCTION
  public:
  
  void SetDetails (
    const string &,
    const string &,
    const string &,
    const int &,
    const int &
  );

  virtual void print () const; // PURE VIRTUAL FUNCTION 
  virtual string getName () const; // VIRTUAL FUNCTION
  // OPERATOR OVERLOAD
  Base &operator== (const Base &val) const{
    if (val2.name == val.name) cout << "YES";
    else cout << "N0";

    return *this;
  }

 // PRIVATE DATA MEMBER OF THE CLASS
  private:
  string name;
  string department;
  string id;
  int age;
  int salary;
};