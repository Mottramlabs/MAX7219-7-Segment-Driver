Simple driver library for a MAX7219 mounted on an LED display board
September 2018 - David Mottram
Added clock display function and better decimal point control

Uses a single MAX7219 display driver chip
-----------------------------------------
	Pin connections
    Name      Arduino     ESP8266         MAX7219 7 Segment display
    -----     -------     -------         -------------------------
              +5V         5V              VCC
              GND         GND             GND
    DIN       D11/MOSI    GPIO13 (D7)     DIN
    CS        *D7/SS      *GPIO15 (D8)    CS
    CLK       D13/SCK     GPIO14 (D5)     CLK

Functions 
---------

	MAX7219_Digit(CS Pin);															Constructor
	Begin()																			Set up the MAX7219 control registers
	MAX7219_Write(Address, Data)													Write a data byte to the MAX7219
	Clear()																			Clear dislplay
	Brightness(Brightness)															Range 0-15
	Display_Text(Display_Num, Char_1, Char_2, Char_3, Char_4)						Select top or bottom display and display the numbers for digits 1-4
	Display_Value(Display_Num, Display_Value, Display_DecP, Suffix, decimal_point)	Select top or bottom display and a value with D.p. and suffix character
	Clock_Display(int row, String value, int colon);								Display a clock with colon

Character font and OP code
--------------------------
	0b01111110,       //  0x00 - '0'
	0b00110000,       //  0x01 - '1'
	0b01101101,       //  0x02 - '2'
	0b01111001,       //  0x03 - '3'
	0b00110011,       //  0x04 - '4'
	0b01011011,       //  0x05 - '5'
	0b01011111,       //  0x06 - '6'
	0b01110000,       //  0x07 - '7'
	0b01111111,       //  0x08 - '8'
	0b01111011,       //  0x09 - '9'
	0b01110111,       //  0x0A - 'A'
	0b00011111,       //  0x0B - 'B'
	0b01001110,       //  0x0C - 'C'
	0b00111101,       //  0x0D - 'D'
	0b01001111,       //  0x0E - 'E'
	0b01000111,       //  0x0F - 'F'

	// Other Characters
	0b00000000,       //  0x10 - 'Blank'
	0b01000011,       //  0x11 - 'c'
	0b01000000,       //  0x12 - '-'
	0b00000001,       //  0x13 - '-'
	0b00001000,       //  0x14 - '-'
	0b00110111,       //  0x15 - 'H'
	0b00001110,       //  0x16 - 'L'
	0b01110110,       //  0x17 - 'N'
	0b01100111,       //  0x18 - 'P'
	0b00111011,       //  0x19 - 'Y'
	0b01100011,       //  0x1A - '''
	0b00111110,       //  0x1B - 'V'
	0b00011101,       //  0x1C - 'o'
	0b00001111,       //  0x1D - 't'
