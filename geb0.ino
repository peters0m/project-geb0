
// ## Display LCD 16x2

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 3, en = 4, d4 = A2, d5 = A3, d6 = A4, d7 = A5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


// CODE THAT RUNS ONCE 
void setup() {
  
  // set up start communications
  Serial.begin(9600);
  Serial.println("initializing setup...");
  lcd.begin(16, 2);
  // Clear the display of the LCD.
  lcd.clear();
  // Display Message Initializing on Display LCD
  lcd.setCursor(0, 0);
  lcd.print("fala baixo nengue");
  delay (1000);
  lcd.clear();
  Serial.println("ok");
}


void printText() {
  lcd.setCursor(0, 0);
  lcd.print("projeto geb0");
  delay(5000);
}

void loop() {

  printText();

}