/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <vector>

class EntertainmentDevice {
 public:
  int deviceState;
  int maxSetting;
  int volumeLevel = 0;

  virtual void buttonFivePressed(){};
  virtual void buttonSixPressed(){};
  void deviceFeedback() {
    if (deviceState > maxSetting || deviceState < 0) {
      deviceState = 0;
    }
    printf("On %d\n", deviceState);
  }
  void buttonSevenPressed() {
    volumeLevel++;
    printf("Volume at: %d \n", volumeLevel);
  }
  void buttonEightPressed() {
    volumeLevel--;
    printf("Volume at: %d \n", volumeLevel);
  }
};
class TvDevice : public EntertainmentDevice {
 public:
  TvDevice(int newDeviceState, int newMaxSetting) {
    deviceState = newDeviceState;
    maxSetting = newMaxSetting;
  }
  void buttonFivePressed();
  void buttonSixPressed();
};
class DvdDevice : public EntertainmentDevice {
 public:
  DvdDevice(int newDeviceState, int newMaxSetting) {
    deviceState = newDeviceState;
    maxSetting = newMaxSetting;
  }
  void buttonFivePressed();
  void buttonSixPressed();
};
