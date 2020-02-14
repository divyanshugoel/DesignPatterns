#include <observer.hpp>

int main(int argc, char** argv) {
  Grabber grabber1_;
  DataObserver dataOBS1(&grabber1_);
  DataObserver dataOBS2(&grabber1_);
  DataObserver dataOBS3(&grabber1_);
  Grabber* grabber2_ = new Grabber;
  DataObserver dataOBS4(grabber2_);
  DataObserver dataOBS5(grabber2_);
  DataObserver dataOBS6(grabber2_);

  grabber1_.setInfo1(451);
  printf("\n");
  grabber1_.setInfo2(12);
  printf("\n");
  grabber1_.unregisterObserver(&dataOBS2);
  grabber1_.setInfo3(13);
  printf("\n");

  // grabber2_->setInfo1(451);
  // printf("\n");
  // grabber2_->setInfo2(12);
  // printf("\n");
  // grabber2_->setInfo3(13);
  // printf("\n");

  return 0;
}
