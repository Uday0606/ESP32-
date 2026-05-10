/*
Write a program using ESP32 ADC to read
analog values from a potentiometer and
display them on the Serial Monitor.

Components Required:
1. ESP32 Development Board
2. Potentiometer
3. Breadboard
4. Jumper Wires

Output:
Potentiometer ADC values are continuously
displayed on the Serial Monitor.
*/

#include <Arduino.h>

const uint8_t pot_pin=34;

void setup()
{
  Serial.begin(115200);

}

void loop()
{
    int value=analogRead(pot_pin);
    Serial.print("potentiometer value= ");
    Serial.println(value);

    delay(500);

}
