/*
Write a program using ESP32 ADC to control
LED blinking speed using a potentiometer.

Components Required:
1. ESP32 Development Board
2. LED
3. 330Ω Resistor
4. Potentiometer
5. Breadboard
6. Jumper Wires

Output:
LED blinking speed changes according to
the potentiometer position.
*/

#include <Arduino.h>
const uint8_t led=18;
const uint8_t pot_pin=34;

void setup()
{
 Serial.begin(115200);
 pinMode(led,OUTPUT);
}

void loop()
{
  int adc_value=analogRead(pot_pin);

  //convert adc value to delay range
  int delay_time=map(adc_value,0,4095,100,1000);

  Serial.print("adc_value= ");
  Serial.println(adc_value);

  Serial.print("delay_time= ");
  Serial.println(delay_time);

  //led on
  digitalWrite(led,HIGH);
  delay(delay_time);

  digitalWrite(led,LOW);
  delay(delay_time);

}
