/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <device.hpp>
#include <iostream>
#include <string>

class Command {
 public:
  virtual void execute() = 0;
};
class TurnDeviceOn : public Command {
 private:
  Device* myDevice;

 public:
  TurnDeviceOn(Device* newDevice) { myDevice = newDevice; };
  void execute() { myDevice->on(); };
};
class TurnDeviceOff : public Command {
 private:
  Device* myDevice;

 public:
  void execute() { myDevice->off(); };
  TurnDeviceOff(Device* newDevice) { myDevice = newDevice; };
};

class TurnVolUp : public Command {
 private:
  Device* myDevice;

 public:
  void execute() { myDevice->volUp(); };
  TurnVolUp(Device* newDevice) { myDevice = newDevice; };
};
class TurnVolDown : public Command {
 private:
  Device* myDevice;

 public:
  void execute() { myDevice->volDown(); };
  TurnVolDown(Device* newDevice) { myDevice = newDevice; };
};
class DeviceButton {
 private:
  Command* theCommand;

 public:
  DeviceButton(Command* newCommand) { theCommand = newCommand; };
  void press() { theCommand->execute(); }
};
