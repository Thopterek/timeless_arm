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
  DigitalIn enterButton(BUTTON1);
  // output object
  DigitalOut alarmLed(LED1);
  DigitalOut incorrectCodeLed(LED3);
  DigitalOut systemBlockedLed(LED2);
  // setting up modes
  gasDetector.mode(PullDown);
  overTempDetector.mode(PullDown);
  pressFirstButton.mode(PullDown);
  pressSecondButton.mode(PullDown);
  dontUseSecondButton.mode(PullDown);
  dontUseFirstButton.mode(PullDown);
  // base state
  alarmLED = OFF;
  incorrectCodeLed = OFF;
  systemBlockedLed = OFF;
  bool alarmState = OFF;
  int counter = 0;
  // forever
  while (true) {
    // checking inputs
    if (gasDetector || overTempDetector)
      alarmState = ON;
    // updating state
    alarmLED = alarmState;
    // logic to check inputs
    if (counter < 5) {
      if (pressFirstButton && pressSecondButton && dontUseFirstButton && dontUseSecondButton)
        incorrectCodeLed = ON;
      else if (pressSecondButton && pressFirstButton && enterButton) {
        alarmState = OFF;
        counter = 0;
      }
      else
        counter++;
    }
    else {
      systemBlockedLed = ON;
    }
}
