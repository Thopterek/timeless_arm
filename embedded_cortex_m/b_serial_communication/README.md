# Content

* how to setup NUCLEO board to communicate with PC
    * done with UART (Universal Asynchronous Receiver Transmitter) of STM32
    * accessed with a USB connection to PC
* software maintability, modularization, some parts unecessary for programmer
* usage of terminal to visualize the information exchange
    * get .bin file into NUCLEO board
    * most of the time serial terminal is used to monitor it
        * baud rate 115200
        * data bits 8
        * parity "none"
        * stop bits "1"
        * handshaking "none"
        * send carriage returns when enter is pressed

