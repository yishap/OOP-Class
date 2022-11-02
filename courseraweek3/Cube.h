#pragma once

namespace uiuc{
class Cube {
  public:  // Public members:

    Cube(); // custom default constructor
    
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};
}