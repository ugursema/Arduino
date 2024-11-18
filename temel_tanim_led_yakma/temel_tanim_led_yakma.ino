//ARDUINO TEMELLERİ
//Temel Tanımlar
/*
Akım = Elektrik devresindeki elektronların hareketiridir. Birimi Amper.(A)
Voltaj = Elektrik devresindek, potansiyel farktır. Birimi Volt.(V)
DC =(Direct Current) Dogru akım. Elktrik akımı tek yönde akar. Örnek piller bataryalar yani düsük voltaj
AC = (Alternating Current) Alternatif Akım. Elektrik akım yönü sürekli degisir. Örnek evlerdeki rpziler yani yüksek voltaj
Multimetre = Akım, Voltaj, Direnc ölcebilir DC, AC modları vardır
Genel Elektronik Devre Elemanları:
Direnc(Resistor) = Devreden gecen akımı dengeler. Elektrik akımının direncini dengeleyen bilesen
Kondansatör(Capacitor) = Enerjiyi kısa süreli depolar.
Diyot(Diyode) = Akımı sadece bir yönde gecirir.
Transistor = Akımı kontrol eden elektronik anahtardır.
Led = Isık yayan diyot
Kablo = Elektrik akımını ve sinyalleri bir noktadan digerine ileten iletken malzeme
LCD Ekranı = Verileri, bilgileri görüntülemek icin kullanılan ekran
Arduino UNO = Elektronik devrelerin projelerin yapıldıgı Mikrodenetleyici kartı - Akıllı bilgisayar
Sensör =  Ortamdaki fiziksel degisiklikleri algılayıp elektrik sinyaline dönüstüren cihaz
Batarya = Elektronik devrelere enerji saglayan gecici güc kaynagı
Breadbord =  Gecici elektronik devrelerin yapılasını sağlayan prototipleme cihazı
Breadbord Yapısı = Kenarları + - iile isaretlidir güc saglamak icin mesela 5V + hattına GND(topraklama) ise - hattına baglanır.
Aynı sıradaki deliklere yerlestirilen elemanlar elektriksel olarak birbirlerine baglanırlar.

Arduino UNO
Mikrodenetleyici olarak ATmega328P kullanır.
Digital Pin 14 (6 tanesi PWM cıkısı destekler)
Analog pin 6
USB-B Tipi kablo ile bilgisayara baglanır.
D1 pini, Serial Monitor veya diğer seri iletişim cihazları ile iletişim kurmak için gereklidir.


Arduino Nano:
UNO kıyasla daha küçük ve kompakt bir kart.
Mikrodenetleyici olarak ATmega328P veya ATmega168 kullanır.
Dijital Pin 14 (6 tanesi PWM çıkışı destekler).
Analog Pin 8
Mini-USB veya Micro-USB kablo ile bağlanır.
*/



//LED YAKMA

  // arduino baslatılması 
void setup() {
  // pin tanımları /cıkıs pinleri ayarlanır.
  pinMode(3, OUTPUT); // Pin 3 çıkış olarak ayarlandı
  pinMode(4, OUTPUT); // Pin 4 çıkış olarak ayarlandı
  pinMode(5, OUTPUT); //Pin 5 çıkış olarak ayarlandı
  
}

void loop() {
  // loop döngü hangi led yanacaksa ona göre HIGH LOW yazılacak

  // digitalWrite(): Pinin durumunu değiştirmek (LED'in yanması veya sönmesi).
  //3. pin yansın sadece 4 saniye sonra sönsün

  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  //delay bekleme fonk ms cinsinden yazılır
  delay(4000) //4 sn bekle


  //4. pin yansın sadece 5 saniye sonra sönsün
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(5000) //5 sn bekle

  //5. pin yansın sadece 5 saniye sonra sönsün
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(3000) //3 sn bekle
} 