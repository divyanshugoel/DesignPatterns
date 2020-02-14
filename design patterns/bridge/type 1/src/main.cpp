#include <entertainmentDevice.hpp>
#include <remoteButton.hpp>
int main(int argc, char **argv) {
  TvDevice TV1(1, 200);
  TvDevice TV2(1, 200);

  DvdDevice DVD1(1, 200);
  DvdDevice DVD2(1, 200);

  TvRemoteMute *theTv = new TvRemoteMute(&DVD1);
  TvRemotePause *theTv2 = new TvRemotePause(&TV2);
  DvdRemoteMute *theDvd = new DvdRemoteMute(&DVD1);
  DvdRemotePause *theDvd2 = new DvdRemotePause(&DVD2);
  // The idea is that you can use different implemetion for same remote
  // depending on the type whether a tv call or dvd call which is left to client
  // at this point of time although one can use a factory method to genrate type
  // object for the given platform
  printf("TV Test with mute\n");
  theTv->buttonFivePressed();
  theTv->buttonSixPressed();
  theTv->buttonNinePressed();
  theTv->buttonNinePressed();
  theTv->deviceFeedback();
  printf("TV Test with Pause\n");
  theTv2->buttonFivePressed();
  theTv2->buttonSixPressed();
  theTv2->buttonSixPressed();
  theTv2->buttonNinePressed();
  theTv2->deviceFeedback();
  printf("DVD Test with Pause\n");
  theDvd->buttonFivePressed();
  theDvd->buttonSixPressed();
  theDvd->buttonNinePressed();
  theDvd->buttonNinePressed();
  theDvd->deviceFeedback();
  printf("DVD Test with Pause\n");
  theDvd2->buttonFivePressed();
  theDvd2->buttonSixPressed();
  theDvd2->buttonSixPressed();
  theDvd2->buttonNinePressed();
  theDvd2->deviceFeedback();

  return 0;
}
