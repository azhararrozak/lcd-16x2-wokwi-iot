#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

int lcdColumns = 16;
int lcdRows = 2;

LiquidCrystal_I2C lcd(0x27, lcdColumns, lcdRows);  

void setup(){
  // initialize LCD
  lcd.init();
  // turn on the backlight                   
  lcd.backlight();
}

void loop(){
  int nilai = random(0, 100);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nilai: ");
  lcd.print(nilai);
  
  lcd.setCursor(0, 1);
  
  // Condition
  if (nilai > 90) {
    lcd.print("Sangat Baik");
  } else if (nilai >= 75 && nilai <= 89) {
    lcd.print("Baik");
  } else {
    lcd.print("Coba Lagi");
  }
  
  delay(4000); 
}