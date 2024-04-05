// ASSIGNMENT 2 
// PARAMETERIZED CONSTRUCTOR 

#include <iostream> // PREPROCESSOR DIRECTIVE INPUT/OUTPUT HEADER FILE 

// CLASS CREATION NAMED AS BOOK

class Book {
   
   // PUBLIC ACCESS SPECIFIER 
   public:
   Book (); // DEFAULT CONSTRUCTOR
    Book (const int &);
    ~Book (); // DESTRUCTOR
    
    void print () const; // MEMBER FUNCTION

   // PRIVATE ACCESS SPECIFIER
   private:
   const int value; // CONSTANT INTEGER VARIABLE
};

// CLASS INITIALIZTION 

Book::Book ():value (0) {};

// CONSTANT VARIABLE INITIALIZATION 
Book::Book (const int &val):value (val) {};

// CLASS DESTRUCTOR
Book::~Book () {
    std::cout << "\nObject of classes are destroyed !\n"; // OUTPUT STATEMENT SHOW WHEN OBJECT IS DESTORYED
};

// DISPLAY OUTPUT STATEMENT

void Book::print () const {
    std::cout << "value = " << this->value << std::endl;
}


// HEADING OF THE MAIN () FUNCTION 

int main (void) {
     int value; // VARIABLE DECLARATION
     std::cout << "Enter value : "; // OUTPUT STATEMENT AS PROMPT
     std::cin >> value; // INPTPUT STATEMENT

     // CREATE AN OBJECT 
     Book objCallValue (value),obj;

     objCallValue.print();
    return 0;
}