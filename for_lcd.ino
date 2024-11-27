// Mesajı sagdan sola kaydırma
#include <Wire.h>               
#include <LiquidCrystal_I2C.h>     

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD'nin I2C adresi ve boyutu: 16 sütun, 2 satır

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  String mesaj = "Hello World"; // Yazdırılacak mesaj

  for (int i = 15; i >= 0; i--) { // Mesajı sağdan sola kaydır
    lcd.setCursor(i, 0);  // İmleci sütun 'i', satır 0'a ayarla
    lcd.print(mesaj);     // Mesajı yazdır
    delay(250);           // Kaydırma hızını kontrol etmek için bekle
    lcd.clear();          // Bir sonraki adım için ekranı temizle
  }
}

void loop() {
  // Döngüde işlem yapmıyoruz
}


/*
//2. Mesajı Sağa ve Sola Kaydırma
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD'nin adresi ve boyutu

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç
}

void loop() {
  char mesaj[] = "Hello World!"; // Kaydırılacak mesaj

  // Mesajı sağa kaydır
  for (int i = 0; i < 16; i++) {
    lcd.clear();                 // Önce ekranı temizle
    lcd.setCursor(i, 0);         // Kaydırmaya uygun konum
    lcd.print(mesaj);            // Mesajı yazdır
    delay(300);                  // Kaydırma hızı
  }

  // Mesajı sola kaydır
  for (int i = 15; i >= 0; i--) {
    lcd.clear();                 // Önce ekranı temizle
    lcd.setCursor(i, 0);         // Kaydırmaya uygun konum
    lcd.print(mesaj);            // Mesajı yazdır
    delay(300);                  // Kaydırma hızı
  }
}
*/


/*
//3. Mesajı Karakter Karakter Yazdırma
#include <Wire.h>               
#include <LiquidCrystal_I2C.h>     

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD'nin I2C adresi ve boyutu: 16 sütun, 2 satır

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  String mesaj = "Hello World"; // Yazdırılacak mesaj

  for (int i = 0; i < mesaj.length(); i++) { // Mesajın uzunluğu kadar döngü
    lcd.setCursor(i, 0);     // İmleci uygun sütun ve satıra ayarla
    lcd.print(mesaj[i]);     // Mesajın 'i' numaralı karakterini yazdır
    delay(500);              // Yazma hızı
  }
}

void loop() {
  // Döngüde işlem yapmıyoruz
}
*/




