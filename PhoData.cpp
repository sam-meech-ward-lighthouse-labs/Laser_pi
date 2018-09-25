#include <Arduino.h>

int pinNumber = 13;

void setup() {
    pinMode(pinNumber, OUTPUT);
}

void loop() {
  digitalWrite(pinNumber, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(pinNumber, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
}