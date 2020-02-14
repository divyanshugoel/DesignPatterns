#include <BankInterface.hpp>

int main(int argc, char **argv) {
  BankInterface *r1 = new BankInterface(12345, 1234);
  r1->makeWithdrawl(5000);
  r1->makeWithdrawl(50);
  r1->makeDeposit(50);

  delete r1;
  return 0;
}
