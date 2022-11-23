// Write a program to convert basic to class type.

#include <iostream>
using namespace std;

class basic{
    int a;
    public:
        basic(int x){
            a = x;
        }
        void show(){
            cout << "Basic to class converted" << endl;
            cout << "a = " << a << endl;
        }
};

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    basic b = n;
    b.show();
    return 0;
}