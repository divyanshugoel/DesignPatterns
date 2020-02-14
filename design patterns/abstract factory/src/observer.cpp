#include "observer.hpp"

void Grabber::registerObserver(Observer *newObserver) {
  const DataObserver *newDataObserver =
      dynamic_cast<const DataObserver *>(newObserver);
  observers.push_back(*newDataObserver);
}
void Grabber::unregisterObserver(Observer *deleteObserver) {
  DataObserver *newDataObserver = dynamic_cast<DataObserver *>(deleteObserver);
  int size_observers = observers.size();
  // get index of the object and delete that
  std::vector<class DataObserver> new_list;
  for (int i = 0; i < size_observers; i++) {
    if ((newDataObserver->getBlockId()) != observers[i].getBlockId()) {
      new_list.push_back(observers[i]);
    }
  }
  observers = new_list;
  // if () observers.push_back(newObserver);
}
void Grabber::notifyObserver() {
  int size_observers = observers.size();
  for (int i = 0; i < size_observers; i++) {
    observers[i].update(info1, info2, info3);
  }
}
void Grabber::setInfo1(double value) {
  // set the value
  info1 = value;
  notifyObserver();
}
void Grabber::setInfo2(double value) {
  // set the value
  info2 = value;
  notifyObserver();
}
void Grabber::setInfo3(double value) {
  // set the value
  info3 = value;
  notifyObserver();
}

int DataObserver::IdTracker = 0;
DataObserver::DataObserver(Grabber *grabber_) {
  dataFetcher = grabber_;
  IdTracker = IdTracker + 1;
  printf("New Observer %d created\n", IdTracker);
  blockID = IdTracker;
  grabber_->registerObserver(this);
}
void DataObserver::update(double info1, double info2, double info3) {
  info1_ = info1;
  info2_ = info2;
  info3_ = info3;
  printTheInfo();
}
void DataObserver::printTheInfo() {
  printf("from : %d\n", blockID);
  printf("Data 1 %f \n", info1_);
  printf("Data 2 %f \n", info2_);
  printf("Data 3 %f \n\n", info3_);
}

int DataObserver::getBlockId() { return (blockID); }
