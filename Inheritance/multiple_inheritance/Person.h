// CREATE A BASE CLASS
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

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
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    cout << "Enter occupation : ";
    cin >> occupation;
    cout << "Enter gender : ";
    cin >> gender;
    cout << "Enter hobbies : ";
    cin >> hobbies;
};

void Person::displayPerson (){
    cout << "Name : " << this->name << endl;
    cout << "Age : " << this->age << endl;
    cout << "Occupation : " << this->occupation << endl;
    cout << "Gender : " << this->gender << endl;
    cout << "Hobbies : " << this->hobbies << endl;
}