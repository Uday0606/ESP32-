/*
Write a program to control an LED using a push button with ESP32

Components Used
- ESP32
- LED
- Push Button
- 330Ω Resistor (for LED)
- 10kΩ Resistor (Pull-down resistor for button)
- Breadboard
- Jumper Wires*/

#include <Arduino.h>
#define LED 18
#define BUTTON 19

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT); 
}

void loop()
{
  int button_state=digitalRead(BUTTON);

  if(button_state==HIGH)
  {
    digitalWrite(LED,HIGH);
  }
  else
  {
     digitalWrite(LED,LOW);
  }
}
