#pragma once

namespace uiuc{
class Cube {
  public:  // Public members:

    Cube(); // custom default constructor
    Cube(const Cube & obj); // copy constructor
    
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};
}