/*
Write a program using ESP32 ADC to read
potentiometer values and convert them into voltage.

Components Required:
1. ESP32 Development Board
2. Potentiometer
3. Breadboard
4. Jumper Wires

Output:
ADC values and corresponding voltage values
are continuously displayed on the Serial Monitor.
*/
#include <Arduino.h>

const uint8_t pot_pin=34;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    int adc_value=analogRead(pot_pin);

    //convert adc to volatge
    float voltage=(adc_value/4095.0)*3.3;

    Serial.println("------");
    Serial.print("adc_value= ");
    Serial.println(adc_value);

    Serial.print("voltage= ");
    Serial.println(voltage);
   
    delay(500);

}
