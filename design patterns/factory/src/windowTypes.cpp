#include <windowTypes.hpp>

void ErrorWindow::spawnWindow() {
  std::string source = getPlatform();
  printf("spawnming error window from source os %s\n", source.c_str());
}
void ErrorWindow::closeWindow() {
  std::string source = getPlatform();
  printf("closing errror window from source os %s\n", source.c_str());
}
void ErrorWindow::windowStatus() {
  std::string source = getPlatform();
  printf("status check on error window from source os %s\n", source.c_str());
}
void ErrorWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an error window from source os %s\n", source.c_str());
}

void DialogWindow::spawnWindow() {
  std::string source = getPlatform();
  printf("spawnming DialogWindow window from source os %s\n", source.c_str());
}
void DialogWindow::closeWindow() {
  std::string source = getPlatform();
  printf("closing DialogWindow window from source os %s\n", source.c_str());
}
void DialogWindow::windowStatus() {
  std::string source = getPlatform();
  printf("status check on DialogWindow window from source os %s\n",
         source.c_str());
}
void DialogWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an DialogWindow window from source os %s\n",
         source.c_str());
}

void PopupWindow::spawnWindow() {
  std::string source = getPlatform();
  printf("spawnming PopupWindow window from source os %s\n", source.c_str());
}
void PopupWindow::closeWindow() {
  std::string source = getPlatform();
  printf("closing PopupWindow window from source os %s\n", source.c_str());
}
void PopupWindow::windowStatus() {
  std::string source = getPlatform();
  printf("status check on PopupWindow window from source os %s\n",
         source.c_str());
}
void PopupWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an PopupWindow window from source os %s\n",
         source.c_str());
}

void MessageWindow::spawnWindow() {
  std::string source = getPlatform();
  printf("spawnming Message window from source os %s\n", source.c_str());
}
void MessageWindow::closeWindow() {
  std::string source = getPlatform();
  printf("closing Message window from source os %s\n", source.c_str());
}
void MessageWindow::windowStatus() {
  std::string source = getPlatform();
  printf("status check on Message window from source os %s\n", source.c_str());
}
void MessageWindow::DockingPressed() {
  std::string source = getPlatform();
  printf("Tried to dock an Message window from source os %s\n", source.c_str());
}
Window* dialogFactory::getnewRandomWindow() {
  Window* newWindow;
  srand(time(NULL));

  int i = rand();
  i = i % 4;
  if (i == 0) {
    newWindow = new ErrorWindow();
  }
  if (i == 1) {
    newWindow = new DialogWindow();
  }
  if (i == 2) {
    newWindow = new PopupWindow();
  }
  if (i == 3) {
    newWindow = new MessageWindow();
  }
  return newWindow;
}
