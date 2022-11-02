#pragma once

namespace uiuc{
class Cube {
  public:  // Public members:

    Cube(); // custom default constructor
    Cube(double length); // one argument constructor
    
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};
}