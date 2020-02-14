/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <iostream>
#include <string>
class Window {
 private:
 public:
  Window() {}
  virtual void spawnWindow(){};
  virtual void closeWindow(){};
  virtual void windowStatus(){};
  std::string getPlatform() { return "none"; }
  virtual void DockingPressed(){};
};

class ErrorWindow : public Window {
 public:
  ErrorWindow() : Window(){};
  void spawnWindow();
  void closeWindow();
  void windowStatus();
  void DockingPressed();
};
class DialogWindow : public Window {
 public:
  DialogWindow() : Window(){};
  void spawnWindow();
  void closeWindow();
  void windowStatus();
  void DockingPressed();
};

class PopupWindow : public Window {
 public:
  PopupWindow() : Window(){};
  void spawnWindow();
  void closeWindow();
  void windowStatus();
  void DockingPressed();
};
class MessageWindow : public Window {
 public:
  MessageWindow() : Window(){};
  void spawnWindow();
  void closeWindow();
  void windowStatus();
  void DockingPressed();
};
class dialogFactory {
 public:
  Window* getnewRandomWindow();
};
