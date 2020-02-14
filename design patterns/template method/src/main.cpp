#include <sandwichmaker.hpp>

int main(int argc, char **argv) {
  Sandwich *r1 = new ItalianSub();
  Sandwich *r2 = new VeggieSub();
  r1->makeSandwich();
  printf("\n");
  r2->makeSandwich();

  delete r1;
  delete r2;
  return 0;
}
