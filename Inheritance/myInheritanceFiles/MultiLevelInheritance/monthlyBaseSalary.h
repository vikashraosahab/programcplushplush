// CREATE A INHERITED FROM SALARY NAMED AS MONTLYBASESALARY

#ifndef MONTHLY_SALARY
#define MONTHLY_SALARY

#include "Salary.h" // INCLUDE SALARY HEADER FILE

using namespace std;

class monthlyBaseSalary:public Salary {
    public:
    monthlyBaseSalary (
        const string &,
        const double&,
        const string&,
        const string&,
        const string&
    ); // CONSTRUCTOR 

    ~monthlyBaseSalary (); // DESTRUCTOR 
    void print () const;
    inline double getSalary() const;
   private:
   string employCategory;
   string memberId;
   string team;
   double salary;
   double bonous;
};

// CLASS DEFINITION 
monthlyBaseSalary::monthlyBaseSalary (
        const string &n,
        const double &a,
        const string &ssn,
        const string &d,
        const string &jYear
):Salary (n,a,ssn,d,jYear)
{
   // INITIALZIE PRIVATE DATA MEMBER
   cout << "Enter employe Category : ";
   getline (cin,employCategory);
   cout << "Enter employe Member Id : ";
   cin >> memberId;
   cin.ignore ();
   cout << "Enter employee's Team mamager : ";
   getline (cin,team);
   cout << "Enter employee's salary : ";
   cin >> salary;
   cout << "Enter employee's bonus : ";
   cin >> bonous;
};

inline double monthlyBaseSalary::getSalary () const {
    return salary + bonous;
}

// DISPLAY OUTPUT 
void monthlyBaseSalary::print () const {
    monthlyBaseSalary::Salary::print ();
    cout << "Employ Category : " << this->employCategory << endl;
    cout << "Member Id : " << this->memberId << endl;
    cout << "Team : " << this->team << endl;
    cout << "\n\nTotal Salary of employee : \n" << "$" << this->getSalary() << endl;
}


// INITIALIZE CLASS DESTRUCTOR 
monthlyBaseSalary::~monthlyBaseSalary () {
    cout << "\n\nDESTROYED OBJECT !\n\n" << endl;
}



#endif