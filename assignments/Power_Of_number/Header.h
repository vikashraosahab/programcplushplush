// CLASS DECLARATIONS AND DEFINITION 

// CREATE A CLASS NAMED POWEROFNUMBER

class PowerOfNumber {
   
   public:
    long long unsigned int numberPower;
    long long unsigned int numberValue;
    PowerOfNumber () {
        // INITIALZTION VALUE = 0;
        value = 1; 
      std::cout << "Enter actual number : " << std::endl;
      std::cin >> numberValue;
      std::cout << "Enter power of the number : " << std::endl;
      std::cin >> numberPower;
    };
   
   void getResult ();
   PowerOfNumber  &getValue(int); // CASCADE FUNCTION MEMBER
    private:
    long long unsigned int value;

}; 

// CLASS DEFINITION 
void PowerOfNumber::getResult () {
     for (int i = 1; i <= numberPower; i++) {
        value *= numberValue;
     };
   
   getValue (value);
};

// CASCADE MEMBER FUNCITON CALLING 
PowerOfNumber &PowerOfNumber::getValue (int values) {
  std::cout << values;
  return *this; // CASCADE MEMBER FUNCTION NEED RETURN POINTER THIS
};

