/* COPYRIGHT@2018 Divyanshu Goel
 */
#pragma once
#include <stdio.h>
#include <string>
#include <vector>

class WindowImp {
 public:
  int deviceState;
  std::string name;
  virtual ~WindowImp(){};
  virtual void spawn(){};
  virtual void close(){};
  void windowStatus(std::string selection) {
    if (deviceState) {
      printf("Window active on OS %s\n", selection.c_str());
    } else {
      printf("Window inactive on OS %s\n", selection.c_str());
    }
  }
  void setName(std::string newName) { name = newName; }
};
class MacWindow : public WindowImp {
 public:
  MacWindow(std::string newName) { setName(newName); }
  void spawn();
  void close();
};
class LinuxWindow : public WindowImp {
 public:
  LinuxWindow(std::string newName) { setName(newName); }
  void spawn();
  void close();
};
