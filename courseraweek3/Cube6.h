#pragma once

namespace uiuc{
class Cube {
  public:  // Public members:
    Cube(double length); // Constructor
    Cube(const Cube & obj); // custom copy constructor
    Cube & operator=(const Cube & obj); // custom assignment operator
        
    
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};
}