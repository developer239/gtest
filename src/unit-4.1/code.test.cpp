#include <iostream>
#include <gtest/gtest.h>
#include <stdexcept>
#include "./code.h"
#include "./code.test.fixture.h"

TEST(AccountTestFixtures, TestEmptyAccount)
{
  Account account;

  double balance = account.getBalance();

  ASSERT_EQ(0, balance);
}


TEST_F(AccountTestFixture, TestDeposit)
{
  std::cout << "Test body\n";
  ASSERT_EQ(10.5, account.getBalance());
}


TEST_F(AccountTestFixture,  TestWithdrawOK)
{
  account.withdraw(3);

  ASSERT_EQ(7.5, account.getBalance());
}


TEST_F(AccountTestFixture,  TestWithdrawInsufficientFunds)
{
  ASSERT_THROW(account.withdraw(300), std::runtime_error);
}


TEST_F(AccountTestFixture, TestTransferOK)
{
  Account to;

  account.transfer(to, 2);

  ASSERT_EQ(8.5, account.getBalance());
  ASSERT_EQ(2, to.getBalance());
}


TEST_F(AccountTestFixture, TestTransferInsufficientFunds)
{
  Account to;

  ASSERT_THROW(account.transfer(to, 200), std::runtime_error);
}
