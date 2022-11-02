#include"Cube8.h"
#include <iostream>

using namespace std;
namespace uiuc{
    Cube::Cube(){
        length_ = 1.0;
        cout<<"Created $1 (default) "<<endl;
    }

    Cube::Cube(double length){
        length_ = length;
        cout<<"Created $ "<<getVolume()<<endl;
    }

    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        cout<<"Created $ "<<getVolume()<<" via copy "<<endl;
    } 
    Cube::~Cube(){
        cout<<"Destroyed $ "<<getVolume()<<endl;
    }

    Cube & Cube::operator=(const Cube & obj){
        length_ = obj.length_;
        cout<<"Transformed $ "<<getVolume()<<endl;
        return *this;
    }
    double Cube::getVolume(){
        return length_*length_*length_;
    }
}

using uiuc::Cube;
double cube_on_stack(){
    Cube c(3);
    return c.getVolume();
}
void cube_on_heap(){
    Cube *c1 = new Cube(10);
    Cube *c2 = new Cube;
    delete c1;
}
int main(){
    cube_on_stack();
    cube_on_heap();
    cube_on_stack();

    return 0;   
}