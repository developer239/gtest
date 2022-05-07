#ifndef GOOGLE_TEST_SAMPLE_CODE_H
#define GOOGLE_TEST_SAMPLE_CODE_H

#include <cmath>

double mySqrt(double input)
{
  if(input < 0)
  {
    std::cout << "Exception thrown\n";
    throw std::runtime_error("Negative argument");
  }
  std::cout << "No exception thrown\n";

  return sqrt(input);
}


#endif
