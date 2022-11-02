/* Write a menu driven to represent the class student with following specification:
-private member: rollno, name, marks[6], total.
-public member: get_data(), display(), total().
*/

#include<iostream>
using namespace std;

class student{
    int rollno;
    char name[20];
    float marks[6];
    float total;
public:
    void get_data();
    void display();
    void total_marks();
    void grade();
};

void student::get_data(){
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter marks: ";
    for(int i=0;i<6;i++)
        cin>>marks[i];
}

void student::display(){
    cout<<"\nRollno: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks of six subjects: ";
    for(int i=0;i<6;i++)
        cout<<marks[i]<<" ";
    cout<<endl;
}

void student::total_marks(){
    total = 0;
    cout<<"\nTotal marks: ";
    for(int i=0;i<6;i++)
        total += marks[i];
    cout<<total<<endl;
}

void student::grade(){
    int percent;
    percent = total*100/600;
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
    int choice;
    do{
        cout<<"\n1. Display data.\n2. Find total marks.\n3. Find grade\n4. Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: s.display();
                    break;
            case 2: s.total_marks();
                    break;
            case 3: s.grade();
                    break;
            case 4: break;
            default: cout<<"Invalid choice"<<endl;
        }
}while(choice!=4);
}


