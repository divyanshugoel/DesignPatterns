/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <vector>

class Observer {
 public:
  virtual void update(double info1, double info2, double info3) = 0;
};
class Subject {
 public:
  virtual void registerObserver(Observer *DataObserver) = 0;
  virtual void unregisterObserver(Observer *deleteObserver) = 0;
  virtual void notifyObserver() = 0;
};

class Grabber : public Subject {
 public:
  void registerObserver(Observer *newObserver);
  void unregisterObserver(Observer *deleteObserver);
  void notifyObserver();
  void setInfo1(double value);
  void setInfo2(double value);
  void setInfo3(double value);

 private:
  std::vector<class DataObserver> observers;
  double info1, info2, info3;
};

class DataObserver : public Observer {
 private:
  double info1_, info2_, info3_;
  static int IdTracker;
  Grabber *dataFetcher;
  int blockID = 0;

 public:
  DataObserver(Grabber *grabber_);
  void update(double info1, double info2, double info3);
  void printTheInfo();
  int getBlockId();
};
