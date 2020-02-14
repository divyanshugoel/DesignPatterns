/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class EnemyAttacker {
 private:
  std::string driver;

 public:
  virtual void fireWeapon() = 0;
  virtual void driveForward() = 0;
  virtual void assignDriver(std::string newdriver) = 0;
};

class EnemyRobot {
 private:
  std::string driver;

 public:
  void smashWithHand();
  void walkForward();
  void reactToHuman(std::string newdriver);
};

class EnemyRobotAdapter : public EnemyAttacker {
 private:
  EnemyRobot* Robot;

 public:
  EnemyRobotAdapter(EnemyRobot* newRobot) { Robot = newRobot; };
  void fireWeapon();
  void driveForward();
  void assignDriver(std::string driver);
};
