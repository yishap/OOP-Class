/* Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. 
The ‘Part-Time’ class stores the number of hours and pay per hour. 
Calculate the salary of a regular employee and a par-time employee, using virtual function. */

#include<iostream>
using namespace std;

class employee
{
    public:
        char name[20];
        int id;
        float salary;
        virtual void calc_salary()=0;
        virtual void display()=0;
};

class regular:public employee
{
    float da,hra,basic;
    public:
        void calc_salary()
        {
            cout<<"\nFor regular employee"<<endl;
            cout<<"\nEnter the name, id ,basic salary, da and hra: ";
            cin>>name>>id>>basic>>da>>hra;
            salary=da+hra+basic;
        }
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"Id: "<<id<<endl;
            cout<<"Total Salary: "<<salary<<endl;
        }
};

class part_time:public employee
{
    float hours,pay;
    public:
        void calc_salary()
        {
            cout<<"\nFor part time employee"<<endl;
            cout<<"Enter the name, id, hours and pay per hour: ";
            cin>>name>>id>>hours>>pay;
            salary=hours*pay;
        }
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"Id: "<<id<<endl;
            cout<<"Total Salary: "<<salary<<endl;
        }
};

int main()
{
    regular r;
    part_time p;
    employee *e;
    e=&r;
    e->calc_salary();
    e->display();
    e=&p;
    e->calc_salary();
    e->display();
    return 0;
}
