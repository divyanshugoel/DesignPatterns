#include <windowTypes.hpp>
int main(int argc, char **argv) {
  dialogFactory factory;
  Window *newWindow1 = factory.getnewRandomWindow();
  // The idea is that you can use different implemetion for same window type
  // depending on the type whether a linux call or mac call which is left to
  // client at this point of time although one can use a factory method to
  // genrate type object for the given platform
  printf("\nPerforming for Mac for error\n");
  newWindow1->windowStatus();
  newWindow1->spawnWindow();
  newWindow1->windowStatus();
  newWindow1->DockingPressed();
  newWindow1->closeWindow();
  newWindow1->windowStatus();

  return 0;
}
