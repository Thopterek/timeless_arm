// ===[Libraries]===
#include "mbed.h"
#include "arm_book_lib.h"

// ===[Declaration of public global objects]===
DigitalIn gasDetector(D2);
DigitalIn overTempDetector(D3);
DigitalIn pressFirstButton(D4);
DigitalIn pressSecondButton(D5);
DigitalIn dontUseFirstButton(D6);
DigitalIn dontUseSecondButton(D7);
DigitalIn enterButton(BUTTON1);

DigitalOut alarmLed(LED1);
DigitalOut incorrectCodeLed(LED3);
DigitalOut systemBlockedLed(LED2);

gasDetector.mode(PullDown);
overTempDetector.mode(PullDown);
pressFirstButton.mode(PullDown);
pressSecondButton.mode(PullDown);
dontUseSecondButton.mode(PullDown);
dontUseFirstButton.mode(PullDown);

// ===[Declaration of public global variables]===
alarmLED = OFF;
incorrectCodeLed = OFF;
systemBlockedLed = OFF;
bool alarmState = OFF;
int counter = 0;

// ===[Declaration of public fns]===
void inputsInit();
void outputsInit();
void updateAlarmOn();
void checkInput();

int main(void) {
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

// ===[Implementation of public fns]===
void inputsInit();
