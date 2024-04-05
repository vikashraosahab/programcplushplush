// CLASS DECLARATION AND DEFINITION SECTION 
// CREATE A CLASS NAMED AS LCM

// USING ALL NAMESPACE FOR STD
using namespace std;

// CLASS DECLARATION

class Lcm {
 
 public: // PUBLIC DATA MEMBER AND MEMBER FUNCITON 
 Lcm (); // CREATE CONSTRUCTOR 
 ~Lcm (); // DESTRUCTOR OF THE CLASS
 int getGCD (); // GETGCD IS CASCADE MEMBER FUNCTION
 int getLCM (); // GETLCM IS CASCASE MEMBER FUNCITON 

 private: // PRIVATE DATA MEMBER AND UTILITY MEMBER FUNCITON 
 int value1;
 int value2;

};

// INITIALIZTION OF CONSTRUCTOR 

Lcm::Lcm () {
  int num1, num2; // LOCAL VARIABLE DECLARATION
  cout << "Enter First Number : ";
  cin >> num1;
  cout << "Enter Second Number : ";
  cin >> num2;

  // ASSIGN VALUE WITHIN PRIVATE DATA
  value1 = num1;
  value2 = num2;

};

// INITIALIZATION OF GETGCD
int Lcm::getGCD () {
    while (value2 != 0) {
        int temp = value2;
        value2 = value1 % value2;
        value1 = temp;
    }; // CLOSED CURLY OF WHILE LOOP
  
  // RETURN VALUE
    return value1;
}

// INITIALZIATION OF GETLCM

inline int Lcm::getLCM () {
  return (value1 * value2) / getGCD ();
}

// INITIALIZATION OF DESTURCTOR
Lcm::~Lcm () {
    std::cout << "\n Okay, Your program is ended now!";
}