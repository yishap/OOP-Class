// WAP to reverse a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev=0;
    while(num>0){
        rev=rev*10+num%10;
        num=num/10;
    }
    cout<<"Reverse is: "<<rev;
    return 0;
}