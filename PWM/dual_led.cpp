/*
Write a program using ESP32 PWM to control
two LEDs with opposite brightness levels.

Components Required:
1. ESP32 Development Board
2. Blue LED
3. Yellow LED
4. 330Ω Resistors (2)
5. Breadboard
6. Jumper Wires

Output:
As the blue LED brightness increases,
the yellow LED brightness decreases
using PWM.

*/

#include <Arduino.h>
const uint8_t blue_led=18;
const uint8_t yellow_led=19;

//pwm
const uint8_t ch_1=0;
const uint8_t ch_2=1;
const int frequency=5000;
const uint8_t resolution=8;

void setup()
{
  ledcSetup(ch_1,frequency,resolution);
  ledcSetup(ch_2,frequency,resolution);

  ledcAttachPin(blue_led,ch_1);
  ledcAttachPin(yellow_led,ch_2);

}

void loop()
{
    for(int duty_cycle=0;duty_cycle<=255;duty_cycle++)
    {
        ledcWrite(ch_1,duty_cycle); //blueled brightness increases
        ledcWrite(ch_2,255-duty_cycle); //yellowled brightness dec

        delay(10);
        
    }
}
