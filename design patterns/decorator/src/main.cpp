#include <pizza.hpp>
int main(int argc, char** argv) {
  Pizza* basicPizza =
      new Mozzarella(new Mozzarella(new TomatoSauce(new PlainPizza())));

  printf("Ingredients %s\n", (basicPizza->getDescription()).c_str());
  printf("Cost %f\n", basicPizza->getCost());
  delete basicPizza;
  return 0;
}
