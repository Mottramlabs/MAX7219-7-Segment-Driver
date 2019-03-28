# MAX7219-7-Segment-Driver
# Digit 1 is the left most digit, digit 8 is the far right digit
Arduino Driver Library for a MAX7219 driver chip using 7 segment LED displays

      Pin connections
      Name      Arduino     ESP8266/Wemos D1    MAX7219 7 Segment display
      -----     -------     -------             -------------------------
                +5V         5V**                VCC
                GND         GND                 GND
      DIN       D11/MOSI    GPIO13 (D7)         DIN
      CS        *D7/SS      *GPIO15 (D8)        CS
      CLK       D13/SCK     GPIO14 (D5)         CLK
      
      * The CS connection is user selectable.
      ** From the USB 5V supplied to the Wemos D1 Mini PCB, The MAX7219 needs 5V

