// write a object oriented program to read the rollno, name and marks of students and display the detail.

#include<iostream>
using namespace std;

class student{
    int rollno;
    char name[20];
    float marks;
public:
    void get_data();
    void display();
};

void student::get_data(){
    cout<<"Enter rollno : ";
    cin>>rollno;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter marks : ";
    cin>>marks;
};

void student::display(){
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
};

int main(){
    student s;
    s.get_data();
    s.display();
    return 0;
}

