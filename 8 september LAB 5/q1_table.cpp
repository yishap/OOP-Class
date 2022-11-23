/* WAOOP to create a table and print rollno, name, marks of 3 subject and grade of a students . */

#include<iostream>
using namespace std;

class student{
    int rollno;
    char name[20];
    int marks[3];
    float total;
    public:
        void getdata();
        void grade();
        void printdata();
};

void student::getdata(){
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks of 3 subjects: ";
    for(int i=0;i<3;i++){
        cin>>marks[i];
    }
};

void student::grade(){
    int percent;
    percent=total/3;
    if(percent>=90){
        cout<<"A"<<endl;
    }
    else if(percent>=80){
        cout<<"B"<<endl;
    }
    else if(percent>=70){
        cout<<"C"<<endl;
    }
    else if(percent>=60){
        cout<<"D"<<endl;
    }
    else{
        cout<<"F"<<endl;
    }
};

void bar(){
    for(int i=0;i<110;i++){
        cout<<"-";
    }
}

void student::printdata(){
    total=marks[0]+marks[1]+marks[2];
    bar();
    cout<<"\nRollno\t\tName\t\tMarks1\t\tMarks2\t\tMarks3\t\tTotal Marks\t\tGrade"<<endl;
    bar();
    cout<<"\n";
    cout<<rollno<<"\t"<<name<<"\t\t"<<marks[0]<<"\t\t"<<marks[1]<<"\t\t"<<marks[2]<<"\t\t"<<total<<"\t\t\t";
    grade();
    bar();
};

int main(){
    student s;
    s.getdata();
    s.printdata();
    return 0;
}


