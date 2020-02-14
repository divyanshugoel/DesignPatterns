#include <animal.hpp>
int main(int argc, char** argv) {
  CloneFactory* animalmaker = new CloneFactory();
  Sheep* sally = new Sheep();
  sally->setName("Sally");
  Sheep* clonedsally = static_cast<Sheep*>(animalmaker->getClone(sally));
  printf("%s\n", (sally->getName()).c_str());
  clonedsally->setName("Sally2");
  printf("%s\n", (clonedsally->getName()).c_str());
  delete animalmaker;
  delete sally;
  delete clonedsally;
  return 0;
}
