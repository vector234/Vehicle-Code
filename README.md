# Vehicle-Code
Arduino code working as a base to drive a 4WD car via serial. Intended to ultimately run through bluetooth or via infrared receiver/transmitter to a dedicated controller.

Current code is designed to ensure motor driver works as intended. A differential drive is implemented with a simple state machine in order to make the vehicle either drive forward or backward, or turn on the spot for 90 degrees or to stop. All states currently run at 100% power which displays just how fast the vehicle is and indicates the potential need to tone it down a little for usage under a controller.
