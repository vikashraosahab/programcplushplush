// CREATE A CLASS NAMED COMMISSIONBasedSalary EMPLOYEES
// IT INHERITE DATA MEMBER FROM SALARY CLASS

#include "Salary.h" // INCLUDE SALARY HEADER FILE 

class CommissionBasedSalary:public Salary {
    public:
      CommissionBasedSalary (
        const string &,
        const double&,
        const string&,
        const string&,
        const string&
      ); // CONSTRUCTOR 
      ~CommissionBasedSalary (); // DESTRUCTOR 
     void print () const;
     inline double getEarings () const;
    private:
    double commissionRate;
    double sales;
};

// CLASS DEFINTION 
CommissionBasedSalary::CommissionBasedSalary (
  const string &n,
  const double &a,
  const string &ssn,
  const string &department,
  const string &jYear
):Salary (n,a,ssn,department,jYear) 
{
  // IITIALIZE PRIVATE DATA MEMBER
  cout << "Enter employee commission Rate : ";
  cin >> commissionRate;
  //cin.ignore();
  cout << "Sales : ";
  cin >> sales;

  // EMPLOYEE GETTING SALARY
};

// GET COMMISSIONRATE 
inline double CommissionBasedSalary::getEarings () const{
  return (sales / commissionRate);
}

void CommissionBasedSalary::print () const {
    CommissionBasedSalary::Salary::print ();
    cout << "Sales : " << this-> sales << endl;
    cout << "CommissionRate of employee : " << this-> commissionRate << endl;
   // cout << "Employee Earings : " << Salary::employeEarings() << endl;
   cout << getEarings() << endl;
}

CommissionBasedSalary::~CommissionBasedSalary () {
    cout << "Object is destroyed now !" << endl;
}
CommissionBasedSalary::Salary::~Salary () {
    cout << "Commisssion Based Emoployees Datat deleted !";
}