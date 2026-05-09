/*
Write a program to simulate a traffic light system using three LEDs with ESP32.

Components Used
- ESP32
- Red LED
- Yellow LED
- Green LED
- 330Ω Resistors ×3
- Breadboard
- Jumper Wires*/

#include <Arduino.h>

#define RED_LED 2
#define YELLOW_LED 4
#define GREEN_LED 5

void setup()
{
  //configure the LED pins as output
  pinMode(RED_LED,OUTPUT);
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
}

void loop()
{
  //Red on, yellow and green off
  digitalWrite(RED_LED,HIGH);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
  delay(3000);

  //Yellow on, red and green off
  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,HIGH);
  digitalWrite(GREEN_LED,LOW);
  delay(1000);

  //Green on, red and yellow off
  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,HIGH);
  delay(3000);
}
