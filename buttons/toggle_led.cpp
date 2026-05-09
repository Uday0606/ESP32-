/*
Write a program to toggle an LED using a push button with ESP32

 Components Used
- ESP32
- LED
- Push Button
- 330Ω Resistor (for LED)
- 10kΩ Resistor pulldown(for Push Button)
- Breadboard
- Jumper Wires*/
#include <Arduino.h>

#define LED 18
#define BUTTON 19

bool led_state=LOW;
bool last_button_state=LOW;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT); 
}

void loop()
{
   int current_button_state=digitalRead(BUTTON);
   if(current_button_state==HIGH && last_button_state==LOW)
   {
      led_state=!led_state;
      digitalWrite(LED,led_state);

      delay(200); //debounce
   }
   last_button_state=current_button_state;
}
