// Write a program to find the factorial of n natural numbers using default constructor.

#include<iostream>
using namespace std;

class factorial
{
    int num;
    int fact;
    public:
        factorial()
        {
            fact = 1;
        }
        void read_data(){
            cout<<"Enter a number: ";
            cin>>num;
        }
        void display()
        {
            cout<<"Factorial of "<<num<<" is "<<fact;
        }
        void calc();
};

void factorial::calc()
{
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
}

int main()
{
    factorial f;
    f.read_data();
    f.calc();
    f.display();
    return 0;
}