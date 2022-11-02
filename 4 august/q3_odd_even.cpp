// Find even and odd numbers in an array using a function.

#include<iostream>
using namespace std;

void even(int a[],int n)
{
    int i;
    cout<<"The even numbers are : ";
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<" "<<a[i];
        }
}
cout<<endl;
}

void odd(int a[],int n)
{
    int i;
    cout<<"The odd numbers are : ";
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<" "<<a[i];
        }
}
}

int main(){
    int n,a[100];
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    even(a,n);
    odd(a,n);
    return 0;
}