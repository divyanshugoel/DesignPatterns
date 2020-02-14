/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class RobotPlan {
 private:
 public:
  virtual void setRobotHead(std::string) = 0;
  virtual void setRobotTorso(std::string) = 0;
  virtual void setRobotLegs(std::string) = 0;
  virtual void setRobotArms(std::string) = 0;
};
class Robot : public RobotPlan {
 private:
  std::string head;
  std::string torso;
  std::string arms;
  std::string legs;

 public:
  void setRobotHead(std::string);
  void setRobotTorso(std::string);
  void setRobotLegs(std::string);
  void setRobotArms(std::string);
  std::string getRobotHead();
  std::string getRobotTorso();
  std::string getRobotArms();
  std::string getRobotLegs();
};
