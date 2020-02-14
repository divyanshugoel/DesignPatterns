#include <command.hpp>

int main(int argc, char** argv) {
  Device* newDevice = TvRemote().getDevice();
  Device* newDevice2 = RadioRemote().getDevice();
  Command* onCommand = new TurnDeviceOn(newDevice);
  Command* offCommand = new TurnDeviceOff(newDevice);
  Command* volUpCommand = new TurnVolUp(newDevice);
  Command* volDownCommand = new TurnVolDown(newDevice);
  DeviceButton* onPressed = new DeviceButton(onCommand);
  DeviceButton* offPressed = new DeviceButton(offCommand);
  DeviceButton* volUpPressed = new DeviceButton(volUpCommand);
  DeviceButton* volDownPressed = new DeviceButton(volDownCommand);
  offPressed->press();
  onPressed->press();
  volUpPressed->press();
  volUpPressed->press();
  volUpPressed->press();
  volUpPressed->press();
  volUpPressed->press();
  volUpPressed->press();
  volDownPressed->press();
  onCommand = new TurnDeviceOn(newDevice2);
  onPressed = new DeviceButton(onCommand);
  onPressed->press();
  delete onPressed;
  delete offCommand;
  delete volUpCommand;
  delete volDownCommand;

  delete onCommand;
  delete offPressed;
  delete volUpPressed;
  delete volDownPressed;

  delete newDevice;
  return 0;
}
