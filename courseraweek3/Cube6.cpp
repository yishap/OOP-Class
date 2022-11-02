#include"Cube6.h"
#include <iostream>

using namespace std;
namespace uiuc{

    Cube::Cube(double length){
        length_ = length;
        cout<<"Created $ "<<getVolume()<<endl;
    }
    Cube::Cube(const Cube & obj){
        length_ = obj.length_;
        cout<<"Created $ "<<getVolume()<<" via copy "<<endl;
    } 
    Cube & Cube::operator=(const Cube & obj){
        length_ = obj.length_;
        cout<<"Assigned $ "<<getVolume()<<" via copy "<<endl;
        return *this;
    }
    double Cube::getVolume(){
        return length_*length_*length_;
    }
}

using uiuc::Cube;
int main(){
    Cube c(10);
    //  Cube myCube =c;
    // Cube & myCube =c;
    Cube *myCube=&c;
    return 0;   
}