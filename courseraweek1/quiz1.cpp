// Create a class called Pair that has two public integer member variables named "a" and "b", and a publicmember function named sum() that has no arguments but adds the two member variables together and returns their sum.
#include<iostream>
class pair
{
    public:
    int a,b;
    int sum()
    {
        return a+b;
    }
};
int main()
{
    pair p;
    p.a=100;
    p.b=200;
    if(p.a+p.b==p.sum())
    {
        std::cout<<"success!"<<std::endl;
    }
    else
    {
        std::cout<<"p.sum() returns"<<p.sum()<<"instead of"<<(p.a+p.b)<<std::endl;
    }
    return 0;
}
