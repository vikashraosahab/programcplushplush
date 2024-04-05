// CREATE A CLASS OF THAT INCLUDE MULTIPLICATION TABLE

class Header {
   
   // PUBLIC ACCESS SPECIFIER
   public:
   Header ();
   ~Header ();
   void getMultiplication () const;

   private:
   int value;
};

// CLASS DEFINTION SECTION 
Header::Header () {
   int number;
   std::cout << "Multiple Table of given : ";
   std::cin >> number;
   std::cout << number;
   value = number;   
};

void Header::getMultiplication () const {
    for (int i = 1; i <= 10; i++ ) {
      std::cout << value * i << std::endl;
   }
}


Header::~Header () {
    std::cout << "This program is ended now !";
}