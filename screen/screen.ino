/*
Arduino Screen Lab

In this lab, you will be using the LiquidCrystal library in order to print your name and a second counter.

Documentation: 
https://www.arduino.cc/en/Reference/LiquidCrystalConstructor
https://www.arduino.cc/en/Reference/LiquidCrystalPrint
https://www.arduino.cc/en/Reference/LiquidCrystalSetCursor

*/

// Include the LiquidCrystal library
#include <LiquidCrystal.h>

// Initialize a variable 'lcd' from the type 'LiquidCrystal'
// Pass the digital pins connected to rs, en, d4, d5, d6, d7 as parameters
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    // Tell lcd the number of columns and number of rows on our display (16,2)
    lcd.begin(16,2);
    // By default, the cursor is at (0,0). Print your name.
    lcd.print("Johnny");
}

void loop() {
    // Now, set cursor to the second row
    lcd.setCursor(0,1);
    // Print the number of seconds since reset using the millis() function
    lcd.print(millis() /1000);
}