// To find if the number is odd or even.

#include <iostream>

int main()
{

    int a;
    std::cout<<"enter a number : ";
    std::cin>>a;

    if((a%2)==0){
        std::cout<<a<<" is even."<<std::endl;
    }
    else{
        std::cout<<a<<" is odd."<<std::endl;
    }
    return 0;
}