#include "entertainmentDevice.hpp"
void TvDevice::buttonFivePressed() {
  printf("Channel Previous Called for\n");
  deviceState--;
}
void TvDevice::buttonSixPressed() {
  printf("Channel Next Called for\n");
  deviceState++;
}
void DvdDevice::buttonFivePressed() {
  printf("Media Previous Called for\n");
  deviceState--;
}
void DvdDevice::buttonSixPressed() {
  printf("Media Next\n");
  deviceState++;
}
