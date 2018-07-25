/***************************************************************************************************************************/
/*
      Pin connections
      Name      Arduino     ESP8266         MAX7219 7 Segment display
      -----     -------     -------         -------------------------
                +5V         5V              VCC
                GND         GND             GND
      DIN       D11/MOSI    GPIO13 (D7)     DIN
      CS        *D7/SS      *GPIO15 (D8)    CS
      CLK       D13/SCK     GPIO14 (D5)     CLK
*/
/***************************************************************************************************************************/

#include <SPI.h>
#include <MAX7219_Digits.h>

MAX7219_Digit My_Display(7);  // Make an instance of MAX7219_Digit called My_Display and set CS pin

void setup() {

  Serial.begin(115200);
  Serial.println("Up and Clackin");

  My_Display.Begin();   // Set's all the registers and clears the display

} // end of setup



void loop() {

  My_Display.Brightness(2);   // Set brightness

  for (int f = 0; f < 1000; f++) {
    My_Display.Display_Value(1, (0 - f), 0, 0x00);
    My_Display.Display_Value(2, f, 0, 0x00);
    delay(10);
  }

} // end of loop
