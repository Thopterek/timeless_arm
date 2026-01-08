#include "mbed.h"
#include "arm_book_lib.h"

int main(void) {
  DigitalIn gasDetector(D2);
  DigitalIn overTempDetector(D3);
  DigitalOut alarmLed(LED1);
  gasDetector.mode(PullDown);
  overTempDetector.mode(PullDown);
  while (true) {
    if (gasDetector == ON || overTempDetector == ON)
      alarmLed = ON;
    else
      alarmLed = OFF;
  }
}
