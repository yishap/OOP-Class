// WAP to accept a number between 1 and 10 and print the corresponding table using do while loop.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number between 1 and 10: ";
    cin>>num;
    int i=1;
    do{
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}