#include <iostream>
#include <iomanip>
#include "Cylinder.h"

Cylinder::Cylinder() {
  setRadius(3);
}

Cylinder::Cylinder(double pRadius)
  : mRadius(pRadius)
{}

void Cylinder::setRadius(double pRadius)
{
  mRadius = pRadius;
}

void Cylinder::setHeight(double pHeight)
{
  mHeight = pHeight;
}

double Cylinder::getRadius() const
{
  return mRadius;
}

double Cylinder::getHeight() const
{
  return mHeight;
}

double Cylinder::area()
{
  return (2 * PI * mRadius * mRadius) + (2 * PI * mRadius * mHeight);
}

void Cylinder::output()
{
  std::cout << "Cylinder dimensions:\n";
  std::cout << "\t" << std::setw(8) << std::left << "radius: " << mRadius << std::endl;
  std::cout << "\t" << std::setw(8) << std::left << "height: " << mHeight << std::endl;
  std::cout << "\t" << std::setw(8) << std::left << "area: " << area() << "\n" << std::endl;
}
