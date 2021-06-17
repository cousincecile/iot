#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int fsrAnalogPin = 0;
int fsrReading;
int weight_product = 3;
int quantity;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
}

void loop() {
  fsrReading = analogRead(fsrAnalogPin);
  quantity = fsrReading / weight_product;
  lcd.setCursor(0, 0);
  lcd.print("Restant : ");
  lcd.setCursor(0, 1);
  lcd.print(quantity);
}
 