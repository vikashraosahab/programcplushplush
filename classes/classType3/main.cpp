#include <iostream>
#include <string.h>

using namespace std;

class String {
    char *name;
    int length;

    public:
     String () {
       length = 0;
       name = new char [length + 1];
     };

     String (char *S) {
        length = strlen (S);
        name = new char [length + 1];
         strcpy (name,s);
     };

     void display (void) {
        cout << "name";
     };

     void join (string &a, string &b) {
        length = a.length() + b.length();
        delete[] name;

        name = new char[length + 1];
        strcpy (name, a.c_str);
        strcat (name,b.c_str);
     };
};

int main (void) {
    char *first = "Vikas";
    String name1 (first), name2 ("hello"), S1;
    S1.join (name1,name2);
    S1.display();


}
