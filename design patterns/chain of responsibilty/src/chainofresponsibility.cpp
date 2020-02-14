#include <chainofresponsibility.hpp>

void Addnumbers::setNextChain(Chain* nextChain) { nextInChain = nextChain; }
void Addnumbers::calculate(Numbers request) {
  if ((request.getCalcWanted()).compare("+") == 0) {
    printf("the sum is %d\n", request.getNum1() + request.getNum2());
  } else {
    if (nextInChain != NULL) nextInChain->calculate(request);
  }
}
void Subtractnumbers::setNextChain(Chain* nextChain) {
  nextInChain = nextChain;
}
void Subtractnumbers::calculate(Numbers request) {
  if ((request.getCalcWanted()).compare("-") == 0) {
    printf("the diff is %d\n", request.getNum1() + request.getNum2());
  } else {
    if (nextInChain != NULL)
      nextInChain->calculate(request);
    else
      printf("ek gandu tha \n");
  }
}
