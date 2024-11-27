

#include <Wire.h>               
#include <LiquidCrystal_I2C.h>     

// LCD ekranın I2C adresi (genellikle 0x27 veya 0x3F olabilir)
LiquidCrystal_I2C lcd(0x27, 16, 2); // 16 sütun, 2 satır

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  lcd.setCursor(0, 0);     // İlk satır ve ilk sütun
  lcd.print("Sema UGUR");  // Ekrana yazı yazdır

  lcd.setCursor(0, 1);     // İkinci satır ve ilk sütun
  lcd.print("IOM MIGRATION"); // Ekrana yazı yazdır
}

void loop() {
  // Burada herhangi bir şey eklemeye gerek yok
}
