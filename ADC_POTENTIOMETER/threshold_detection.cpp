/*
Write a program using ESP32 ADC to control
an LED based on a threshold value from
a potentiometer.

Components Required:
1. ESP32 Development Board
2. LED
3. 330Ω Resistor
4. Potentiometer
5. Breadboard
6. Jumper Wires

Output:
LED turns ON when the ADC value exceeds
the threshold value and turns OFF otherwise.
*/

#include <Arduino.h>
const uint8_t led=18;
const uint8_t pot_pin=34;
const int threshold_value=2000;
void setup()
{
  Serial.begin(115200);
  pinMode(led,OUTPUT);
}

void loop()
{
    int adc_value=analogRead(pot_pin);

    Serial.print("adc_value= ");
    Serial.println(adc_value);

    if(adc_value>threshold_value)
    {
        digitalWrite(led,HIGH);
        Serial.println("LED ON");
    }
    else
    {
        digitalWrite(led,LOW);
        Serial.println("LED OFF");
    }
    Serial.println("----");
    delay(500);
}
