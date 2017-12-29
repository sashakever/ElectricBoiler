/*
 * D4-D12 keybord
 * D3 - DS18b20
 * D2 - relay 1
 * A6 - relay 2
 * A4, A5 - I2C
 * A3 - red LED
 * A2 - green LED
 * A1 - speeker
*/


#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
	lcd.init();
	lcd.init();
	lcd.backlight();
	lcd.setCursor(3,0);
	lcd.print("Hello!");
	lcd.setCursor(2,1);
	lcd.print("Arduino!");

}

void loop() {

}
