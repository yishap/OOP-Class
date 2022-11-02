// A class type called "Pair" has already been defined for you. You need to write a function called pairFactory that creates an instance of Pair on the heap. Do not create the object on the stack. Then, your function needs to return a pointer to that created object.

#include <iostream>

class Pair {
public:
  int first, second;
  void check() {
    first = 5;
    std::cout << "Congratulations! The check() method of the Pair class \n has executed. (But, this isn't enough to guarantee \n that your code is correct.)" << std::endl;
  }
};
