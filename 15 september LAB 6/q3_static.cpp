// WAOOP to display the details of book using static member function.

#include<iostream>
using namespace std;

class Book{
    int bookno;
    char title[20];
    float price;
    static int count;
    public:
        void getdata(){
            cout<<"Enter the bookno, title and price: ";
            cin>>bookno>>title>>price;
            count++;
        }
        void display(){
            cout<<"Bookno: "<<bookno<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }
        static void print(){
            cout<<"Total number of books: "<<count<<endl;
        }
};

int Book::count;

int main(){
    Book b1, b2;
    b1.getdata();
    b2.getdata();
    b1.display();
    b2.display();
    Book::print();
    return 0;
}