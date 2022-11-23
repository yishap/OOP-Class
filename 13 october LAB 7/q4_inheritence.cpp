/* Write a program using single inheritance to calculate the grade of the students, use the
 parent class person to read the name and use the child class to read three marks of the
 student and display the grade. */

#include<iostream>
using namespace std;

class person
{
    char name[20];
    int roll;
    public:
        void get_data()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter roll number: ";
            cin>>roll;
        }
        void display_detail()
        {
            cout<<"Name: "<<name;
            cout<<"Roll number: "<<roll;
        }
};

class student: public person
{
    int m1,m2,m3;
    public:
        void read_marks()
        {
            cout<<"Enter marks of three subjects: ";
            cin>>m1>>m2>>m3;
        }
        void display()
        {
            cout<<"Marks: "<<m1<<", "<<m2<<", "<<m3<<endl;
            cout<<"Grade: ";
            int avg = (m1+m2+m3)/3;
            if(avg>=90)
                cout<<"O";
            else if(avg>=80)
                cout<<"E";
            else if(avg>=70)
                cout<<"A";
            else if(avg>=60)
                cout<<"B";
            else
                cout<<"F";
        }
};

int main()
{
    student s;
    s.get_data();
    s.read_marks();
    s.display_detail();
    s.display();
    return 0;
}