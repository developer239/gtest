#ifndef GOOGLE_TEST_SAMPLE_CODE_5_H
#define GOOGLE_TEST_SAMPLE_CODE_5_H

class Validator {
  public:
    Validator(int low, int high);

    bool inRange(int valueToTest) const;

  private:
    int mLow, mHigh;
};

Validator::Validator(int low, int high) : mLow{ low }, mHigh{ high } {
}

bool Validator::inRange(int valueToTest) const {
  return mLow <= valueToTest && valueToTest <= mHigh;
}


#endif
