#ifndef GOOGLE_TEST_SAMPLE_CODE_H
#define GOOGLE_TEST_SAMPLE_CODE_H

#include <cctype>
#include <cstring>

void toUpper(char *inputString)
{
  for(unsigned i = 0; i < strlen(inputString); i++)
  {
    inputString[i] = toupper(inputString[i]); //a -> A, b -> B
  }
}

#endif
