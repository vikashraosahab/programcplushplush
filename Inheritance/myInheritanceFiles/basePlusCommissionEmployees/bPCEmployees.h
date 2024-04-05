// CLASS DELCARATION 
// CREATE A CLASS NAMED BASEPLUSCOMMISSIONEMPLOYEE 

#include <iostream> // INCLUDE INPUT/OUTPUT STREAM OBJECT HEDER FILE
using std::string; // USE STRING NAMESPACE
using std::cout; // USE STANDARD COUT
using std::cin;

// BASEPLUSCOMMISSIONEMPLOYEE 

class BasePlusCommissionEmployee {
  /* PUBLIC ACCESS SPECIFIER LABEL */
  public:
   BasePlusCommissionEmployee (
    const string &,
    const string &,
    const double &,
    const double &,
    const double &
   ); // CONSTRUCTOR 
   ~BasePlusCommissionEmployee (); // DESTRUCTOR 
  inline string getName ();
  inline string getSSN ();
  inline double getGrossRate ();
  inline double getCommissionRate (); 
  inline double employeeEaring () const;
  
  void print () const;
  /* PRIVATE ACCESS SPECIFIER LABEL*/
  private:
  const string name;
  const string socialSecurityNumber;
  const double grossSales;
  const double salary;
  const double commissionRate;
};