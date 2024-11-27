#include <Wire.h>               
#include <LiquidCrystal_I2C.h>     

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD ekranın I2C adresi (genellikle 0x27 veya 0x3F olabilir)

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  lcd.setCursor(0, 0);     // İlk satır ve ilk sütun
  lcd.print("Hello World");  // Ekrana yazı yazdır
}

void loop() {
  delay(1000);                // 1 saniye bekle
  lcd.noBacklight(); 
  delay(250); 
  lcd.backlight();          // Arka ışığı kapat
  lcd.scrollDisplayLeft();    // Metni sola kaydır
  delay(250);                 // 250ms bekle
  lcd.backlight();            // Arka ışığı aç
}

/*
#include <Wire.h>               
#include <LiquidCrystal_I2C.h>     

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD ekranın I2C adresi (genellikle 0x27 veya 0x3F olabilir)

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  lcd.setCursor(0, 0);     // İlk satır ve ilk sütun
  lcd.print("Hello World");  // Ekrana yazı yazdır
  lcd.setCursor(0, 1);     // İkinci satır
  lcd.print("ikinci mesaj");  // Ekrana yazı yazdır
}

void loop() {
  // İlk satırdaki metni sola kaydır
  lcd.scrollDisplayLeft();
  delay(250);  // 250ms bekle

  // İkinci satırdaki metni sağa kaydır
  lcd.scrollDisplayRight();
  delay(250);  // 250ms bekle
}


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD ekranın I2C adresi ve boyutu: 16x2

void setup() {
  lcd.init();              // LCD ekranını başlat
  lcd.backlight();         // Arka ışığı aç

  // İlk satıra "Hello World" yaz
  lcd.setCursor(0, 0);
  lcd.print("Hello World");

  // İkinci satıra "Ikinci Mesaj" yaz
  lcd.setCursor(0, 1);
  lcd.print("Ikinci Mesaj");
}

void loop() {
  // İlk satırdaki metni sola kaydır
  lcd.scrollDisplayLeft();
  delay(250);  // 250 ms bekle

  // Metni tekrar başa döndürmek için belirli bir süre sonra kaydırmayı sıfırla
  static int counter = 0;  // Kaydırma sayısını takip etmek için sayaç
  counter++;

  if (counter == 16) { // 16 kez kaydırma sonrası (16 sütunluk ekran için)
    lcd.clear();        // Ekranı temizle
    setup();            // Metni yeniden yazdır
    counter = 0;        // Sayaç sıfırla
  }
}


*/