// Write a program to demonstrate hybrid inheritance.

#include <iostream>
using namespace std;

class Base
{
    public:
        int a;
};

class Derived1 : virtual public Base
{
    public:
        int b;
};

class Derived2 : virtual public Base
{
    public:
        int c;
};

class Derived3 :public Derived2, public Derived1
{
    public:
        int total;
};

int main()
{
    Derived3 obj;
    obj.a = 10;
    obj.b = 20;
    obj.c = 30;
    obj.total = obj.a + obj.b + obj.c;
    cout << "Total = " << obj.total << endl;
    return 0;
}

