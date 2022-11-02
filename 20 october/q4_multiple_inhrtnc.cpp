// Write a program to demonstrate multiple inheritance.

#include <iostream>
using namespace std;

class Base1
{
    public:
        int a;
};

class Base2
{
    public:
        int b;
};

class Derived : public Base1, public Base2
{
    public:
        int total;
};

int main()
{
    Derived obj;
    obj.a = 10;
    obj.b = 20;
    obj.total = obj.a + obj.b;
    cout << "Total = " << obj.total << endl;
    return 0;
}