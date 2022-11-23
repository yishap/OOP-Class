// WAOOP to calculate the average of two number using friend function.

#include<iostream>
using namespace std;

class friend1{
    float a,b;
    public:
        void getdata(float x, float y){
            a=x;
            b=y;
        }
        friend float avg(friend1, friend1);
};

float avg(friend1 f, friend1 g){
    return (f.a+g.b)/2; 
}

int main(){
    friend1 f;
    f.getdata(60.5, 70.5);
    cout<<"Average of two number is: "<<avg(f,f);
    return 0;
}

