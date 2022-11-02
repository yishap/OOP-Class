#include"Cube5.h"
#include <iostream>

using namespace std;
namespace uiuc{
    Cube::Cube(){
        length_ = 1;
        cout<<"Cube default constructor called"<<endl;
    }
    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        cout<<"Cube copy constructor called"<<endl;
    } 
    Cube & Cube::operator=(const Cube & obj){
        length_ = obj.length_;
        cout<<"Assignment operator called"<<endl;
        return *this;
    } 
}

using uiuc::Cube;
int main(){
    Cube c;
    Cube myCube;
    myCube=c;
    return 0;
}