/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Animal {
 private:
 public:
  virtual Animal* makeACopy(){};
};
class Sheep : public Animal {
 private:
  std::string data;

 public:
  Sheep();
  Animal* makeACopy();
  std::string toString();
  std::string getName();
  void setName(std::string);
  ~Sheep() { printf("I am ending\n"); };
};
class CloneFactory {
 private:
 public:
  Animal* getClone(Animal* animalSample);
};
