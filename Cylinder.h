#ifndef CYLINDER_H
#define CYLINDER_H

const double PI = 3.14;

class Cylinder
{
  double mArea;
  double mHeight;
  double mRadius;

  double calcArea();

 public:
  Cylinder();
  Cylinder(double pRadius);

  double getRadius() const;
  double getHeight() const;

  void setRadius(const double pRadius);
  void setHeight(const double pHeight);

  double area();
  void output();
};

#endif
