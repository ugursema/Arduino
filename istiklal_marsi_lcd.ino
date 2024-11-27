#include <Wire.h>                  // I2C kütüphanesini dahil et
#include <LiquidCrystal_I2C.h>      // LiquidCrystal_I2C kütüphanesini dahil et

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD ekranın I2C adresi (0x27) ve boyutu (16 sütun, 2 satır)

String istiklalMarsi[] = {
  "Korkma, sOnmez bu safaklarda yüzen al sancak;", 
  "SOnmeden yurdumun üstünde tüten en son ocak;",
  "O benim milletimin yıldızıdır, parlayacak;",
  "O benimdir, o benim milletimindir ancak."
};

// Pin tanımlamaları
const int buzzerPin = 3; // Buzzer'ın bağlı olduğu pin

// Notaların frekansları (Hz)
int Do = 262;   // C0
int DoSharp = 277;  // C#0
int Re = 294;   // D0
int ReSharp = 311;  // D#0
int Mi = 330;   // E0
int Fa = 349;   // F0
int Sol = 392;  // G0
int SolSharp = 415;  // G#0
int La = 440;   // A0
int Si = 466;   // B0
int DoHigh = 523;  // C1 (yüksek oktav)

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  // LCD ekranına İstiklal Marşı'nın satırlarını yazdır
  for (int i = 0; i < 4; i++) {
    lcd.setCursor(0, 0);   // İlk satır
    lcd.print(istiklalMarsi[i]);  // Satırı ekrana yazdır
    delay(2000);            // 2 saniye bekle
    lcd.clear();            // Ekranı temizle
  }

  pinMode(buzzerPin, OUTPUT);  // Buzzer pinini çıkış olarak ayarla
}

void loop() {
  // İstiklal Marşı'nın ilk kısmı

  // 1. Nota: Do
  tone(buzzerPin, Do, 400); // 400 ms süreyle Do notasını çal
  delay(400);
  
  // 2. Nota: Do
  tone(buzzerPin, Do, 400); // 400 ms süreyle Do notasını çal
  delay(400);
  
  // 3. Nota: Re
  tone(buzzerPin, Re, 400); // 400 ms süreyle Re notasını çal
  delay(400);
  
  // 4. Nota: Re
  tone(buzzerPin, Re, 400); // 400 ms süreyle Re notasını çal
  delay(400);
  
  // 5. Nota: Mi
  tone(buzzerPin, Mi, 400); // 400 ms süreyle Mi notasını çal
  delay(400);
  
  // 6. Nota: Do
  tone(buzzerPin, Do, 400); // 400 ms süreyle Do notasını çal
  delay(400);
  
  // 7. Nota: Fa
  tone(buzzerPin, Fa, 400); // 400 ms süreyle Fa notasını çal
  delay(400);
  
  // 8. Nota: Do
  tone(buzzerPin, Do, 400); // 400 ms süreyle Do notasını çal
  delay(400);

  // İstiklal Marşı'nın ilk kısmı bitiyor.
  // Gecikme verelim ve döngüyü yeniden başlatalım.
  delay(1000);  // 1 saniye bekle
}

/*
// gelismis versiyon
#include <Wire.h>                  // I2C kütüphanesini dahil et
#include <LiquidCrystal_I2C.h>     // LiquidCrystal_I2C kütüphanesini dahil et

LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD ekranın I2C adresi ve boyutu: 16 sütun, 2 satır

String istiklalMarsi[] = {
  "Korkma, sonmez bu", 
  "safaklarda yüzen",
  "al sancak;", 
  "Sonmeden yur."
};

// Pin tanımlamaları
const int buzzerPin = 3; // Buzzer'ın bağlı olduğu pin

// Notaların frekansları (Hz)
int notalar[] = {262, 262, 294, 294, 330, 262, 349, 262}; // Do, Do, Re, Re, Mi, Do, Fa, Do
int sureler[] = {400, 400, 400, 400, 400, 400, 400, 400}; // Her nota için süre

void setup() {
  lcd.init();              // LCD'yi başlat
  lcd.backlight();         // Arka ışığı aç

  // LCD ekranına İstiklal Marşı'nın satırlarını yazdır
  for (int i = 0; i < 4; i++) {
    lcd.setCursor(0, 0);   // İlk satıra yaz
    lcd.print(istiklalMarsi[i]);  // Satırı LCD'ye yazdır
    delay(2000);           // 2 saniye bekle
    lcd.clear();           // Ekranı temizle
  }

  pinMode(buzzerPin, OUTPUT);  // Buzzer pinini çıkış olarak ayarla
}

void loop() {
  // Notaları sırayla çal
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, notalar[i], sureler[i]); // Buzzer'da nota çal
    delay(sureler[i]);                       // Nota süresi kadar bekle
  }

  delay(1000); // Döngüyü başlatmadan önce 1 saniye bekle
}


*/