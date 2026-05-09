/*
Write a program to blink an LED connected to ESP32.

 Components Used
- ESP32
- LED
- 330Ω Resistor
- Breadboard
- Jumper Wires
*/
#include <Arduino.h>

#define LED 4

void setup()
{
  pinMode(LED,OUTPUT);
}

void loop()
{
  digitalWrite(LED,HIGH);
  delay(500);

  digitalWrite(LED,LOW);
  delay(500);

}