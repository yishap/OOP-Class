/* Write a menu driven program which has following options:
- Factorial of a number
- Prime or not
- Odd or Even.
*/

#include<iostream>
using namespace std;

class number{
    int num;
public:
    void get_num();
    void factorial();
    void prime();
    void odd_even();
};

void number::get_num(){
    cout<<"Enter a number: ";
    cin>>num;
}

void number::factorial(){
    int fact = 1;
    for(int i=1;i<=num;i++)
        fact *= i;
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
}

void number::prime(){
    int flag = 0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0)
        cout<<num<<" is a prime number"<<endl;
    else
        cout<<num<<" is not a prime number"<<endl;
}

void number::odd_even(){
    if(num%2==0)
        cout<<num<<" is an even number"<<endl;
    else
        cout<<num<<" is an odd number"<<endl;
}

int main(){
    number n;
    int choice;
    do{
        cout<<"\n1. Factorial\n2. Check if prime\n3. Odd or Even\n4. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                n.get_num();
                n.factorial();
                break;
            case 2:
                n.get_num();
                n.prime();
                break;
            case 3:
                n.get_num();
                n.odd_even();
                break;
            case 4:
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }while(choice!=4);
    return 0;
}