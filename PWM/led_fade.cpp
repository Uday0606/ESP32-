/*

Write a program using ESP32 PWM to 
gradually increase and decrease LED brightness

Components Required:
1. ESP32 Development Board
2. LED
3. 330Ω Resistor
4. Breadboard
5. Jumper Wires


Output:
LED brightness gradually increases and decreases
continuously using PWM.

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
    //fade-in
    for(int duty_cycle=0;duty_cycle<=255;duty_cycle++)
    {
        ledcWrite(channel,duty_cycle);
        delay(10);
    }

    //fadeout
     for(int duty_cycle=255;duty_cycle>=0;duty_cycle--)
    {
        ledcWrite(channel,duty_cycle);
        delay(10);
    }
}
