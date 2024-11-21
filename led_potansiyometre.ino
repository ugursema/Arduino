//Potansiyometre ile Led parlaklık örnegi
//Potansiyometre, analog bir giriş cihazıdır ve döndürülerek değişken bir direnç sağlar. kontrol edilebilir dirençtir.
//Bu direnç, Arduino'nun analog pinine bağlanır ve 0 ile 1023 arasında (1024) değişen bir değer olarak okunabilir. 
//Bu değeri kullanarak bir LED'in parlaklığını kontrol edebiliriz.


/* 
** Potansiyometre ve LED Bağlantıları: **
- Potansiyometrenin bir kenar ucunu 5V'a, diğer kenar ucunu GND'ye bağlayın.
- Ortadaki pini (wiper) Arduino'nun A0 pinine bağlayın.
- LED'in uzun bacağını (anot) 220 Ω direnç üzerinden Arduino'nun dijital D8 pinine bağlayın.
- LED'in kısa bacağını (katot) GND'ye bağlayın.

** analogRead() nedir? **
- analogRead(), Arduino'nun analog pinlerinden birindeki voltajı ölçer (0 ile 5V arasında).
- Geri dönen değer, 10-bit çözünürlükle 0 ile 1023 arasında bir sayıdır.

** digitalWrite() nedir? **
- digitalWrite(), bir dijital pine HIGH (5V) veya LOW (0V) sinyali gönderir.
- HIGH, pini aktif hale getirir (örneğin LED yanar).
- LOW, pini pasif hale getirir (örneğin LED söner).
*/

void loop() {
  int sensorDegeri;                    // Potansiyometreden gelen değeri saklamak için bir değişken tanımlandı
  sensorDegeri = analogRead(sensorPini); // Potansiyometreden değer oku (0-1023 arası)

  // LED'i yak
  digitalWrite(ledPini, HIGH);          // LED'e HIGH sinyali gönder (LED yanar)
  delay(sensorDegeri);                  // Bekleme süresi olarak potansiyometreden okunan değeri kullan

  // LED'i söndür
  digitalWrite(ledPini, LOW);           // LED'e LOW sinyali gönder (LED söner)
  delay(sensorDegeri);                  // Aynı bekleme süresini kullan
}
