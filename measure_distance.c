/*
Distance Sensor Tutorial - Compatible with the HC-SR04 distance sensor

This tutorial has been adapted from the Arduino Ping tutorial. Details below:
 http://www.arduino.cc/en/Tutorial/Ping        created 3 Nov 2008
 by David A. Mellis    modified 30 Aug 2011
  by Tom Igoe      This example code is in the public domain.

This code has been put together by Phil Jeffes
The full tutorial can be found on the Electro Cat Studios website:
  https://electrocatstudios.com

Much like Tom Igoe's and David A. Mellis's this code is in the public domain,
please feel free to change it and republish.

Wiring Guide

HC-SR04 Pin  |  Arduino Pin
---------------------------
    VCC      |       5v
    Trig     |    Digital 7
    Echo     |    Digital 8
    GND      |      GND

*/

const int pingPin = 7; // The outgoing signal
const int readPin = 8; // The incoming echo signal

void setup() {
  // initialize serial communication:
  Serial.begin(9600);

  // Set up the pins
  pinMode(pingPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  long duration, distance;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  duration = pulseIn(readPin, HIGH);

  // convert the time into a distance
  distance = microsecondsToCentimeters(duration);
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();
  delay(100);
}

long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}
