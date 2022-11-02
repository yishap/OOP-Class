#include "Cube3.h"

using namespace std;
#include <iostream>

namespace uiuc{
    Cube::Cube(){
        length_ = 1;
        cout<<"default constructor"<<endl;
    }
    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        cout<<"copy constructor"<<endl;
    }
}

using uiuc::Cube;
void foo(Cube cube){
    //nothing
}
int main(){
    Cube c; 
    foo(c);
    return 0;
}