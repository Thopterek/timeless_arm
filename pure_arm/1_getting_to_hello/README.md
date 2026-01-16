## Mnemonics & Opcodes

different types:
* don't produce a result
    * opcode destination, (register/immediate)
* deal with single register
    * opcode destination, (register/immediate)
* produce a result from source
    * opcode destination, source, (register/immediate)

## Registers

* places inside the register where we can do operations
* representation from r0 till r15

## Immediate Values

* limited to numbers from 0 till 255
    * an integer version
    * char value from ASCII
* entered with # followed by:
    * char in single quotes
    * binary
    * octal
    * decimal
    * hexadecimal
* barrel shifter allows to shift the range

## File Format

label/directive -> explanation of it
* _start -> being the main
* .text -> where operation lives, never changes
* .data -> loading values that cannot be entered as immediate
* .global -> exposing lables from code to compiler and linker

## Supervisor Calls or System Calls

there are 2 ways to do it
* call number loaded into r7 (without the 0x900000 prefix)
* call executed with the command svc 0

also there is option load into specifif register
* generally into r0 till r3 
