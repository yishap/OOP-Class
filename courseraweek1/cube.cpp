#include <iostream>
#include "Cube.h"

using std::cout;
using std::endl;
namespace uiuc{


double Cube::getVolume() {
  return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
  return 6 * length_ * length_;
}

void Cube::setLength(double length) {
  length_ = length;
}
}
int main() {
  uiuc::Cube c;

  c.setLength(3.48);

  double volume = c.getVolume();
  cout << "Volume: " << volume <<endl;

  double surfacearea = c.getSurfaceArea();
  cout << "surfacearea: " << surfacearea <<endl;
  return 0;
}
