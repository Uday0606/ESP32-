/*
Write a program to display a custom bitmap
image on OLED display using ESP32.

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

const unsigned char smile_bitmap[] PROGMEM =
{
    0xff, 0xff, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x9c, 0x39,
    0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01,
    0x88, 0x11, 0x8f, 0xf1, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01,
    0xff, 0xff

};

void setup()
{
    Serial.begin(115200);
    //oled init
  if(!display.begin(SSD1306_SWITCHCAPVCC,0X3C))
  {
    Serial.println("OLED intialization failed");
    while(true);
  }

  display.clearDisplay(); //clear buffer

  //bitmap
  display.drawBitmap(56,24,smile_bitmap,16,16,SSD1306_WHITE);
  display.display();
}
void loop()
{

}
