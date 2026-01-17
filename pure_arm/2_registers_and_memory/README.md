## Register Overview and Sane Usage

* ARM processor has 16 32-bit registers (r0-r15)

specific functions registers:
* r0 till r12 -> general purpose
    * r0 till r3 for calling functions
    * r4 till r12 preserve data after / during function calls
* r13 -> stack pointer
* r14 -> link register (where to return after branch)
* r15 -> program counter (address of next operation to perform)
* CPRSR register -> Current Program Status Register, things that proc needs to know
    * 31: N (negative) -> If N is 1 the signed value is negative
    * 30: Z (zero) -> if the result is zero
    * 29: C (carry)
        * ADC, ADD, and CMN if there would be overflow
        * CMP, SBC and SUB if the result would NOT need to be borrows (eg for subtraction)
        * for shifting instructions, set to value of the last bit shifted out by shifter
    * 28: V (overflow) -> for addition and substraction is set if overflow occured

## Memory Overview

for all the purpose of this notes we talk about RAM
* endianness -> ARM processor  stores bytes in memory by little endian
  * least significant byte is placed at the lowest memory address
  * when reading a multi byte number the bytes are arranged in reverse order

## Register VS Memory

* Registers are inside the processor VS Memory is outside of processor
* Registers are needed to operate on data, processor cannot directly operate on data in memory
* Registers are addressed by r and a number VS Memory is addressed by number (eg. 0x600f)

