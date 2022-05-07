#ifndef GOOGLE_TEST_SAMPLE_CODE_H
#define GOOGLE_TEST_SAMPLE_CODE_H

#pragma once
#include <vector>

bool isPositive(int x)
{
  return x >= 0;
}

int countPositives(std::vector<int> const& inputVector)
{
  return std::count_if(inputVector.begin(), inputVector.end(), isPositive);
}

#endif
