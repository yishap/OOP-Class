// Write a program to demonstrate * binary operator overloading.

#include <iostream>
using namespace std;

class Test{
    int a,b,c;
    public:
        void read_data(int x, int y, int z){
            a = x;
            b = y;
            c = z;
        }
        void operator *(Test obj){
            a = a * obj.a;
            b = b * obj.b;
            c = c * obj.c;
        }
        void display(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        }
};

int main(){
    Test obj1, obj2;
    obj1.read_data(10,20,30);
    obj2.read_data(2,3,4);
    cout<<"Before multiplication: "<<endl;
    obj1.display();
    obj2.display();
    obj1 * obj2;
    cout<<"After multiplication: "<<endl;
    obj1.display();
    return 0;
}