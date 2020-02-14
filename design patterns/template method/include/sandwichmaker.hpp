/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Sandwich {
 private:
 public:
  virtual void makeSandwich() final {
    cutBread();
    if (custWantsMeat()) {
      addMeat();
    }
    if (custWantsVeggies()) {
      addVeggies();
    }
    if (custWantsCondiments()) {
      addCondiments();
    }
    if (custWantsCheese()) {
      addCheese();
    }
    wrapBread();
  };
  void cutBread() { printf("the bread is cut\n"); };
  void wrapBread() { printf("the bread is wrapped\n"); };
  bool custWantsMeat() { return (true); };
  bool custWantsCheese() { return (true); };
  bool custWantsVeggies() { return (true); };
  bool custWantsCondiments() { return (true); };
  virtual void addCheese() = 0;
  virtual void addMeat() = 0;
  virtual void addCondiments() = 0;
  virtual void addVeggies() = 0;
};
class ItalianSub : public Sandwich {
 private:
 public:
  void addCheese() { printf("Adding Cheese\n"); };
  void addMeat() { printf("Adding Meat\n"); };
  void addCondiments() { printf("Adding Condiments\n"); };
  void addVeggies() { printf("Adding Veggies\n"); };
};
class VeggieSub : public Sandwich {
 private:
 public:
  bool custWantsMeat() { return (false); };
  bool custWantsCheese() { return (false); };
  void addCheese(){};
  void addMeat(){};
  void addCondiments() { printf("Adding Condiments\n"); };
  void addVeggies() { printf("Adding Veggies\n"); };
};
