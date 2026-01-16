@ invoking assembler
@ as -o objective_file assembly_file
@ invoking linker
@ ld -o program objective_file

@ basic setup
.global _start

@ main
_start:

@ calling the write
  mov r7, #4

@ setting up fd to std out
  mov r0, #1

@ loading value from memory, using compiler reference
  ldr r1, =hello

@ setting the amount of characters inside
  mov r2, #13

@ executing the function
  svc 0

@ setup exit call, through Supervisor Call
  mov r7, #1

@ standard exit with 0
  mov r0, #0
  svc 0

@ part of basic setup
.data
@ the actual data saved with label
hello:  .asii "Hello World!\n"
