/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <entertainmentDevice.hpp>

class RemoteButton {
 private:
  EntertainmentDevice* theDevice;

 public:
  RemoteButton(EntertainmentDevice* newDevice) { theDevice = newDevice; }
  void buttonFivePressed() { theDevice->buttonFivePressed(); }
  void buttonSixPressed() { theDevice->buttonSixPressed(); }
  void deviceFeedback() { theDevice->deviceFeedback(); }
  virtual void buttonNinePressed(){};
};

class TvRemoteMute : public RemoteButton {
 public:
  TvRemoteMute(EntertainmentDevice* newDevice) : RemoteButton(newDevice){};
  void buttonNinePressed();
};
class TvRemotePause : public RemoteButton {
 public:
  TvRemotePause(EntertainmentDevice* newDevice) : RemoteButton(newDevice){};
  void buttonNinePressed();
};

class DvdRemoteMute : public RemoteButton {
 public:
  DvdRemoteMute(EntertainmentDevice* newDevice) : RemoteButton(newDevice){};
  void buttonNinePressed();
};
class DvdRemotePause : public RemoteButton {
 public:
  DvdRemotePause(EntertainmentDevice* newDevice) : RemoteButton(newDevice){};
  void buttonNinePressed();
};
