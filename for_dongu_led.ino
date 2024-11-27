// İlk Kod: 2'den 4'e Kadar Olan Pinlere LED Bağlamak

void setup() {
    for (int x = 2; x < 5; x++) { // 2'den 4'e kadar olan pinleri çıkış olarak ayarla
        pinMode(x, OUTPUT);  // Her bir pini çıkış olarak tanımla
    }
}

void loop() {
    for (int x = 2; x < 5; x++) { // 2'den 4'e kadar olan pinleri sırayla dolaş
        digitalWrite(x, HIGH);  // LED'i yak
        delay(1000);            // 1 saniye bekle
        digitalWrite(x, LOW);   // LED'i söndür
        delay(1000);            // 1 saniye bekle
    }
}


/*
// LED Pinlerini Dizi Kullanarak Yönetmek
const int ledPin[] = {2, 3, 4}; // LED'lerin bağlı olduğu pinleri bir diziye tanımla
const int ledNumara = 3;        // LED sayısını tanımla

void setup() {
    for (int i = 0; i < ledNumara; i++) {  // Tüm LED pinlerini dolaş
        pinMode(ledPin[i], OUTPUT);       // Her bir pini çıkış olarak ayarla
    }
}

void loop() {
    for (int i = 0; i < ledNumara; i++) {  // Tüm LED pinlerini sırayla yak
        digitalWrite(ledPin[i], HIGH);    // LED'i yak
        delay(1000);                      // 1 saniye bekle
        digitalWrite(ledPin[i], LOW);     // LED'i söndür
        delay(1000);                      // 1 saniye bekle
    }
}

*/

/*
For Döngüsünün Genel Kullanımı

void setup() {
    Serial.begin(9600); // Seri haberleşmeyi başlat
}

void loop() {
    for (int i = 0; i < 10; i++) {  // 0'dan 9'a kadar döngü
        Serial.println(i);          // Mevcut döngü değerini seri monitöre yazdır
        delay(500);                 // 500 ms bekle
    }
}

*/



/*
//Bir LED'i Belirli Sayıda Yakıp Söndürmek

const int ledPin = 13; // LED'in bağlı olduğu pin

void setup() {
    pinMode(ledPin, OUTPUT); // LED pini çıkış olarak ayarlanır
}

void loop() {
    for (int i = 0; i < 10; i++) {        // Döngü 10 kez çalışır
        digitalWrite(ledPin, HIGH);      // LED'i yak
        delay(500);                      // 500 ms bekle
        digitalWrite(ledPin, LOW);       // LED'i söndür
        delay(500);                      // 500 ms bekle
    }
}
*/


//LCD Ekran Başlangıç Örneği
/*
 #include <LiquidCrystal.h>

// LCD'nin bağlı olduğu pinler
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);           // 16x2 boyutunda LCD başlat
    lcd.print("Merhaba Dünya!");// İlk satıra yazı yazdır
}

void loop() {
    lcd.setCursor(0, 1);        // İmleci 2. satıra taşı
    lcd.print(millis() / 1000);// Süreyi yazdır (saniye)
    delay(1000);                // 1 saniye bekle
}


*/