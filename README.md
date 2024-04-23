# Door Locker Security System

This is an embedded C project for door security system that allows the users to create a new password and store it in a non-volatile memory, open the door, and change their password.
The project has two MCU both are Atmega32 one is used as a HMI ECU (Human machine interface) and the other is used for controlling the system.

## Components and Drivers

>GPIO Driver: Manages general-purpose input/output pins and is shared by both ECUs.

> LCD Driver: Controls a 2x16 LCD display for user interaction.

> Keypad Driver: Handles input from a 4x4 keypad.

> DC Motor Driver: Controls a DC motor for door locking and unlocking.

> EEPROM Driver: Manages an external EEPROM via I2C communication.

> I2C Driver: Used for communication between CONTROL_ECU and the external EEPROM.

> UART Driver: Manages UART communication between ECUs.

> Timer Driver: Supports time-based functionality for message display and motor control.

> Buzzer Driver: Manages a buzzer for system alarm.

> PWM Driver: that the dc motor uses inside.



## System Sequence

> The Door Locker Security System follows a defined sequence of steps:

> Create a System Password: Users create a password, which is saved in EEPROM after confirmation.

> Main Options: The LCD displays the system's main options.

> Open Door: Users can unlock the door by entering the correct password. The system activates the motor to unlock the door and 	provides feedback.

> Change Password: Users can change the password by entering the current one and then setting a new one.

> Handling Incorrect Passwords: After multiple incorrect attempts, the system activates the buzzer and locks the system temporarily.

## Getting Started

The project is ready to use and test, 

> Open the simulation file and choose the protues file to run the simulation.

> For Control ECU choose the .elf file located in Control_ECU/debug.

> For HMI ECU choose the .elf file locate in HMI_ECU/debug.

> start the simulation and enjoy!



## -Acknowledgments
I would like to express my gratitude to Eng. Mohamed Tarek and Edges Academy for providing the awesome guidance and support for me.
