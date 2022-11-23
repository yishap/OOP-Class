// write a object oriented program to read the rollno, name and 3 marks of students and display the sum of marks.

#include<iostream>

using namespace std;

class student
{
    int rollno;
    char name[20];
    float marks[3];
public:
    void get_data();
    void display();
};

void student::get_data(){
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks: ";
    for(int i=0;i<3;i++)
        cin>>marks[i];
}

void student::display(){
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Total Marks: "<<marks[0] + marks[1] + marks[2]<<endl;
}

int main(){
    student s;
    s.get_data();
    s.display();
    return 0;
}



