#include "Data.h"
#include <iostream>

Data::Data () {
    std::cout << "Enter key : ";
    std::cin >> key;
    
    insertion_sort();
};

void Data::insertion_sort () {
    for (int i = 0; i < 10; i++)
     std::cout << arry[i] << " ";

     std::cout << "\n\n" << std::endl;
    int insert;

    for (int next = 1; next < length; next++) {
        insert = arry[next];

        int moveItem = next;

        while ((moveItem > 0) && (arry[moveItem - 1] > insert)) {
           
           arry[moveItem] = arry [moveItem - 1];
           moveItem--;
        }

        arry[moveItem] = insert;
    }
    std::cout << "\n\n\n" << std::endl;
    for (int i = 0; i < 10; i++)
     std::cout << arry[i] << " ";
}

Data::~Data () {
    std::cout << "\n\n Object is destroyed now!" 
    << std::endl;
}

