/*
Write a program to blink two LEDs alternately using ESP32.

 Components Used
- ESP32
- Blue LED
- Red LED
- 330Ω Resistors ×2
- Breadboard
- Jumper Wires*/

#include <Arduino.h>

#define BLUE_LED 4
#define RED_LED  2

void setup()
{
  pinMode(BLUE_LED,OUTPUT);
  pinMode(RED_LED,OUTPUT);
}

void loop()
{
  // blue on ,red off
  digitalWrite(BLUE_LED,HIGH);
  digitalWrite(RED_LED,LOW);
  delay(500);

  // blue off, red on
  digitalWrite(BLUE_LED,LOW);
  digitalWrite(RED_LED,HIGH);
  delay(500);
}