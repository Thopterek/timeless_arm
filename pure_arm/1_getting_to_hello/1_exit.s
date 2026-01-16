@ invoking assembler
@ as -o objective_file assembly_file
@ invoking linker
@ ld -o program objective_file

@ basic setup
.global _start

@ main
_start:

@ setup exit call, through Supervisor Call
  mov r7, #1
@ standard exit with 0
  mov r0, #0

