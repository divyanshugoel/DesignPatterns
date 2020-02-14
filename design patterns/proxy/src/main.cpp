#include <proxy.hpp>
int main(int argc, char** argv) {
  GetAtmState* realMachine = new ATMMachine();
  GetAtmState* atmProxy = new ATMProxy();

  printf("Cash in machine %d\n", atmProxy->getCashInMachine());
  delete realMachine;
  delete atmProxy;
  return 0;
}
