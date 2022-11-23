// WAOOP to read rollno, name, marks of a student and display using pointer to class.

#include<iostream>
using namespace std;

class PtoC{
    int rollno;
    char name[20];
    float marks;
    public:
        void getdata(){
            cout<<"Enter the rollno, name and marks: ";
            cin>>rollno>>name>>marks;
        }
        void display(){
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){
    PtoC *p;
    PtoC object;
    p=&object;
    p->getdata();
    p->display();
    return 0;
}