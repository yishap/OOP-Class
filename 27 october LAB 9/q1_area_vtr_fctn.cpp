/* Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area
of each shape and display it, using virtual function. */

#include<iostream>
using namespace std;

class shape
{
    public:
        float area;
        virtual void calc_area()=0;
        virtual void display()=0;
};

class circle:public shape
{
    float r;
    public:
        void calc_area()
        {
            cout<<"Enter the radius of circle: ";
            cin>>r;
            area=3.14*r*r;
        }
        void display()
        {
            cout<<"Area of circle is: "<<area<<endl;
        }
};

class square:public shape
{
    float s;
    public:
        void calc_area()
        {
            cout<<"Enter the length of square: ";
            cin>>s;
            area=s*s;
        }
        void display()
        {
            cout<<"Area of square is: "<<area<<endl;
        }
};

class triangle:public shape
{
    float b,h;
    public:
        void calc_area()
        {
            cout<<"Enter the base and height of triangle: ";
            cin>>b>>h;
            area=0.5*b*h;
        }
        void display()
        {
            cout<<"Area of triangle is: "<<area<<endl;
        }
};

int main()
{
    shape *s;
    circle c;
    square sq;
    triangle t;
    s=&c;
    s->calc_area();
    s->display();
    s=&sq;
    s->calc_area();
    s->display();
    s=&t;
    s->calc_area();
    s->display();
    return 0;
}


