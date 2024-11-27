#include <Wire.h>                  // I2C kütüphanesini dahil et
#include <LiquidCrystal_I2C.h>      // I2C LCD kütüphanesini dahil et

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD'nin I2C adresi (0x27) ve boyutu (16 sütun, 2 satır)

const int buzzerPin = 2;  // Buzzer'ın bağlı olduğu pin

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç
  delay(500);              // LCD ekranın başlatılması için kısa bir bekleme süresi

  pinMode(buzzerPin, OUTPUT);  // Buzzer pinini çıkış olarak ayarla

  // LCD ekranda mesaj yazdır
  lcd.setCursor(0, 0);   // İlk satır, ilk sütun
  lcd.print("Buzzer Calisiyor");

  // Buzzer'ı çalıştır
  tone(buzzerPin, 1000);  // 1000 Hz frekansında ses çıkar
  delay(1000);            // 1 saniye bekle

  // Buzzer'ı durdur
  noTone(buzzerPin);      // Buzzer'ı durdur

  // Mesajı sil
  lcd.clear();            // LCD ekranı temizle
  delay(1000);            // 1 saniye bekle

  // Mesajı tekrar yazdır
  lcd.setCursor(0, 0);    // İlk satır, ilk sütun
  lcd.print("Buzzer Calisiyor");

}

void loop() {
  // Loop kısmında herhangi bir işlem yapmıyoruz, sadece setup kısmındaki işlemleri bir kez yapıyoruz
}
