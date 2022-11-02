// WAOOP to read like roll, name and 3 mark of a student, calculate the grade & display it.

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
    float total;
    float percent;
    void grade();
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
    cout<<"\nRollno: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    total = marks[0] + marks[1] + marks[2];
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Grade: ";
    grade();
}

void student::grade(){
    percent=(total/300)*100;
    if(percent>=90)
        cout<<"Grade: O"<<endl;
    else if(percent>=80)
        cout<<"Grade: E"<<endl;
    else if(percent>=70)
        cout<<"Grade: A"<<endl;
    else if(percent>=60)
        cout<<"Grade: B"<<endl;
    else
        cout<<"Grade: F"<<endl;
}

int main(){
    student s;
    s.get_data();
    s.display();
    return 0;
}
