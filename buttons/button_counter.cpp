/* 
Write a program to count the number of push button presses using ESP32

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

bool last_button_state=LOW;
int button_count=0;

void setup()
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int current_button_state=digitalRead(BUTTON);
  
  if(current_button_state==HIGH && last_button_state==LOW)
  {
    button_count++;
    Serial.print("button count= ");
    Serial.println(button_count);

    //blink led
    digitalWrite(LED,HIGH);
    delay(300);
    digitalWrite(LED,LOW);

    delay(200);//debounce
    
  }
  last_button_state=current_button_state;
}
