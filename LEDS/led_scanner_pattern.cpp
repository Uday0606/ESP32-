/*
Write a program to control multiple LEDs in a left-to-right and right-to-left chasing pattern using ESP32.

 Components Used
- ESP32
- LEDs ×4
- 330Ω Resistors ×4
- Breadboard
- Jumper Wires*/

#include <Arduino.h>

//LED array
int leds[]={18,19,21,22};


void setup()
{ 
  //configure the LED pins as output
  for(int i=0;i<4;i++)
  {
    pinMode(leds[i],OUTPUT);
  }
}

void loop()
{
  //left to right

  for(int i=0;i<4;i++)
  {
    digitalWrite(leds[i],HIGH);
    delay(500);
    digitalWrite(leds[i],LOW);
  }

  //right to left
  for(int i=3;i>=0;i--)
  {
    digitalWrite(leds[i],HIGH);
    delay(500);
    digitalWrite(leds[i],LOW);
  }
}
