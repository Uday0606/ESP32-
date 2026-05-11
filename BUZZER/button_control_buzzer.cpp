/*
Write a program to control an active buzzer
using a push button with ESP32.

Components Required:
1. ESP32 Development Board
2. Active Buzzer
3. Push Button
4. Breadboard
5. Jumper Wires
*/

#include <Arduino.h>
const uint8_t buzzer=18;
const uint8_t button=21;
void setup()
{
 pinMode(buzzer,OUTPUT); //active buzzer
 pinMode(button,INPUT);
}

void loop()
{
    if(digitalRead(button)==LOW)
    {
        digitalWrite(buzzer,HIGH);
    }
    else
    {
        digitalWrite(buzzer,LOW);
    }
    delay(100);//debounce
}
