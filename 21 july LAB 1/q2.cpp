// To find if the number is positive or negetive.

#include <iostream>

int main()
{

    int a;
    std::cout<<"enter a number : ";
    std::cin>>a;

    if(a>0){
        std::cout<<a<<" is positive."<<std::endl;
    }
    else{
        std::cout<<a<<" is negetive."<<std::endl;
    }
    return 0;
}