# Vehicle-Code
Arduino code working as a base to drive a 4WD car via serial. Intended to ultimately run through bluetooth or via infrared receiver/transmitter to a dedicated controller.

Current code is designed to ensure motor driver works as intended. A differential drive is implemented with a simple state machine in order to make the vehicle turn on the spot for 90 degrees and to move at full speed. 
