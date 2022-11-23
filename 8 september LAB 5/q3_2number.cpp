// WAOOP to find the sum and product of two numbers using inline function.

#include<iostream>
using namespace std;

class test{
    int a,b,s,p;
    public:
        inline void getdata(){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
        void sum();
        void product();
};
 
inline void test::sum(){
    s=a+b;
    cout<<"Sum is: "<<s<<endl;
};

inline void test::product(){
    p=a*b;
    cout<<"Product is: "<<p<<endl;
};

int main(){
    test t;
    t.getdata();
    t.sum();
    t.product();
    return 0;
}

