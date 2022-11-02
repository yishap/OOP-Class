#include<iostream>

void foo(){
    int x = 47;
    std::cout << "x in main : " << x << std::endl;
    std::cout << "&x in main : " << &x << std::endl;
}

int main(){
    int num = 7;
    std::cout << "num in main : " << num << std::endl;
    std::cout << "&num in main : " << &num << std::endl;
    int *p = &num;
    std::cout << "value of p : " << p << std::endl;
    *p = 99;
    std::cout << "value of *p : " << *p << std::endl;
    foo();
}