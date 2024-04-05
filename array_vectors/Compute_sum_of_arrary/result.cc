#include <iostream>
#include "result.h"

using std::string;

Result::Result (
    int array[],
    const int &val,
    const string &output
):SumOfArray(array,val) {
  std::cout << output << std::endl;
  SumOfArray::print();
  SumOfArray::getResult(array,val);
  std::cout << "\n GET ARRAY ALL ELEMENTS : \n" << std::endl;
};

Result::~Result () {
    std::cout << "RESULT OBJECT IS DESTROYED !" << std::endl;
}

Result::SumOfArray::~SumOfArray () {
    std::cout << "SumOfArray object is destroyed!" << std::endl;
}

