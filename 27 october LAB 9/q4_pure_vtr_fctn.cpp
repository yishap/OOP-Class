// WAP to demonstrate use of pure virtual function and abstract base class.

#include<iostream>
using namespace std;

class Test{
    public:
    int a,b;
    virtual void total()=0;
    virtual void display()=0;
};

class Result:public Test{
    public:
        int c;
        void total(){
            c=a+b;
        }
        void display(){
            cout<<"Total is: "<<c<<endl;
        }
};

int main(){
    Result r;
    r.a=10;
    r.b=20;
    r.total();
    r.display();
    return 0;
}




