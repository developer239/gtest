#ifndef GOOGLE_TEST_SAMPLE_CODE_H
#define GOOGLE_TEST_SAMPLE_CODE_H

#include <stdexcept>

class Account
{
  public:
    Account();
    void deposit(double sum);
    void withdraw(double sum);
    double getBalance() const;
    void transfer(Account &to, double sum);
  private:
    double mBalance;
};

Account::Account() : mBalance{ 0 } {
}

void Account::deposit(double sum) {
  mBalance += sum;
}

void Account::withdraw(double sum) {
  if (mBalance < sum) {
    throw std::runtime_error("Insufficient funds");
  }
  mBalance -= sum;
}

double Account::getBalance() const {
  return mBalance;
}

void Account::transfer(Account& to, double sum) {
  withdraw(sum); //will throw an error if not enough
  to.deposit(sum);
}

#endif
