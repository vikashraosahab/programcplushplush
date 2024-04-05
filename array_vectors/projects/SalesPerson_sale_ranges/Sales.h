#ifndef SALES_H
#define SALES_H

// CLASS DECLARATION
#include <iostream>


class Sales {
    public:
    
    const static int NoOfemployees = 3;
    Sales ();
    ~Sales ();
    void setGrossales ();
    void Salaries ();
    void getSalary ();
    void getGrossSales ();
    void SalaryBar ();

    private:
    int grossales[NoOfemployees];
    int salaries [NoOfemployees];
};

#endif