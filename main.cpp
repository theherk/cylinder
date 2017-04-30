#include <iostream>
#include <iomanip>
#include "Cylinder.h"
#include "TestCylinder.h"

void nonInteractive()
{
  Cylinder c;
  c.setHeight(10);

  c.output();
}

void interactive()
{
  Cylinder c;

  double r, h;

  std::cout << "Please enter the radius: ";
  std::cin >> r;

  if (r == 0)
    {
      std::cout << "Using default radius." << std::endl;
    }
  else
    {
      c.setRadius(r);
    }

  std::cout << "Please enter the height: ";
  std::cin >> h;

  if (h == 0)
    {
      std::cout << "No height given. Skipping." << std::endl;
      return;
    }

  c.setHeight(h);

  c.output();
}

void testInteractive()
{
  TestCylinder test;

  double h;

  std::cout << "Please enter the height: ";
  std::cin >> h;

  if (h == 0)
    {
      std::cout << "No height given. Skipping." << std::endl;
      return;
    }

  test.setHeight(h);

  test.output();
}

void testNonInteractive()
{
  TestCylinder test;

  test.setHeight(13.4);

  test.output();
}

int main()
{
  std::setprecision(5);

  std::cout << "### Interactive ###\n" << std::endl;
  interactive();
  std::cout << std::endl;

  std::cout << "### Non-Interactive ###\n" << std::endl;
  nonInteractive();
  std::cout << std::endl;

  std::cout << "### Using TestCylinder Interactively ###\n" << std::endl;
  testInteractive();
  std::cout << std::endl;

  std::cout << "### Using TestCylinder Non-Interactively ###\n" << std::endl;
  testNonInteractive();
  std::cout << std::endl;

  return 0;
}
