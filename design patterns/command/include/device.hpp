/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>

class Device {
 private:
 public:
  virtual void on() = 0;
  virtual void off() = 0;
  virtual void volUp() = 0;
  virtual void volDown() = 0;
};
class Television : public Device {
 private:
  int volume = 0;

 public:
  void on();
  void off();
  void volUp();
  void volDown();
};
class Radio : public Device {
 private:
  int volume = 0;

 public:
  void on();
  void off();
  void volUp();
  void volDown();
};
class TvRemote {
 public:
  static Device* getDevice() { return (new Television()); };
};
class RadioRemote {
 public:
  static Device* getDevice() { return (new Radio()); };
};
