#include <RobotBuilder.hpp>

RobotSchema1::RobotSchema1() { r1 = new Robot(); }
void RobotSchema1::buildRobotHead() { r1->setRobotHead("Tin Head"); }
void RobotSchema1::buildRobotTorso() { r1->setRobotTorso("Lithe"); }
void RobotSchema1::buildRobotArms() { r1->setRobotArms("bomb squad"); }
void RobotSchema1::buildRobotLegs() { r1->setRobotLegs("Skater"); }
Robot* RobotSchema1::getRobot() { return (r1); }

std::string RobotSchema1::getRobotHead() { return (r1->getRobotHead()); }
std::string RobotSchema1::getRobotTorso() { return (r1->getRobotTorso()); }
std::string RobotSchema1::getRobotArms() { return (r1->getRobotArms()); }
std::string RobotSchema1::getRobotLegs() { return (r1->getRobotLegs()); }

RobotSchema2::RobotSchema2() { r1 = new Robot(); }
void RobotSchema2::buildRobotHead() { r1->setRobotHead("metal steel  Head"); }
void RobotSchema2::buildRobotTorso() { r1->setRobotTorso("fat"); }
void RobotSchema2::buildRobotArms() { r1->setRobotArms("cute squad"); }
void RobotSchema2::buildRobotLegs() { r1->setRobotLegs("skinny"); }
Robot* RobotSchema2::getRobot() { return (r1); }

std::string RobotSchema2::getRobotHead() { return (r1->getRobotHead()); }
std::string RobotSchema2::getRobotTorso() { return (r1->getRobotTorso()); }
std::string RobotSchema2::getRobotArms() { return (r1->getRobotArms()); }
std::string RobotSchema2::getRobotLegs() { return (r1->getRobotLegs()); }

RobotEngineer::RobotEngineer(RobotBuilder* newBuilder) { builder = newBuilder; }
void RobotEngineer::makeRobot() {
  builder->buildRobotHead();
  builder->buildRobotTorso();
  builder->buildRobotArms();
  builder->buildRobotLegs();
}
Robot* RobotEngineer::getRobot() { return (builder->getRobot()); }
