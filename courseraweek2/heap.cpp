#include<iostream>

int main(){

    int *numptr = new int;

    std::cout << "value of *numptr : " << *numptr << std::endl;
    std::cout << "value of numptr : " << numptr << std::endl;
    std::cout << "value of &numptr : " << &numptr << std::endl;

    *numptr = 412;
    std::cout << "value of *numptr : " << *numptr << std::endl;
    std::cout << "value of numptr : " << numptr << std::endl;
    std::cout << "value of &numptr : " << &numptr << std::endl;
    
}