// WAP to find factorial of a number.

#include<iostream>
using namespace std;

int main()
{
    int a,n,i;
    cout<<"enter a number : ";
    cin>>a;
    n=1;
    for(i=a;i>0;i--)
    {
        n=n*i;
    }
    cout<<"factorial of "<<a<<" is "<<n;
    return 0;
}