#include "mbed.h"
#include "arm_book_lib.h"

int main(void) {
  // input objects
  DigitalIn gasDetector(D2);
  DigitalIn overTempDetector(D3);
  DigitalIn pressFirstButton(D4);
  DigitalIn pressSecondButton(D5);
  DigitalIn dontUseFirstButton(D6);
  DigitalIn dontUseSecondButton(D7);
  // output object
  DigitalOut alarmLED(LED1);
  // setting up modes
  gasDetector.mode(PullDown);
  overTempDetector.mode(PullDown);
  pressFirstButton.mode(PullDown);
  pressSecondButton.mode(PullDown);
  dontUseSecondButton.mode(PullDown);
  dontUseFirstButton.mode(PullDown);
  // base state
  alarmLED = OFF;
  bool alarmState = OFF;
  // forever
  while (true) {
    // checking inputs
    if (gasDetector || overTempDetector)
      alarmState = ON;
    // updating state
    alarmLED = alarmState;
    // turning off by input
    if (pressFirstButton && pressSecondButton
        && !dontUseFirstButton && !dontUseSecondButton)
      alarmState = OFF;
  }
}
