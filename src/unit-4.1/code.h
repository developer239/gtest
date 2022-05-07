#ifndef GOOGLE_TEST_SAMPLE_CODE_H
#define GOOGLE_TEST_SAMPLE_CODE_H

#include <stdexcept>

class Account {
  public:
    Account() : mBalance{ 0 } {
    }

    void deposit(double sum) {
      mBalance += sum;
    }

    void withdraw(double sum) {
      if (mBalance < sum) {
        throw std::runtime_error("Insufficient funds");
      }
      mBalance -= sum;
    }

    double getBalance() const {
      return mBalance;
    }

    void transfer(Account& to, double sum) {
      withdraw(sum); //will throw an error if not enough
      to.deposit(sum);
    }

  private:
    double mBalance;
};

#endif
