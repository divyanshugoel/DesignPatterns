/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class GetAtmState {
 private:
 public:
  virtual GetAtmState* getAtmState() = 0;
  virtual int getCashInMachine() = 0;
};
class ATMProxy : public GetAtmState {
 private:
  int cashwad = 100;
  GetAtmState* atmState;

 public:
  GetAtmState* getAtmState();
  int getCashInMachine();
};
class ATMMachine : public GetAtmState {
 private:
  int cashwad = 00;
  GetAtmState* atmState;

 public:
  GetAtmState* getAtmState();
  int getCashInMachine();
};
