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
The Arduino microcontroller reads values from a potentiometer located on each finger of the exoskeleton and converts them into values for controlling servo motors on the bionic arm. In this way, the movements of the bionic hand are controlled by using exoskeletons pulled over the arm.

## Circuit
According to the circuit diagram, connect potentiometers and servo motors to the Arduino board.

Components used: 
* Arduino Nano
* Servo motor SG-90
* potentiometer 
* power supply plug
* wires 

## Arduino code
After each step of the potentiometer , it will read the analog value, and with PWM modulation and map function convert it to a value suitable for servomotors.


  [![HitCount](https://hits.dwyl.com/mateax/bionic-robot-hand.svg?style=flat-square)](http://hits.dwyl.com/mateax/bionic-robot-hand)
  [![HitCount](https://hits.dwyl.com/mateax/bionic-robot-hand.svg?style=flat-square&show=unique)](http://hits.dwyl.com/mateax/bionic-robot-hand)



