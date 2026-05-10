/*
Write a program using ESP32 ADC and PWM
to control LED brightness using a potentiometer.

Components Required:
1. ESP32 Development Board
2. LED
3. 330Ω Resistor
4. Potentiometer
5. Breadboard
6. Jumper Wires

Output:
LED brightness changes according to the
potentiometer position using PWM.
*/

#include <Arduino.h>

const uint8_t pot_pin=34;
const uint8_t led_pin=18;

//pwm
const uint8_t channel=0;
const int frequency=5000;
const uint8_t resolution=8;
void setup()
{
  Serial.begin(115200);
  ledcSetup(channel,frequency,resolution);
  ledcAttachPin(led_pin,channel);
}

void loop()
{
   int pot_value=analogRead(pot_pin);

   //convert 0-4095 to 0-255
   int pwm_value=map(pot_value,0,4095,0,255);

   //control led brightness
   ledcWrite(channel,pwm_value);

   Serial.print("ADC value= ");
   Serial.println(pot_value);

   Serial.print("pwm value= ");
   Serial.println(pwm_value);

   delay(500);
}
