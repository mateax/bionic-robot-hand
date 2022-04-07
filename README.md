# bionic-robot-hand
Bionic robot hand prototype – controlled by Exoskeleton for handling hazardous materials
#### Final prototype:
![final-prototype](https://github.com/mateax/bionic-robot-hand/blob/main/final-prototype/final-prototype.jpg)

#### Bionic hand:
![bionic-hand](https://github.com/mateax/bionic-robot-hand/blob/main/final-prototype/bionic-hand.jpg)

#### Egzoskeleton:
![egzoskeleton](https://github.com/mateax/bionic-robot-hand/blob/main/final-prototype/egzoskeleton.jpg)

#### Hand egzoskeleton - top:
![hand-exoskeleton-top](https://github.com/mateax/bionic-robot-hand/blob/main/final-prototype/hand-exoskeleton-top.jpg)

#### Hand egzoskeleton - bottom:
![hand-exoskeleton-bottom](https://github.com/mateax/bionic-robot-hand/blob/main/final-prototype/hand-exoskeleton-bottom.jpg)


## How it works?
Radar detects objects using HC – SR04 Ultrasonic Sensor in the range of 30 cm and 180 degrees, and plots results on a graphical display.

Control and detection was achieved using the Arduino, and a graphical radar display of the obtained values of distance and angle from the target object is realized in the development environment Processing
## Circuit
According to the circuit diagram, attach the HC–SR04 Ultrasonic Sensor to a servo motor,and hook them up to an Arduino board.

Components used: 
* Arduino Nano
* Servo motor SG-90
* potentiometer 
* power supply plug
* wires 

## Arduino code
Sweeps the servo back and forth in the range od 180 degrees.
After every step, it will read the distance off the ultrasonic sensor and write the value to Serial.



