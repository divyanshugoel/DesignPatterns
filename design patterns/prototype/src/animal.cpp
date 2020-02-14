#include <animal.hpp>

Sheep::Sheep() { printf("sheep is made \n"); }
Animal* Sheep::makeACopy() {
  printf("Sheep is being made\n");
  Sheep* newsheepObject = new Sheep();
  newsheepObject->setName(data);
  // need to call a clone instance here
  return (newsheepObject);
}
std::string Sheep::toString() { return ("Sheep is done "); }
std::string Sheep::getName() { return (data); }
void Sheep::setName(std::string name) { data = name; }

Animal* CloneFactory::getClone(Animal* animalSample) {
  return (animalSample->makeACopy());
}
