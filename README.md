# PIC16F877A Embedded Firmware Projects

A collection of **bare-metal Embedded C firmware projects** for the **PIC16F877A** microcontroller. These projects demonstrate **register-level programming**, peripheral interfacing, and embedded firmware development using the **Microchip XC8 compiler** and **MPLAB X IDE**.

Each project is self-contained and focuses on a specific peripheral or embedded concept, making this repository suitable for learning, interview preparation, and embedded firmware portfolio development.

---

## Project Index

| No. | Project                            | Concepts Covered                                                       | Folder                          |
| --- | ---------------------------------- | ---------------------------------------------------------------------- | ------------------------------- |
| 01  | I²C EEPROM Read/Write              | I²C Master, External EEPROM, Sequential Read/Write                     | `01-i2c-eeprom`                 |
| 02  | LCD & 7-Segment Display            | 16x2 LCD, Multiplexed 7-Segment Display, GPIO                          | `02-lcd-7segment-display`       |
| 03  | LED Control & Smart Corridor Light | GPIO, ADC, LDR-Based Automatic Lighting                                | `03-led-control-smart-corridor` |
| 04  | Password-Protected Access Control  | Switches, Keypad Logic, State Machine, GPIO                            | `04-password-protected-access`  |
| 05  | ADC Sensing: Battery & Gas Sensor  | ADC, Sensor Interfacing, Analog Signal Processing                      | `05-adc-battery-gas-sensing`    |
| 06  | Real-Time Clock (RTC)              | DS1307 RTC, I²C Communication, Timekeeping                             | `06-rtc-clock`                  |
| 07  | UART Communication                 | USART Transmission, Reception, Interrupt-Based UART                    | `07-uart-communication`         |
| 08  | Timers, PWM & Interrupts           | Timer0/1/2, CCP PWM, Interrupt Service Routines                        | `08-timers-pwm-interrupts`      |
| 09  | Memory Map & Software Architecture | PIC Memory Organization, Modular Firmware Architecture, Code Structure | `09-memory_map-sofware_arc`     |

---

## Features

* Bare-metal Embedded C programming
* Register-level peripheral configuration
* Modular firmware architecture
* Well-commented source code
* Individual README for each project
* Suitable for beginners and embedded firmware interview preparation

---

## Hardware & Development Tools

**Microcontroller**

* PIC16F877A (40-pin DIP)

**Development Environment**

* MPLAB X IDE
* Microchip XC8 Compiler

**Hardware**

* PICkit 3 / PICkit 4
* 16 MHz Crystal Oscillator (HS Mode)
* Breadboard / Development Board
* LCD, EEPROM, RTC, LEDs, Push Buttons, LDR, MQ Sensor (depending on project)

**Simulation (Optional)**

* Proteus Design Suite

---

## Building & Flashing

1. Open the required project in **MPLAB X IDE**.
2. Select:

   * Device: **PIC16F877A**
   * Compiler: **XC8**
3. Build the project.
4. Program the device using **PICkit 3/4**.
5. Configuration bits are defined using `#pragma config`.
6. Update `_XTAL_FREQ` if your oscillator frequency differs from **16 MHz**.

---

## Repository Structure

```text
pic16f877a-embedded-projects/
│
├── README.md
├── LICENSE
│
├── 01-i2c-eeprom/
├── 02-lcd-7segment-display/
├── 03-led-control-smart-corridor/
├── 04-password-protected-access/
├── 05-adc-battery-gas-sensing/
├── 06-rtc-clock/
├── 07-uart-communication/
├── 08-timers-pwm-interrupts/
├── 09-memory_map-sofware_arc/
│
└── docs/
    ├── images/
    ├── schematics/
    └── pinout/
```

---

## Learning Outcomes

This repository demonstrates practical experience with:

* GPIO Programming
* ADC
* Timers
* PWM
* UART
* I²C Communication
* External EEPROM
* RTC Interfacing
* Interrupt Handling
* Modular Embedded Firmware Design
* Register-Level Programming
* Embedded C Best Practices

---

## License

This repository is licensed under the **MIT License**. See the **LICENSE** file for more information.
