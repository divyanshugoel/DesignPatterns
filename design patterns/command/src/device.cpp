#include <device.hpp>
void Television::on() { printf("Turning TV on\n"); }
void Television::off() { printf("Turning TV off\n"); }
void Television::volUp() {
  volume++;
  printf("Turning volume up to %d\n", volume);
}
void Television::volDown() {
  volume--;
  printf("Turning volume down to %d\n", volume);
}

void Radio::on() { printf("Turning Radio on\n"); }
void Radio::off() { printf("Turning Radio off\n"); }
void Radio::volUp() {
  volume++;
  printf("Radio Turning volume up to %d\n", volume);
}
void Radio::volDown() {
  volume--;
  printf("Radio Turning volume down to %d\n", volume);
}
