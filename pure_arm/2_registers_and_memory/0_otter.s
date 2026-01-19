@ STR -> takes a value in register and inserts it into memory
@ LDR -> works on moving a single byte, same as STR -B
@ otter to stdout
.global _start

_start:
  @ register pre load
  mov r0, #'P'
  mov r1, #'O'
  mov r2, #'I'
  mov r3, #'U'
  mov r4, #'Y'
  mov r5, #'T'
  mov r6, #'R'
  mov r7, #'E'
  mov r8, #'W'
  mov r9, #'Q'

  @ load output to string
  ldr r10, =outstr
  strb  r1, r[10]
  @ increment the output address
  add r10, #1
  @ put T into output
  strb  r5, [r10]
  @ repeat the process
  add r10, #1
  strb r5, [r10]
  add r10, #1
  strb r7, [r10]
  add r10, #1
  strb r6, [r10]

  @ setup the write
  mov r7, #4
  mov r0, #1
  ldr r1, =outstr
  mov r2, #6
  svc 0

  @ exit the program
  mov r7, #1
  mov r0, #0
  svc 0

.data
outstr: .ascii "     \n"

