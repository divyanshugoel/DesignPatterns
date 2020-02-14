/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class WelcomeToBank {
 private:
 public:
  WelcomeToBank() { printf("Happy to serve\n"); };
};
class AccountNumberCheck {
 private:
  int account_no = 12345;

 public:
  int getAccountNo() { return (account_no); }
  bool accountActive(int account_number_to_check) {
    if (account_number_to_check == account_no)
      return (true);
    else
      return (false);
  }
};
class SecurityNumberCheck {
 private:
  int pin_no = 1234;

 public:
  int getSecurityNo() { return (pin_no); };
  bool isCodeCorrect(int pin_number_to_check) {
    if (pin_number_to_check == pin_no)
      return (true);
    else
      return (false);
  };
};
class AccountFundsCheck {
 private:
  int funds = 950;

 public:
  int getBalance() { return (funds); };
  void decreaseCashInAccount(int cashWithdrawn) { funds -= cashWithdrawn; };
  void IncreaseCashInAccount(int cashWithdrawn) { funds += cashWithdrawn; };
  void makeDeposit(int CashToDeposit) {
    IncreaseCashInAccount(CashToDeposit);
    printf("Deposited Funds!!!!\n");
    printf("Current Balance %d\n", getBalance());
  };
  bool haveEnoughMoney(int CashToWithDraw) {
    if (CashToWithDraw > funds) {
      printf("Insufficient Funds!!!!\n");
      printf("Current Balance %d\n", getBalance());
    } else {
      printf("Withdrawing Balance %d\n", CashToWithDraw);
      decreaseCashInAccount(CashToWithDraw);
      printf("Current Balance %d\n", getBalance());
      return (true);
    }
  };
};

class BankInterface {
 private:
  int account_no;
  int pin_no;
  WelcomeToBank *num0;
  AccountNumberCheck *num1;
  AccountFundsCheck *num2;
  SecurityNumberCheck *num3;

 public:
  BankInterface(int account_no_, int pin_no_) {
    account_no = account_no_;
    pin_no = pin_no_;
    num0 = new WelcomeToBank();
    num1 = new AccountNumberCheck();
    num2 = new AccountFundsCheck();
    num3 = new SecurityNumberCheck();
  }
  int getAccountNo() { return (account_no); };
  int getSecurityNo() { return (pin_no); };
  void makeDeposit(int amount) {
    if (num1->accountActive(getAccountNo()) &&
        num3->isCodeCorrect(getSecurityNo())) {
      num2->makeDeposit(amount);
      printf("transaction is successful !!!\n");
    } else {
      printf("transaction failed !!!\n");
    }
  };
  void makeWithdrawl(int amount) {
    if (num1->accountActive(getAccountNo()) &&
        num3->isCodeCorrect(getSecurityNo()) && num2->haveEnoughMoney(amount)) {
      printf("transaction is successful !!!\n");

    } else {
      printf("transaction failed !!!\n");
    }
  };
};
