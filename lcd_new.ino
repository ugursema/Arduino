
//metin kaydırma

void loop() {
  // Metni sola kaydır
  lcd.scrollDisplayLeft();
  delay(250);  // 250 ms bekle
}

// 
/*
yanıp söndürme


void loop() {
  lcd.noBacklight();  // Arka ışığı kapat
  delay(500);         // 500 ms bekle
  lcd.backlight();    // Arka ışığı aç
  delay(500);         // 500 ms bekle
}



dinamik metin degisimi
String mesajlar[] = {"Sema UGUR", "IOM MIGRATION", "Hos Geldiniz"};
int mesajSayisi = 3; // Mesaj sayısı

void loop() {
  for (int i = 0; i < mesajSayisi; i++) {
    lcd.clear();               // Ekranı temizle
    lcd.setCursor(0, 0);       // İlk satıra geç
    lcd.print(mesajlar[i]);    // Mesajı yazdır
    delay(2000);               // 2 saniye bekle
  }
}

*/