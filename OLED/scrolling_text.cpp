/*
Write a program to scroll text
on OLED display using ESP32.

Components Required:
1. ESP32 Development Board
2. OLED Display (SSD1306 I2C)
3. Breadboard
4. Jumper Wires
*/
#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

//I2C oled display object
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,-1);

void setup()
{
    Serial.begin(115200);
    //Wire.begin(21,22);
    //oled init
  if(!display.begin(SSD1306_SWITCHCAPVCC,0X3C))
  {
    Serial.print("OLED intialization failed");
    while(true);
  }
}
  
  String message="UDAY SRI SAI";
  int text_width=message.length()*6*2;
  void loop()
  {
    for(int x=SCREEN_WIDTH;x>-text_width;x--)
    {
        display.clearDisplay(); //clear buffer
        display.setTextSize(2);
        display.setTextColor(SSD1306_WHITE);
        display.setTextWrap(false);
        display.setCursor(x,30);
        display.println(message);
        display.display(); //show on OLED
        delay(30);
    }
   
  }