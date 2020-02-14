/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Pizza {
 private:
 public:
  virtual std::string getDescription() = 0;
  virtual double getCost() = 0;
};
class PlainPizza : public Pizza {
 private:
  std::string description = "thin Dough";
  double cost = 4;

 public:
  void setDescription(std::string);
  std::string getDescription();
  double getCost();
};
class ToppingDecorator : public Pizza {
 protected:
  Pizza* newPizza;
  Pizza* newPizz2a;

 public:
  ToppingDecorator(Pizza* tempPizza) { newPizz2a = tempPizza; };
  std::string getDescription() { return (newPizz2a->getDescription()); };
  double getCost() { return (newPizz2a->getCost()); };
};
class Mozzarella : public ToppingDecorator {
 public:
  Mozzarella(Pizza* newPizza) : ToppingDecorator(newPizza) {
    printf("Adding Dough\n");
    printf("Adding Moz\n");
  };
  std::string getDescription() {
    return (newPizz2a->getDescription() + ", Mozzarella");
  };
  double getCost() { return (newPizz2a->getCost() + 2); };
};
class TomatoSauce : public ToppingDecorator {
 public:
  TomatoSauce(Pizza* newPizza) : ToppingDecorator(newPizza) {
    printf("Adding Sauce\n");
  };
  std::string getDescription() {
    return (newPizz2a->getDescription() + ", Tomato Sauce");
  };
  double getCost() { return (newPizz2a->getCost() + 1); };
};
class MeatBalls : public ToppingDecorator {
 public:
  MeatBalls(Pizza* newPizza) : ToppingDecorator(newPizza) {
    printf("Adding Niku\n");
  };
  std::string getDescription() {
    return (newPizz2a->getDescription() + ", Niku");
  };
  double getCost() { return (newPizz2a->getCost() + 1); };
};
