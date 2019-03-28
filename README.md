# MAX7219-7-Segment-Driver
Arduino Driver Library for a MAX7219 driver chip using 7 segment LED displays

      Pin connections
      Name      Arduino     ESP8266         MAX7219 7 Segment display
      -----     -------     -------         -------------------------
                +5V         5V              VCC
                GND         GND             GND
      DIN       D11/MOSI    GPIO13 (D7)     DIN
      CS        *D7/SS      *GPIO15 (D8)    CS
      CLK       D13/SCK     GPIO14 (D5)     CLK
      
      The CS connection is user selectable.

