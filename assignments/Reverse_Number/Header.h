// CREATE A CLASS NAMED AS HEADER

class Header {

   // PUBLIC ACCESS SPECIFIER
   public:
    Header (); // CONSTRUCTOR OF THE CLASS
    ~Header (); // DESTRUCTOR OF THE CLASS
    void getResutl(); // GETTING RESUTL
   // PRIVATE ACCESS SPECIFIER
   private:
   int number;
};

// CLASS DEFINITION 
Header::Header () {
    int val;
    std::cout << "Enter number : " << std::endl;
    std::cin >> val;

   // ASSIGN VALUE WITH IN  PRIVATE DATA
   number = val;
};

void Header::getResutl () {
    while (number >= 0) {
        int last_number = number % 10; // FOR GETTING LAST DIGIT OF THE GIVEN VALUE
        std::cout << last_number;
        int remove_number = number / 10; // FOR REMOVING LAST DIGIT NUMBER

        // MODIFY NUMBER AND REMOVED, REMOVE LAST DIGIT NUMBER
        number = remove_number;

         if (number == 0) break;
    }
}

Header::~Header () {
    std::cout << "\nREVERSE NUMBER PROGRAM IS ENDED NOW\n";
}