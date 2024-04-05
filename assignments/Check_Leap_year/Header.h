// CREATE A CLASS NAMED AS HEADER

class Header {
   
   // PUBLIC ACCESS SPECIFIER LABEl
   public:
   Header ();
   ~Header();

   void isLeapYear ();
   
   // PRIVATE ACCESS SPECIFIER LABEL
   private:
   int year;
};

// CLASS DEFINITION 
Header::Header () {
    int value;
    std::cout << "Enter value : " << std::endl;
    std::cin >> value;
    year = value;
};

void Header::isLeapYear () {
    static const int last_day_month[12] = {
         // INITIALZE ALL LAST DAY OF THE MONTH
        };
    if (year % 4 == 0 && year % 100 != 0) {
      std::cout << "Given year is a Leap Year " << std::endl;
    }
    else {
        std::cout << "Given year is not Leap Year" << std::endl;
    }
}

// DESTURCTOR INITILIAZTION
Header::~Header () {
    std::cout << "\nProgram is ended now" << std::endl;
}