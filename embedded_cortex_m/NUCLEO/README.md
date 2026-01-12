# General Information

* Notes written & programms wrote for NUCLEO-F429ZI board
* Chapter 1 uses elements of the Arm Mbed OS 6
* Usage of embedded C and C++
* Depending on time constrains might use Keil Studio Claud or NeoVim
* Part with STM32, in particular STM32F429ZIT6U microcontroller
* Extending possible inputs through ST ZIO connectors

##  Introduction to the Cortex-M Processor Family and the NUCLEO Board

* simplified diagram of the Cortex family of processors

<img width="522" height="321" alt="Screenshot from 2026-01-12 13-56-02" src="https://github.com/user-attachments/assets/2da9bfc4-1a15-4b0c-802f-4549f22efa28" />

* under the hood of Cortex-M0, Cortex-M3 and Cortex-M4
  * Cortex-M0 Neumann bus-like (one bus for data/instruction)
  * M3 and M4 are Harvard bus-like (data and instruction in separate buses), which allows for faster communication
  * The Cortex-M3 and M4 processors have a Memory Protection Unit, which allows safer operation
  * The Cortex-M4 has a larger set of instructions and has a Floating Point Unit (FPU), which speeds up certain calculations

<img width="768" height="420" alt="Screenshot from 2026-01-12 14-04-50" src="https://github.com/user-attachments/assets/3cc2be75-24db-4339-b980-c3ac7f508dd0" />

* Instruction Set Architecture (ISA)

<img width="768" height="544" alt="Screenshot from 2026-01-12 14-09-44" src="https://github.com/user-attachments/assets/a85fa994-31e9-437b-bfec-e90ac17215b6" />

* STM32F429ZI block diagram
  * includes other peripherals such as communication cores (ethernet, USB, UART, etc.)
  * memory
  * timers
  * GPIO (General Purpose Input Output) ports

<img width="765" height="855" alt="Screenshot from 2026-01-12 14-11-15" src="https://github.com/user-attachments/assets/5d71f1a7-9b51-4085-8669-0ca268312879" />

* Zio connectors of the NUCLEO-F429ZI board

<img width="765" height="865" alt="Screenshot from 2026-01-12 14-14-42" src="https://github.com/user-attachments/assets/370d8e6f-5192-48d8-a181-c3aa938069e0" />

* Hierarchy of different element

<img width="765" height="279" alt="Screenshot from 2026-01-12 14-15-28" src="https://github.com/user-attachments/assets/6fe89fbe-b7e8-4afc-a9cb-11a8509ddd55" />
