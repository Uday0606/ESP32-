/*
Write a program to detect short press and long press of a push button using ESP32

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

bool button_pressed=false;
unsigned long press_start_time=0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  Serial.begin(9600);
}

void loop()
{
  bool current_button_state=digitalRead(BUTTON);
  
  //button pressed
  if(current_button_state==HIGH && !button_pressed)
  {
    button_pressed=true;
    press_start_time=millis();
  }

  //button released
  if(current_button_state==LOW && button_pressed)
  {
    button_pressed=false;

    unsigned long press_duration=millis()-press_start_time;
    Serial.print("press time: ");
    Serial.println(press_duration);

    //long press detect
    if(press_duration>=2000)
    {
      digitalWrite(LED,HIGH);
      Serial.println("long press detected");
      delay(50);
    }
    else
    {
      digitalWrite(LED,LOW);
      Serial.println("short press");
    }
  }
}
    
