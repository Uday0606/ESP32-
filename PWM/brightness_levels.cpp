/*
Write a program using ESP32 PWM to control
LED brightness at different intensity levels.

Components Required:
1. ESP32 Development Board
2. LED
3. 330Ω Resistor
4. Breadboard
5. Jumper Wires

Output:
LED glows at low, medium, and full
brightness levels using PWM.

*/

#include <Arduino.h>
const uint8_t LED=18;
const uint8_t channel=0; //pwm channel
const int frequency=5000; //pwm frequency
const uint8_t resolution=8; //8-bit
void setup()
{
 ledcSetup(channel,frequency,resolution);
 ledcAttachPin(LED,channel);
}

void loop()
{
    ledcWrite(channel,64); //low brightness
    delay(1000);

    ledcWrite(channel,128); //medium
    delay(1000);

    ledcWrite(channel,255); //full
    delay(1000);

    ledcWrite(channel,0); //off
    delay(1000);

}