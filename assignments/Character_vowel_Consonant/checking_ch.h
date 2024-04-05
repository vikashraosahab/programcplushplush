// CREATE A CLASS THAT CHECK 

#include <iostream>

class CheckingCh {
   public:
   CheckingCh (const char &ch):ch (ch) {};

   void CheckCharacter () {
     if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
       if (
        ch == 'a' ||
        ch == 'e' || 
        ch == 'i' ||
        ch == 'o' ||
        ch == 'u' ||
        ch == 'A' ||
        ch == 'E' ||
        ch == 'I' || 
        ch == 'O' ||
        ch == 'U'
        ) {
          std::cout << "Given is character is vowels" << std::endl;
        }
        else {
          std::cout << "Given is character is consonant" << std::endl;
        }
     }
   };

   private:
   char ch;
};