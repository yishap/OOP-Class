//  Find an element in an array using a function.
#include<iostream>
using namespace std;

void search(int a[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"The element is at a["<<i<<"]"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"The element is not found in the array."<<endl;
    }
}

int main(){
    int n,a[100],i,x;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>x;
    search(a,n,x);
    return 0;
}


