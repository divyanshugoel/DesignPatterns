#include <windowTypes.hpp>
#include <windowsPlatformTypes.hpp>
int main(int argc, char **argv) {
  LinuxWindow l1("linux");
  WindowImp *plat1 = new MacWindow("mac");
  WindowImp *plat2;
  plat2 = dynamic_cast<WindowImp *>(&l1);

  ErrorWindow *Err1 = new ErrorWindow(plat1);
  ErrorWindow *Err2 = new ErrorWindow(plat2);

  DialogWindow *Dia1 = new DialogWindow(plat1);
  DialogWindow *Dia2 = new DialogWindow(plat2);

  PopupWindow *Pop1 = new PopupWindow(plat1);
  PopupWindow *Pop2 = new PopupWindow(plat2);

  MessageWindow *Mes1 = new MessageWindow(plat1);
  MessageWindow *Mes2 = new MessageWindow(plat2);
  // The idea is that you can use different implemetion for same window type
  // depending on the type whether a linux call or mac call which is left to
  // client at this point of time although one can use a factory method to
  // genrate type object for the given platform
  printf("\nPerforming for Mac for error\n");
  Err1->windowStatus();
  Err1->spawnWindow();
  Err1->windowStatus();
  Err1->DockingPressed();
  Err1->closeWindow();
  Err1->windowStatus();
  printf("\nPerforming for Linux for error\n");
  Err2->windowStatus();
  Err2->spawnWindow();
  Err2->windowStatus();
  Err2->DockingPressed();
  Err2->closeWindow();
  Err2->windowStatus();

  printf("\nPerforming for Mac for Dialog\n");
  Dia1->windowStatus();
  Dia1->spawnWindow();
  Dia1->windowStatus();
  Dia1->DockingPressed();
  Dia1->closeWindow();
  Dia1->windowStatus();
  printf("\nPerforming for Linux for Dialog\n");
  Dia2->windowStatus();
  Dia2->spawnWindow();
  Dia2->windowStatus();
  Dia2->DockingPressed();
  Dia2->closeWindow();
  Dia2->windowStatus();

  return 0;
}
