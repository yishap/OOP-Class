// Write a program to demonstrate multilevel inheritance.

#include <iostream>
using namespace std;

class Base
{
    public:
        int a;
};

class Derived1 : public Base
{
    public:
        int b;
};

class Derived2 : public Derived1
{
    public:
        int total;
};

int main()
{
    Derived2 obj;
    obj.a = 10;
    obj.b = 20;
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
    obj.total = obj.a + obj.b;
    cout << "Total = " << obj.total << endl;
    return 0;
}
