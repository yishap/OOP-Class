// WAP to find the largest number among three numbers.

#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    int d;
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    cout<<"Largest number is: "<<d;
    }