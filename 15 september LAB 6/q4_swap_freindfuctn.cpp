// WAOOP to swap two number using friend function.

#include<iostream>
using namespace std;

class number2;
class number1{
    int a;
    public:
        void getdata(){
            cout<<"Enter the value of a: ";
            cin>>a;
        }  
        friend void swap(number1, number2);
        void display(){
            cout<<"Value of a: "<<a<<endl;
        }
};

class number2{
    int b;
    public:
        void getdata(){
            cout<<"Enter the value of b: ";
            cin>>b;
        }
        friend void swap(number1,number2);
        void display(){
            cout<<"Value of b: "<<b<<endl;
        }
};

void swap(number1 n1, number2 n2){
    int temp;
    temp = n1.a;
    n1.a = n2.b;
    n2.b = temp;
    cout<<"After swapping: "<<endl;
    n1.display();
    n2.display();
}

int main(){
    number1 n1;
    number2 n2;
    n1.getdata();
    n2.getdata();
    cout<<"Before swapping: "<<endl;
    n1.display();
    n2.display();
    swap(n1,n2);
    return 0;
}
