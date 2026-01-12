#include "mbed.h"
#include "arm_book_lib.h"

/*
 * Structure through:
 * 1: libs, defs, globals, init
 * 2: main, superloop Structure
 * 3: declaration and init of main
 * 4: repetitive block, while(true)
*/
int main(void) {
  /*
   * Digital input object
   * named gasDetector
   * assigned to D2 pin
  */
  DigitalIn gasDetector(D2);
  /*
   * Digital output object
   * rest follows the above
  */
  DigitalOut alarmLed(LD1);
  /*
   * configure gasDetector
   * using pull-down resistor
  */
  gasDetector.mode(PullDown);
  // start of the forever loop
  while (true) {
    // check if active
    if (gasDetector == ON)
      alarmLed = ON;
    // or if not
    if (gasDetector == OFF)
      alarmLed = OFF;
  }
}
