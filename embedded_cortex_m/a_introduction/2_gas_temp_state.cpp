#include "mbed.h"
#include "arm_book_lib.h"

// figure 1.13 Main parts of the program, example 1.3
int main(void) {
  DigitalIn gasDetector(D2);
  DigitalIn overTempDetector(D3);
  /*
   * forgot to setup PullDowns
  */
  gasDetector.mode(PullDown);
  overTempDetector.mode(PullDown);
  // mbed lib B1 user
  DigitalIn alarmOffButton(BUTTON1);
  // mbed lib LD1
  DigitalOut alarmLed(LED1);
  /*
   * and adding up alarmLed to off
  */
  alarmLed = OFF;
  // using OFF / ON rather bools for now
  bool alarmState = OFF;
  while (true) {
    if (gasDetector || overTempDetector)
      alarmState = ON;
    /*
     * not actually needed?
      if (alarmState == true) {
        alarmLed = ON;
      }
      better usage of below
    */
    alarmLed = alarmState;
    if (alarmOffButton)
      alarmLed = OFF;
}
