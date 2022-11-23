// Write a program to convert Class to Class type.

#include <iostream>
using namespace std;

class Class1{
    public:
        int a;
        Class1(){
            cout << "Object of Class1 created" << endl;
        }
        Class1(int x){
            a = x;
        }
        void show(){
            cout << "a = " << a << endl;
        }
};

class Class2{
    int b;
    public:
        void operator =(Class1 c){
            b = c.a;
        }
        void show(){
            cout << "b = " << b << endl;
        }
};

int main(){
    Class1 c1(25);
    Class2 c2;
    c2 = c1;
    c1.show();
    c2.show();
    return 0;
}
