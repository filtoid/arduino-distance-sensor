/*
Hello World
  by Phil Jeffes (https://electrocatstudios.com)

This simple application can check that you have a connection to the Arduino.
It should print out Hello World to the Serial Monitor.

This code is in the public domain, please feel free to copy and redistribute,
please don't misrepresent the original author.
*/

void setup() {
    // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  // Print to our serial interface
  Serial.println("Hello world");
  // Wait for 1 second
    delay(1000);
}
