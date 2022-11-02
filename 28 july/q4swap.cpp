// WAP to swap two numbers using a third variable.
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: "<<a<<" "<<b;
    return 0;
}