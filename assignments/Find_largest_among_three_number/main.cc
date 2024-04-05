// ASSIGNMENT - 7

// PREPROCESSOR DIRECTIVE INPUT/OUTPUT STREAM HEADER FILE
#include <iostream>

// SET NAMESPACE FOR ALL STD
using namespace std;

// CREATE CLASS HERE
// CLASS HEADING 
class Second;
class Third;
// CLASS ONE
class One {
   
   friend void max (One &val1, Second &val2, Third &val3);
   public:
   One (int value) {
    number = value;
   };

   private:
   int number;
};

// SECOND CLASS
class Second {

  friend void max (One &val1, Second &val2, Third &val3);

  public:
  Second (int value) {
    number = value;
  };

  private:
  int number;
};

// THIRD CLASS
class Third {
  friend void max (One &val1, Second &val2, Third &val3);

  public:
  Third (int value) {
    number = value;
  };

  private:
  int number;
};


// FRIEND FUNCITON AS VOID
void max (One &val1, Second &val2, Third &val3) {
   if (val1.number >= val2.number  && val1.number >= val3.number) {
       if (val1.number == val2.number  && val1.number == val3.number) 
         cout << "All Number are same " << endl;
       else cout << "First Number is greater than Second and Third" << endl;
   }
   else if (val2.number >= val1.number && val2.number >= val3.number) {
       cout << "Second Number is greater than First and Third" << endl;
   }
   else {
    cout << "Thrid Number is greater than First and Second" << endl;
   }
};
// HEADING OF THE MAIN() FUNCTION 
int main (void) {
  int val1,val2,val3;
  cout << "Enter First Value : " << endl;
  cin >> val1;
  cout << "Enter Second Value : " << endl;
  cin >> val2;
  cout << "Enter Third Value : " << endl;
  cin >> val3;

  // CREATE AN OBJECT OF THE CLASS
  One objOne (val1);
  Second objTwo (val2);
  Third ObjThree (val3);

  max (objOne,objTwo,ObjThree);
  return 0;
}