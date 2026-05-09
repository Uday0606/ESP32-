/*
Write a program to implement a 4-bit binary counter using LEDs and ESP32.

Components Used
- ESP32
- LEDs ×4
- 330Ω Resistors ×4
- Breadboard
- Jumper Wires*/

#include <Arduino.h>

#define LED1 18
#define LED2 19
#define LED3 21
#define LED4 22

void setup()
{ 
  //configure the LED pins as output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop()
{
  // count from 0 to 15 in binary and display the count on the LEDs
  for(int count=0;count<16;count++)
  {
    digitalWrite(LED1,(count) & 0x01);
    digitalWrite(LED2,(count>>1) & 0x01);
    digitalWrite(LED3,(count>>2) & 0x01);
    digitalWrite(LED4,(count>>3) & 0x01);

    delay(1000);
  }
}
