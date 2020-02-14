#include <RobotBuilder.hpp>
int main(int argc, char** argv) {
  RobotBuilder* blueprint1 = new RobotSchema1();
  RobotBuilder* blueprint2 = new RobotSchema2();
  RobotEngineer* maker1 = new RobotEngineer(blueprint1);
  RobotEngineer* maker2 = new RobotEngineer(blueprint2);
  maker1->makeRobot();
  maker2->makeRobot();
  Robot* myRobot = maker1->getRobot();
  Robot* myRobot2 = maker2->getRobot();
  printf("Yaata got a new robot\n");
  printf("Robot Head type %s\n", (myRobot->getRobotHead()).c_str());
  printf("Robot Torso type %s\n", (myRobot->getRobotTorso()).c_str());
  printf("Robot Arms type %s\n", (myRobot->getRobotArms()).c_str());
  printf("Robot Legs type %s\n", (myRobot->getRobotLegs()).c_str());
  printf("Yaata got a new robot 2\n");
  printf("Robot Head type %s\n", (myRobot2->getRobotHead()).c_str());
  printf("Robot Torso type %s\n", (myRobot2->getRobotTorso()).c_str());
  printf("Robot Arms type %s\n", (myRobot2->getRobotArms()).c_str());
  printf("Robot Legs type %s\n", (myRobot2->getRobotLegs()).c_str());
  return 0;
}
