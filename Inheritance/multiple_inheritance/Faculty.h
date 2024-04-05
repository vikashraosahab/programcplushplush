#include "Person.h"

class Faculty:public Person {
    public:
    void getFaculty ();
    void displayFaculty () const;
    private:
    std::string Id;
    std::string Idnumber;
};

// CLASS INITIALIZATION
void Faculty::getFaculty () {
    cout << "Enter Id : ";
    cin >> Id;
    cout << "Enter Id number : ";
    cin >>Idnumber;
    getPerson();
};

void Faculty::displayFaculty () const {
    std::cout << "Id" << this->Id<< this->Idnumber;
    displayPerson();
}