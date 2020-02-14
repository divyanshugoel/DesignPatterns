#include <chainofresponsibility.hpp>

int main(int argc, char **argv) {
  Numbers req1(12, 13, "+");
  Chain *r1 = new Addnumbers();
  Chain *r2 = new Subtractnumbers();
  r1->setNextChain(r2);
  r1->calculate(req1);

  delete r1;
  delete r2;
  return 0;
}
