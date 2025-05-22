#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Blinking LED example with I2C display

const int ledPin = 13; // Pin where the LED is connected
LiquidCrystal_I2C lcd(0x27, 16, 2); // Address 0x27, 16 columns, 2 rows

void blikLED(){
    digitalWrite(ledPin, HIGH); // Turn the LED on
    delay(1000);                // Wait for 1 second
    digitalWrite(ledPin, LOW);  // Turn the LED off
    delay(1000);                // Wait for 1 second
}

void setup() {
    pinMode(ledPin, OUTPUT); // Set the LED pin as an output
    pinMode(2, INPUT);       // Set pin 2 as an input

    lcd.init();              // Initialize the LCD
    lcd.backlight();         // Turn on the backlight
    lcd.setCursor(0, 0);
    lcd.print("LED Status:");
}

void loop() {
    blinkLED(); // Call the blink function
    lcd.setCursor(0, 1);     // Move cursor to the second row
    lcd.print("LED is ON");  // Display LED status
    delay(1000);            // Wait for 1 second
    delay(1000);                // Wait for 1 second
}