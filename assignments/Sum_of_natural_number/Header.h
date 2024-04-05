// CLASS DECLARATION
// CREATE A CLASS NAMED AS NATURALNUMBER

class NaturalNumber {
   
   // PUBLIC DATA AND MEMBER FUNCTION
   public:
   int sum = 0;
   NaturalNumber (); // CONSTRUCTOR 
   ~NaturalNumber (); // DESTRUCTOR
   void getNumber (); // GETTING NUMBER FROM USER
  // void getSumOfNaturalNumber (); // RETURN SUM OF NATURAL NUMBER
   int getResult ();

   private:
   int number; // DATA MEMBER
};

// CLASS DEFINITION 
NaturalNumber::NaturalNumber () {
    number = 0;

};

void NaturalNumber::getNumber (){
    int natural_num;
    std::cout << "Enter last Natural number : ";
    std::cin >> natural_num;

    if (natural_num >= 0) {
       number = natural_num;
       for (int i = 1; i <= number; i++) {
        sum += i;
       }
    }
    else {
        std::cout << "Input Number is not negative... " << std::endl;
    }
}

int NaturalNumber::getResult () {
    return sum;
}

// INITIAZLIZATION OF DESTURCTOR
NaturalNumber::~NaturalNumber () {
    std::cout << "Sum of Natural = " << this->sum;
}