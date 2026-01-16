@ Function is available in a file
.global _start

@ Calling the main function
_start:
@ valid command, add r2 to r3 and store in r2
  add r2, r3

@ Section marker
.data

@ Using in section labels, 
@ ASCII tells the compiler how to interpret
hello: .ascii "Hello World"

