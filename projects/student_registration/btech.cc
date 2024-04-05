#include <iostream>
#include "btech.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;


void Btech::getData () {
    cout <<"\n\n Bachelor of Technology registration --- \n" << endl;
    cout << "Enter course duration : " << endl;
   int time; // LOCAL VARIALBE
   cin >> time; // INPUT PROMPT
   // ASSIGN TIME WITHIN IN DURATION PRIVATE MEMBER
   duration = time;
    
    // ASK FOR ALL VALID SUBJECTS
    for (int i = 0; i < 5; i++) {
        cout << "Enter subject name : " << i + 1 << endl;
        string subjectName;
        cin >> subjectName;
  
       subjects[i] = subjectName;

    }
      
}

void Btech::display () const {
    cout << this->duration << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "o " << subjects[i] << endl;
    }
}

Btech::~Btech(){
    cout << "OBJECT IS DESTORYED BY USER" << endl;
}