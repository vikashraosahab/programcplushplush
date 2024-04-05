// CREATE NAMESPACE AND DECLARE A CLASS INSIDE 
#include <iostream> // PREPROCESSOR DIRECTIVE HEADER OF INPUT/OUTPUT STREAM OBJECT

// CREATE A NESTED NAMESPACE
namespace myClass {
    class A {
      // PUBLIC ACCESS SPECIFIER
       public:
        A ():greet ("Namaste India") {};
        void display ();
      // PRIVATE ACCESS SPECIFIER
      private:
       const std::string greet;
    };

    namespace myClass2 {
        class A {
           public: /* PUBLIC ACCESS SPECIFIER LABEL */
            A (const std::string &val);
            void display() const;
            ~A();
           private: /* PRIVATE ACCESS SPECIFIER LABEL */
           const std::string name = "Hello world";
        };
    }
}

// INITIALIZATION OUTER CLASS A DISPLAY() CASCADE MEMBER FUNCTION 
void myClass::A::display () {
    std::cout << greet << std::endl;
};


// INITIALIZATION OF INNER CLASS A 
myClass::myClass2::A::A (const std::string &val):name (val){
}
void myClass::myClass2::A::display () const {
  std::cout << "Outer Class  = " << this->name << std::endl;
};

myClass::myClass2::A::~A () {
    std::cout << "Object is destoryed Now !" << std::endl;
}

using namespace 
// HEADING OF THE MAIN() FUNCTION 
int main () {
    std::string name;
    std::getline (std::cin,name);
    myClass::A a;
    a.display();
    myClass::myClass2::A aa (name);
    aa.display();

     { 
        std::cout << "Inner Block " << std::endl;
        aa.display ();
         {
            std::cout << " \n Second INNER - BLOCK  " << std::endl;
            aa.display(); 
         }
     }
     std::cout << "Outer Block " << std::endl;
     aa.display();
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}