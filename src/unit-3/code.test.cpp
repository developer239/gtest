#include <iostream>
#include <gtest/gtest.h>
#include "./code.h"

TEST(SquareRootTest, NegativeArgumentTest)
{
  double inputValue = -9;

  //ASSERT_ANY_THROW(mySqrt(inputValue));
  ASSERT_THROW(mySqrt(inputValue), std::runtime_error);
}


TEST(SquareRootTest, PositiveArgumentTest)
{
  double inputValue = 9;

  ASSERT_NO_THROW(mySqrt(inputValue));
}
