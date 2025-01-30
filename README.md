# Sugar Cane Vending Machine

## Overview
This project aims to build an automated **Sugar Cane Vending Machine** that allows users to select different types of **sugar cane juices**. The machine uses a set of switches to select the juice, and corresponding LEDs indicate the available juice options. The system is designed for ease of use, providing a straightforward interface for selecting juices and dispensing them.

## Features
- **User Selection**: Users can choose different types of **sugar cane juice** (e.g., plain sugar cane, sugar cane + mint, sugar cane + ginger).
- **LED Indicators**: LEDs correspond to the available juice options.
- **Microcontroller**: Uses an **AVR microcontroller** (e.g., ATmega328P).
- **Programming**:
  - **Embedded C Programming**: The firmware is written in **C** using the **AVR-GCC toolchain**.
  - **Bitwise Programming**: Uses efficient bitwise operations for controlling hardware.

## Hardware Requirements
- **Microcontroller**: ATmega328P or equivalent AVR-based microcontroller.
- **LEDs**: Indicate the juice selection.
- **Switches**: Allow users to choose the desired juice type.
- **Power Supply**: Suitable voltage supply for the microcontroller and peripherals.

## Software Requirements
- **AVR-GCC**: To compile the C code.
- **AVR Libc**: C library for AVR microcontrollers.
- **AVRDUDE**: For flashing the compiled code onto the microcontroller.
- **Libraries Used**:
  - `avr/io.h`: To interact with AVR hardware.
  - `util/delay.h`: For adding delays in the program.

## Usage
- The system uses **3 switches** to select different juice types:
  - **Switch 1** → Sugar Cane Juice (LED 1 ON).
  - **Switch 2** → Sugar Cane + Mint Juice (LED 2 ON).
  - **Switch 3** → Sugar Cane + Ginger Juice (LED 3 ON).

- When a user presses a switch, the corresponding LED blinks to confirm selection.



