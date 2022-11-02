// Write a program to read the detail of student using structure and display the details.
#include<iostream>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    float marks;
};

void display(student s)
{
    cout<<"The details of student are:"<<endl;
    cout<<"Roll no: "<<s.rollno<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}

int main(){
    student s;
    cout<<"Enter the details of student"<<endl;
    cout<<"Enter the rollno : ";
    cin>>s.rollno;
    cout<<"Enter the name : ";
    cin>>s.name;
    cout<<"Enter the marks : ";
    cin>>s.marks;
    display(s);
    return 0;
}