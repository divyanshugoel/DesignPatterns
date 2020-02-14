#include <proxy.hpp>

GetAtmState* ATMProxy::getAtmState() {
  ATMMachine* temp = new ATMMachine();
  return (temp->getAtmState());
}
int ATMProxy::getCashInMachine() {
  ATMMachine* temp = new ATMMachine();
  return (temp->getCashInMachine());
}

GetAtmState* ATMMachine::getAtmState() { return (atmState); }
int ATMMachine::getCashInMachine() { return (cashwad); }
