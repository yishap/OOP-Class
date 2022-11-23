// Using function find the sum of the following expression  1 + (a^2/2!) + (a^3/3!) + (a^4/4!) + ------- + (a^n/n!)

#include <iostream>
using namespace std;

double pow(double a, double n)
{
    double sum = 1;
    while(n>0)
    {
        sum = sum * a;
        n--;
    }
    return sum;
}

double fact(double n)
{
    double sum = 1;
    for (double i = 1; i <= n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

int main(){
    double n;
    double a,sum;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of a : ";
    cin>>a;
    sum=0;
    for(double i=2;i<=n;i++)
    {
        sum=sum+pow(a,i)/fact(i);
    }
    sum=sum+1;
    cout<<"The sum of the expression is : "<<sum;
    return 0;
}
