/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include "RobotPlan.hpp"
class RobotBuilder {
 private:
 public:
  virtual void buildRobotHead() = 0;
  virtual void buildRobotTorso() = 0;
  virtual void buildRobotLegs() = 0;
  virtual void buildRobotArms() = 0;
  virtual Robot* getRobot() = 0;
};
class RobotSchema1 : public RobotBuilder {
 private:
  Robot* r1;

 public:
  RobotSchema1();
  void buildRobotHead();
  void buildRobotTorso();
  void buildRobotLegs();
  void buildRobotArms();
  Robot* getRobot();
  std::string getRobotHead();
  std::string getRobotTorso();
  std::string getRobotArms();
  std::string getRobotLegs();
};
class RobotSchema2 : public RobotBuilder {
 private:
  Robot* r1;

 public:
  RobotSchema2();
  void buildRobotHead();
  void buildRobotTorso();
  void buildRobotLegs();
  void buildRobotArms();
  Robot* getRobot();
  std::string getRobotHead();
  std::string getRobotTorso();
  std::string getRobotArms();
  std::string getRobotLegs();
};
class RobotEngineer {
 private:
  RobotBuilder* builder;

 public:
  RobotEngineer(RobotBuilder* newBuilder);
  Robot* getRobot();
  void makeRobot();
};
