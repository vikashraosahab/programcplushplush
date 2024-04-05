// CREATE CLASS THAT CALCULATE GREATES COMMON FACTOR OF TWO NUMBER

class Header {
    // PUBLIC ACCESS SPECIFIER
  public:
   Header (); // CONSTRUCTOR 
   ~Header (); // DESTRUCTOR
   void getGCD ();
   // PRIVATE ACCESS SPECIFIER
  private:
  int val1;
  int val2;
};


// CLASS DEFINITION 

// INITIALIZATION OF CLASS CONSTRUCTOR
Header::Header () {
    int num1,num2;
    std::cout << "Enter val1 and val2 : ";
    std::cin >> num1 >> num2;
    
    // ASSING VALUE WITHIN PRIVATE DATA MEMBER
    val1 = num1; // ASSIGN FIRST PRIVATE DATA MEMBER
    val2 = num2; // ASSIGN SECOND PRIVATE DATA MEMBER
};

void Header::getGCD () {
   for (int i = 1; i < val1, i < val2; i++) {
     if (val1 % i == 0 && val2 % i  == 0) {
        std::cout << i << ",";
     }
   }
};

// INITIALIZATION OF CLASS DESTURCTOR 
Header::~Header () {
    std::cout << "\nProgram is ended Now !" << std::endl;
}

// INTI