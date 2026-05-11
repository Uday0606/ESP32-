/*
Write a program to turn an active buzzer
ON and OFF repeatedly using ESP32.

Components Required:
1. ESP32 Development Board
2. Active Buzzer
3. Breadboard
4. Jumper Wires
*/

#include <Arduino.h>
const uint8_t buzzer=18;
void setup()
{
 pinMode(buzzer,OUTPUT); //active buzzer
}

void loop()
{
    digitalWrite(buzzer,HIGH);
    delay(1000);

    digitalWrite(buzzer,LOW);
    delay(1000);
} 
