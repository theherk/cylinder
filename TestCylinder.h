#ifndef TESTCYLINDER_H
#define TESTCYLINDER_H
#include "Cylinder.h"

class TestCylinder
{
  Cylinder mDef;
  Cylinder m10;

 public:
  TestCylinder() : mDef(), m10(10){};

  void setHeight(const double pHeight);

  void output();
};

#endif
