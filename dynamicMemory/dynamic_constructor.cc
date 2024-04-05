#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

class Book {
    public:
   // Book (const string &);
    ~Book ();
    void getValue (const string &, const string &);
    void display();
    
    public:
    string bookName;
    string bookAuthor;
};

//Book::Book (const string &name, const string &author): bookName (name) {};

void Book::getValue (const string &a, const string &b){
   bookName = a;
   bookAuthor = b;
}
Book::~Book () {
    cout << "Object is destoryed !";
}

// CASCADE MEMBER FUNCITON INILIZATION
void Book::display (){
    cout << bookName << endl;
    cout << bookAuthor << endl;
}

int main (void) {
     
     // CREATE OBJECT 
     string book;
     string author;
     getline (cin,book);
     getline (cin,author);
     Book book1;
     
     
     book1.getValue (book,author);
     book1.display();
     //delete[] books;
    return 0;
}