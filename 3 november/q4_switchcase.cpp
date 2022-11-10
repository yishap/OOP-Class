/* WAP in switch case to perform 
   - Unary operator overloading
   - Binary operator overloading  */

#include <iostream>
using namespace std;

class Test{
    int a, b, c;
    public:
        void read_data(){
            cout << "Enter three numbers: ";
            cin >> a >> b >> c;
        }
        void show(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
            cout << "c = " << c << endl;
        } 
        void operator ++(){
            a++;
            b++;
            c++;
        }
        Test operator +(Test t){
            Test temp;
            temp.a = a + t.a;
            temp.b = b + t.b;
            temp.c = c + t.c;
            return temp;
        }
};

int main(){
    Test t1,t2,t3;   
    int ch;
    do{
        cout << "1. Unary operator overloading" << endl;
        cout << "2. Binary operator overloading" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch){
            case 1:
                t1.read_data();
                ++t1;
                t1.show();
                break;
            case 2:
                t1.read_data();
                t2.read_data();
                t3 = t1 + t2;
                t3.show();
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(ch != 3);
    return 0;
}
