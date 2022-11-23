// Write a program to demonstrate ++ unary operator overloading.

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
        void operator ++(){
            a++;
            b++;
            c++;
        }
        void display(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        }
};

int main(){
    Test obj;
    obj.read_data(10,20,30);
    cout<<"Before incrementing: "<<endl;
    obj.display();
    ++obj;
    cout<<"After incrementing: "<<endl;
    obj.display();
    return 0;
}