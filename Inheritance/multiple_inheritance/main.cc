// COLLEGE REGISTRATION SYSTEM 
// USE INHERITANCE FOR REGISTRATION OF STUDENT AND FACULTY
#include <iostream>


// USE ALL NAMESPACE OF STANDARD
using namespace std;

class Person {
   public :
   void getPerson ();
   void displayPerson();

   protected:
   string name;
   int age;
   string occupation;
   string gender;
   string hobbies;
};

// CLASS INITIALZIATION
void Person::getPerson () {
    cout << "Enter name : ";
    getline (cin,name);
    cout << "Enter age : ";
    cin >> age;
    cin.ignore();
    cout << "Enter occupation : ";
    getline (cin,occupation);
    cout << "Enter gender : ";
    cin >> gender;
    cin.ignore ();
    cout << "Enter hobbies : ";
    getline (cin,hobbies);
};

void Person::displayPerson (){
    cout << "\nName : " << this->name << endl;
    cout << "Age : " << this->age << endl;
    cout << "Occupation : " << this->occupation << endl;
    cout << "Gender : " << this->gender << endl;
    cout << "Hobbies : " << this->hobbies << endl;
}

class Student:public Person {
    public:
    void getStudent ();
    void displayStudent ();
    private:
    std::string Id;
    std::string Idnumber;
    std::string department;
};

// CLASS INITIALIZATION
void Student::getStudent () {
    cout << "Enter Id : ";
    cin >> Id;
    cout << "Enter Id number : ";
    cin >>Idnumber;
    cout << "Enter department : ";
    cin >> department;
    cin.ignore();
    getPerson();
};

void Student::displayStudent (){
    std::cout << "Id" << this->Id << this->Idnumber;
    displayPerson ();
}

class Faculty:public Person {
    public:
    void getFaculty ();
    void displayFaculty ();
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
    cin.ignore ();
    getPerson();
};

void Faculty::displayFaculty (){
    std::cout << "Id : " << this->Id<< this->Idnumber;
    displayPerson();
}

// MAIN () FUNCTION OF THE PROGRAM 
int main (void) {
    string person;
    cout << "Enter person (student / faculty ): ";
    cin >> person;

    if (person == "student") {
        Student student;
        student.getStudent ();
        student.displayStudent();
    }
    else if (person == "faculty") {
       Faculty faculty;
       faculty.getFaculty ();
       faculty.displayFaculty ();
    }
    else {
        cout << "Please Enter valid person (only student / faculty) ... ";
    }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}