#include <iostream>

int main (void) {
   std::string name[3] = {"Vikash","Aman","Yuraj"};
    //name[3] = new std::string [3];
   for (int i = 0; i < 3; i++) {
     std::cout << "Name : " << name[i] << std::endl;
   }

   std::string value[4];
   for (int i = 0; i < 4; i++) {
    std::cin >>  value[i];
   }

   for (int i = 0; i < 4; i++)
    std::cout >> value[i];
    return 0;
}