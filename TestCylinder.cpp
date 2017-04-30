#include "TestCylinder.h"

void TestCylinder::setHeight(double pHeight)
{
  mDef.setHeight(pHeight);
  m10.setHeight(pHeight);
}

void TestCylinder::output()
{
  mDef.output();
  m10.output();
}
