// WAP to swap 2 numbers.
#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"Enter 2 number : ";
    cin>>a>>b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"The swapped numbers are : "<<a<<" "<< b;
    return 0;
}