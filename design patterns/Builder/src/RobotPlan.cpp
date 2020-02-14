#include <RobotPlan.hpp>

void Robot::setRobotHead(std::string head_name) { head = head_name; }
void Robot::setRobotTorso(std::string torso_name) { torso = torso_name; }
void Robot::setRobotArms(std::string arms_name) { arms = arms_name; }
void Robot::setRobotLegs(std::string leg_name) { legs = leg_name; }

std::string Robot::getRobotHead() { return (head); }
std::string Robot::getRobotTorso() { return (torso); }
std::string Robot::getRobotArms() { return (arms); }
std::string Robot::getRobotLegs() { return (legs); }
