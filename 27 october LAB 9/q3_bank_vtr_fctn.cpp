/* Create a class which stores account number, customer name and balance. Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’.
The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the over-due amount. 
Include member functions in the appropriate class for:
-deposit money
-withdraw [For saving account minimum balance should be checked.] [For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function. */

#include<iostream>
using namespace std;

class account
{
    public:
        int acc_no;
        char name[20];
        float balance;
        virtual void deposit()=0;
        virtual void withdraw()=0;
        virtual void display()=0;
};

class savings:public account
{
    float min_bal;
    public:
        void deposit()
        {   
            cout<<"\nFor savings account"<<endl;
            cout<<"Enter the account number : ";
            cin>>acc_no;
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the balance : ";
            cin>>balance;
            cout<<"Enter the minimum balance : ";
            cin>>min_bal;
        }
        void withdraw()
        {
            float w;
            cout<<"Enter the amount to withdraw: ";
            cin>>w;
            if(balance-w>=min_bal)
            {
                balance-=w;
                cout<<"Withdraw successful"<<endl;
            }
            else
            {
                cout<<"Withdraw unsuccessful"<<endl;
            }
        }
        void display()
        {
            cout<<"Account number: "<<acc_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

class current:public account
{
    float over_due;
    public:
        void deposit()
        {
            cout<<"\nFor current account"<<endl;
            cout<<"Enter the account number : ";
            cin>>acc_no;
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the balance : ";
            cin>>balance;
            cout<<"Enter the over due amount : ";
            cin>>over_due;
        }
        void withdraw()
        {
            float w;
            cout<<"Enter the amount to withdraw: ";
            cin>>w;
            if(balance-w>=over_due)
            {
                balance-=w;
                cout<<"Withdraw successful"<<endl;
            }
            else
            {
                cout<<"Withdraw unsuccessful"<<endl;
            }
        }
        void display()
        {
            cout<<"Account number: "<<acc_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int main()
{
    savings s;
    current c;
    account *a;
    a=&s;
    a->deposit();
    a->withdraw();
    a->display();
    a=&c;
    a->deposit();
    a->withdraw();
    a->display();
    return 0;
}
