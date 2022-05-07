#ifndef GOOGLE_TEST_SAMPLE_CODE_TEST_FIXTURE_H
#define GOOGLE_TEST_SAMPLE_CODE_TEST_FIXTURE_H

class AccountTestFixture : public testing::Test {
  public:
    AccountTestFixture();

    virtual ~AccountTestFixture();

    void SetUp() override;

    void TearDown() override;

    static void SetUpTestCase();

    static void TearDownTestCase();

  protected:
    Account account;
};

AccountTestFixture::AccountTestFixture() {
  std::cout << "Constructor called\n";
}

AccountTestFixture::~AccountTestFixture() {
  std::cout << "Destructor called\n";
}

void AccountTestFixture::SetUpTestCase() {
  std::cout << "SetUpTestCase called\n";
}

void AccountTestFixture::TearDownTestCase() {
  std::cout << "TearDownTestCase called\n";
}

void AccountTestFixture::SetUp() {
  std::cout << "SetUp called\n";
  account.deposit(10.5);
}

void AccountTestFixture::TearDown() {
  std::cout << "TearDown called\n";
}

#endif
