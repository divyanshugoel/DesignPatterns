#include <enemyattacker.hpp>

void EnemyRobot::smashWithHand() {
  printf("DOing some damage with hands to the target\n");
}
void EnemyRobot::walkForward() { printf("walking forward to the enemy\n"); }
void EnemyRobot::reactToHuman(std::string newdriver) {
  printf("Tramping onm the target %s\n", newdriver.c_str());
}

void EnemyRobotAdapter::fireWeapon() { Robot->smashWithHand(); }
void EnemyRobotAdapter::driveForward() { Robot->walkForward(); }
void EnemyRobotAdapter::assignDriver(std::string newDriver) {
  Robot->reactToHuman(newDriver);
}
