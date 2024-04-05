// CREATE A CLASS NAMED COMMISSIONEMPLOYEES
// CLASS DATA AND MEMBER FUNCTIONS DECLARATION ONLY 
#include <iostream> // INCLUDE INPUT/OUTPUT STREAM OBJECT HEADER FILE
using std::string;

class CommissionEmployees {
   
   public: /* VISIBILITY OPERATOR OF CLASS  */
   CommissionEmployees (
    const string &,
    const string &,
    const string &,
    const double &,
    const double &
   ); // CONSTURCTOR OF THE CLASS
   ~CommissionEmployees (); // DESTURCTOR OF THE CLASS
   
   // SET FIRST NAME 
   void setFirstName (const string &);
   string getFirstName ();

   // SET LAST NAME
   void setLastName (const string &);
   string getLastName ();

   // SET SOCIALSECURITYNUMBER 
   void setSocialSecurityNumber (const string &);
   string getSocialSecurityNumber (); //  GET FUNCTION
   void setGrossSales (const double &);
   double getGrossSales ();

   void setCommissionRate (const double &);
   double getCommissionRate ();

    double employeeEarings () const;
    void print () const;
   // SET
   /* 
    PRIVATE DATA MEMBER ARE ENCAPSULATED, ONLY IT'S OWN CLASS PUBLIC MEMEBER FUNCTION CAN ACCESS
    AND NO OTHER CLASS OF FUNCTION CAN ACCESS THESE DATA, EXPECT THERE IS NO FRIEND CLASS OR FRIEND FUNCTION ARE DECLARED
    */
   // PRIVATE ACCESS SPECIFIER LABLE 
   private: 
   /* 
    PRIVATE DATA MEMBER DECLARATIONS WITHIN THE PRIVATE ACCESS LABEL
   */
   string firstName;
   string lastName;
   string socialSecurityNumber;
   double grossSales;
   double commissionRate;
};