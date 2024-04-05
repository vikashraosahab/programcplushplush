// DYNAMIC MEMORY FOR ARRAY

#include <iostream>

using namespace std;

#define MAX_SIZE 100

int main (void)
{
   char *comment = new char [MAX_SIZE];
   
   cin.getline (comment,MAX_SIZE);
   
   cout << comment << endl;

   delete[] comment;
    return 0; 
}