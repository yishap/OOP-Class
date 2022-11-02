// Write a program to find the sum of n natural numbers using parameterized constructor.

#include<iostream>
using namespace std;

class sum
{
    int n;
    int s;
    public:
        sum();
        sum(int x)
        {
            s=x;
        }
        void get_data()
        {
            cout<<"Enter last number to add: ";
            cin>>n;
        }
        void display()
        {
            cout<<"Sum of numbers is "<<s;
        }
        void calc();
};

void sum::calc()
{
    for(int i=1;i<=n;i++)
    s+=i;
}

int main()
{
    int p;
    cout<<"Enter a number to start: ";
    cin>>p;
    sum num(p);
    num.get_data();
    num.calc();
    num.display();
    return 0;
}