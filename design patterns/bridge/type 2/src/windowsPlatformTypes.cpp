#include "windowsPlatformTypes.hpp"
void MacWindow::spawn() {
  printf("Spawning window on mac\n");
  deviceState = 1;
}
void MacWindow::close() {
  printf("Closing window on mac\n");
  deviceState = 0;
}
void LinuxWindow::spawn() {
  printf("Spawning window on Linux\n");
  deviceState = 1;
}
void LinuxWindow::close() {
  printf("Closed window on Linux\n");
  deviceState = 0;
}
