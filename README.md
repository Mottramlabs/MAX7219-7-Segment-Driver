# MAX7219-7-Segment-Driver
A simple library for driving the MAX7219 LED display driver chip.

#### Display layout: Digit 1 is the left most digit, digit 8 is the far right digit
Arduino Driver Library for a MAX7219 driver chip using 7 segment LED displays

#### Typical Pin Connections
      Name      Arduino     ESP8266/Wemos D1    MAX7219 7 Segment display
      -----     -------     -------             -------------------------
                +5V         5V**                VCC
                GND         GND                 GND
      DIN       D11/MOSI    GPIO13 (D7)         DIN
      CS        *D7/SS      *GPIO15 (D8)        CS
      CLK       D13/SCK     GPIO14 (D5)         CLK
      
      * The CS connection is user selectable.
      ** From the USB 5V supplied to the Wemos D1 Mini PCB, The MAX7219 needs 5V

Below are some examples of boards that use this library. 

More details on the bar graph boards https://github.com/Mottramlabs/MAX7219-LED-Bar-Graph-Power-Display

Also please see my web page for details, https://www.mottramlabs.com/display_products.html

### Simple 8 Digit Display With Rotary Encoder
![Display-Type-B](https://github.com/Mottramlabs/MAX7219-LED-Bar-Graph-Power-Display/blob/master/Pictures/MAX7219%20Display.jpg?raw=true)

### Bar Graph Display Type B - General Purpose Connections
![Display-Type-B](https://github.com/Mottramlabs/MAX7219-LED-Bar-Graph-Power-Display/blob/master/Pictures/Type%20B%20Front.jpg?raw=true)

### Bar Graph Display Type C - Wemos D1 Mini Version
![Display-Type-B](https://github.com/Mottramlabs/MAX7219-LED-Bar-Graph-Power-Display/blob/master/Pictures/Type%20C%20Front.jpg?raw=true)
