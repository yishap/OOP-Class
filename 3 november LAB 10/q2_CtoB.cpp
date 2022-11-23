// Write a program to convert class to basic type.

#include <iostream>
using namespace std;

class Test{
    int a;
    public:
        Test(int x){
            a = x;
        }
        void show(){
            cout << "Class to basic converted" << endl;
            cout << "a = " << a << endl;
        }
        operator int(){
            return a;
        }
};

int main(){
    Test t(10);
    t.show();
    int n = t;
    cout << "n = " << n << endl;
    return 0;
}