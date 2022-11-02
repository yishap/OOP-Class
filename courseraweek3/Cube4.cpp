#include "Cube4.h"

using namespace std;
#include <iostream>

namespace uiuc{
    Cube::Cube(){
        length_ = 1.0;
        cout<<"Cube default constructor called"<<endl;
    }
    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        cout<<"Cube copy constructor called"<<endl;
    }
    
}

using uiuc::Cube;

int main(){
    Cube c;
//    Cube myCube=c;
    Cube myCube;
    myCube=c;
    return 0;
}