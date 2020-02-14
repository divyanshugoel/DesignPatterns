/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <string>
#include <windowsPlatformTypes.hpp>

class Window {
 private:
  WindowImp* type_of_window_platform;

 public:
  Window(WindowImp* newType) { type_of_window_platform = newType; }
  void spawnWindow() { type_of_window_platform->spawn(); }
  void closeWindow() { type_of_window_platform->close(); }
  void windowStatus() {
    type_of_window_platform->windowStatus(type_of_window_platform->name);
  }
  std::string getPlatform() { return (type_of_window_platform->name); }
  virtual void DockingPressed(){};
};

class ErrorWindow : public Window {
 public:
  ErrorWindow(WindowImp* newPlatformType) : Window(newPlatformType){};
  void DockingPressed();
};
class DialogWindow : public Window {
 public:
  DialogWindow(WindowImp* newPlatformType) : Window(newPlatformType){};
  void DockingPressed();
};

class PopupWindow : public Window {
 public:
  PopupWindow(WindowImp* newPlatformType) : Window(newPlatformType){};
  void DockingPressed();
};
class MessageWindow : public Window {
 public:
  MessageWindow(WindowImp* newPlatformType) : Window(newPlatformType){};
  void DockingPressed();
};
