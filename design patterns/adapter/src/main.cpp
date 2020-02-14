#include <enemyattacker.hpp>

int main(int argc, char **argv) {
  EnemyRobot *r1 = new EnemyRobot();
  EnemyRobotAdapter *adp1 = new EnemyRobotAdapter(r1);
  adp1->fireWeapon();
  adp1->driveForward();
  adp1->assignDriver("fred");

  delete r1;
  delete adp1;

  return 0;
}
