#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define PHOTORESITOR_PIN A0

void setup() {
  pinMode(PHOTORESITOR_PIN, INPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Photoresistor Sensor");

  lcd.setCursor(0, 2);
  lcd.print("Value:");
}

void loop() {
  lcd.setCursor(7, 2);
  lcd.print(analogRead(PHOTORESITOR_PIN));

  delay(150);
}
