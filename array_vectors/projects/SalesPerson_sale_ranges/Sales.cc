#include "Sales.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Sales::Sales () {
   setGrossales();
   Salaries();
   getGrossSales();
   getSalary();
   SalaryBar ();
}

Sales::~Sales () {
    cout << "\n\n Object is destoryed now !" << endl;
}

void Sales::setGrossales (){
     cout << "Enter Gross Sales  Of Each employee  : " << endl;
    
    for (int sales = 0; sales < NoOfemployees; sales++)
    {
        cin >> grossales [sales];
    }
}

// GETTING SALARY

void Sales::Salaries (){
    cout << "Salary of employees : " << endl;
    for (int salary = 0; salary < NoOfemployees; salary++)
    {
       salaries [salary] = 200 + ((grossales[salary] * 9) / 100);
    }
}  

void Sales::getGrossSales (){
    for (int sale = 0; sale < NoOfemployees; sale++)
    {
      cout << "Sale : " << grossales[sale] << endl;
    }
}

void Sales::getSalary (){
    for (int salary = 0; salary < NoOfemployees; salary++) {
        cout << "Salary : " << salaries [salary] << endl;
    }
} 

void Sales::SalaryBar (){
    cout << "\n\nShow Bar : " << endl;

    int frequenceSize = 11;


    for (int count = 1; count < salaries[NoOfemployees]; count++) {
       if (count == 1) cout << "0 - 9 :";
       else if (count == 10) cout << "100 : ";
       else cout << (count * 10) << " - " << (count * 10) + 9 << ": ";
      
      
      
      for (int star = 0; star < salaries[count] / 100; star++) {
        cout << '*';
      }

      cout << endl;
    }
}