/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Numbers {
 private:
  int num1;
  int num2;
  std::string calculationType;

 public:
  Numbers(int newNum1, int newNum2, std::string calcWanted) {
    num1 = newNum1;
    num2 = newNum2;
    calculationType = calcWanted;
  };
  int getNum1() { return (num1); }
  int getNum2() { return (num2); }
  std::string getCalcWanted() { return (calculationType); }
};

class Chain {
 private:
 public:
  virtual void setNextChain(Chain* nextChain) = 0;
  virtual void calculate(Numbers request) = 0;
};
class Addnumbers : public Chain {
 private:
  Chain* nextInChain;

 public:
  void setNextChain(Chain* nextChain);
  void calculate(Numbers request);
};
class Subtractnumbers : public Chain {
 private:
  Chain* nextInChain;

 public:
  void setNextChain(Chain* nextChain);
  void calculate(Numbers request);
};
