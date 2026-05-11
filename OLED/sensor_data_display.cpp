/*
Write a program to display potentiometer
ADC values on OLED display using ESP32.

Components Required:
1. ESP32 Development Board
2. Potentiometer
3. OLED Display (SSD1306 I2C)
4. Breadboard
5. Jumper Wires
*/
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

const uint8_t pot_pin=34;
//I2C oled display object
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,-1);

void setup()
{
    Serial.begin(115200);
    //oled init
  if(!display.begin(SSD1306_SWITCHCAPVCC,0X3C))
  {
    Serial.println("OLED intialization failed");
    while(true);
  }
}
void loop()
{
    int adc_value=analogRead(pot_pin);

    //display title
    display.clearDisplay();
    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(10,0);
    display.print("POT VALUE");
    

    //display sensor value
    display.setTextSize(3);
    display.setCursor(40,40);
    display.print(adc_value);

    display.display();//update oled
    delay(200);
}