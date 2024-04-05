#include <iostream>

using namespace std;
class Second;

class First {
    public:
    First (
    const string &username,
    const int &userage,
    const string &userdob
    ) {
        name = username;
        age = userage;
        DOB = userdob;
    };

    void dis () {
        cout << this->name << endl;
    }
    string getName () {
        return name;
    }

    private:
    string name;
    int age;
    string DOB;
};

class Second {
    private:
    First *first;
     int id;
    public:
     Second (const int &userid, First *first) {
        this->id = userid;
        this->first = first;
     };

     void display () {
        cout << "Hello world\n" << std::endl;
        cout << first->getName() << endl;
        first->dis();
     }
};