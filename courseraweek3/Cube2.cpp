#include "Cube2.h"

namespace uiuc{
    Cube::Cube(){
        length_ = 1;
    }

    Cube::Cube(double length){
        length_ = length;
    }

    double Cube::getVolume(){
        return length_*length_*length_;
    }

     double Cube::getSurfaceArea(){
        return 6*length_*length_;
    }

    void Cube::setLength(double length){
        length_ = length;
    }
}

#include <iostream>
using namespace std;
int main(){
    uiuc::Cube c(2);
    cout << "Cube volume: " << c.getVolume() << endl;
    return 0;
}