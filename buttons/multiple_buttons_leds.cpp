/*
Write a program to control two LEDs using two push buttons with ESP32.

 Components Used
- ESP32
- Red LED
- Yellow LED
- Push Buttons ×2
- 330Ω Resistors ×2 (for LEDs)
- 10kΩ Resistors ×2 (Pull-down resistors for buttons)
- Breadboard
- Jumper Wires*/
#include <Arduino.h>

#define RED_LED 18
#define YELLOW_LED 21
#define BUTTON1 19
#define BUTTON2 22
void setup()
{
 pinMode(RED_LED,OUTPUT);
 pinMode(YELLOW_LED,OUTPUT);

 pinMode(BUTTON1,INPUT);
 pinMode(BUTTON2,INPUT);
}

void loop()
{
  int button1_state=digitalRead(BUTTON1);
  int button2_state=digitalRead(BUTTON2);

  //button1 controls redled
  if(button1_state==HIGH)
  {
    digitalWrite(RED_LED,HIGH);
  }
  else
  {
    digitalWrite(RED_LED,LOW);
  }

  //button2 controls yellowled
  if(button2_state==HIGH)
  {
    digitalWrite(YELLOW_LED,HIGH);
  }
  else
  {
    digitalWrite(YELLOW_LED,LOW);
  }

}
