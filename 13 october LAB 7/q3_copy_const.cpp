// Write a program to demonstrate a copy constructor.

#include<iostream>
using namespace std;

class Copy{
    int a;
    int b;
    public:
        Copy(){
            cout<<"Defualt constructor invoked."<<endl;
        }
        Copy(int x,int y){
            a=x;
            b=y;
            cout<<"\nparameterized const executed\n values are: ";
            cout<<a<<" "<<b<<endl;
        }
        Copy(Copy &c){
            a=c.a;
            b=c.b;
            cout<<"\ncopy const executed\n values are: ";
            cout<<a<<" "<<b<<endl;
        }
        ~Copy(){
            cout<<"\nDestructor invoked."<<endl;
        }
};

int main(){
    Copy c1;
    Copy c2(10,20);
    Copy c3(c2);
    return 0;
}
