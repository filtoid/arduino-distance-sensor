/*
LED Test

This file assumes you have a series of 5 LEDs - 3 green and 2 red. After
When we pull the voltage high on a pin it should like the corresponding LED.
This file is a flash test looping through each LED in order, to check they are
wired up correctly

Phil Jeffes
  https://electrocatstudios.com

This code is public domain, please feel free to modify and redistribute

Wiring :-
The red LEDs should be attached to pins 2 & 1.
The green LEDs should be attached to pins 3, 4 and 5.
*/
const int RED1 = 1;
const int RED2 = 2;
const int GREEN1 = 3;
const int GREEN2 = 4;
const int GREEN3 = 5;

void setup(){

  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(GREEN1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(GREEN3, OUTPUT);

  // Make sure all pins are low to start
  digitalWrite(RED1, LOW);
  digitalWrite(RED2, LOW);
  digitalWrite(GREEN1, LOW);
  digitalWrite(GREEN2, LOW);
  digitalWrite(GREEN3, LOW);    
}

void loop(){
  digitalWrite(RED1, HIGH);
  delay(500);

  digitalWrite(RED1, LOW);
  digitalWrite(RED2, HIGH);
  delay(500);

  digitalWrite(RED2, LOW);
  digitalWrite(GREEN1, HIGH);
  delay(500);

  digitalWrite(GREEN1, LOW);
  digitalWrite(GREEN2, HIGH);
  delay(500);

  digitalWrite(GREEN2, LOW);
  digitalWrite(GREEN3, HIGH);
  delay(500);

  digitalWrite(GREEN3, LOW);
  delay(500);
}
