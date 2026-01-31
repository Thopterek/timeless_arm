.global _start 

_start:
  ldr r0, =instr
  ldr r1, =outstr
  ldrb r3, [r0] @S
  strb r3, [r1]
  add r0, #1
  add r1, #1
  ldrb r3, [r0]
  strb r3, [r1]
  add r0, #1
  add r1, #1
  ldrb r3, [r0]
  strb r3, [r1]
  add r0, #1
  add r1, #1
  ldrb r3, [r0]
  strb r3, [r1]
  add r0, #1
  add r1, #1
  ldrb r3, [r0]
  strb r3, [r1]
  add r0, #1
  add r1, #1
  ldrb r3, [r0]
  strb r3, [r1]

  mov r3, #'\n'
  strb r3, [r1]

  mov r7, #4
  mov r0, #1
  ldr r1, =outstr
  mov r2, #7
  svc 0
  mov r7, #1
  mov r0, #0
  svc 0

.data
instr:      .ascii      "SUMMER"
outstr:     .fill       7, 1, 0
