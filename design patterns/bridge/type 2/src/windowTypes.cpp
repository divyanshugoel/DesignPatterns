#include <windowTypes.hpp>

void ErrorWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an error window from source os %s\n", source.c_str());
}
void DialogWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an Dialog window from source os %s\n", source.c_str());
}
void PopupWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an Popup window from source os %s\n", source.c_str());
}
void MessageWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an Message window from source os %s\n", source.c_str());
}
