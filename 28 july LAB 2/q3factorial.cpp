// WAP to find the factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is: "<<fact;
    return 0;
}