/*
Write a program to control an LED using a push button with pull-up configuration in ESP32

Components Used
- ESP32
- LED
- Push Button
- 330Ω Resistor (for LED)
- 10kΩ Resistor (Pull-up resistor for button)
- Breadboard
- Jumper Wires*/

#include <Arduino.h>

#define LED 18
#define BUTTON 19
void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT); //using external pullup active low
}

void loop()
{
   bool button_state=digitalRead(BUTTON);
   if(button_state==LOW) //press==LOW
   {
     digitalWrite(LED,HIGH);
   }
   else
   {
    digitalWrite(LED,LOW);
   }
}
