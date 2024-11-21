void setup() {
  // 
pinMode(2, OUTPUT);//Kırmızı Led
pinMode(3, OUTPUT);// Sarı Led
pinMode(4, OUTPUT);// Yesil Led
pinMode(5, OUTPUT);// Buzzer
}
//Önce kırmızı led ve buzzer yanacak sonra 2 sn bekleme olacak
void loop() {
  // Önce kırmızı led ve buzzer yanacak sonra 2 sn bekleme olacak
digitalWrite(2,HIGH);//kırmızı led
digitalWrite(3,LOW);//sarı led
digitalWrite(4,LOW);//yesil led
digitalWrite(5,HIGH);//buzzer
delay(2000);

//burada tüm led ve buzzer kapalı 3 sn bekleme modunda
digitalWrite(2,LOW);//kırmızı led
digitalWrite(3,LOW);//sarı led
digitalWrite(4,LOW);//yesil led
digitalWrite(5,LOW);;//buzzer
delay(3000);

//Sarı led ve buzzer yanacak sonra 2 sn bekleme olacak
digitalWrite(2,LOW);//kırmızı led
digitalWrite(3,HIGH);//sarı led
digitalWrite(4,LOW);//yesil led
digitalWrite(5,HIGH);//buzzer
delay(2000);

//burada tüm led ve buzzer kapalı 3 sn bekleme modunda
digitalWrite(2,LOW);//kırmızı led
digitalWrite(3,LOW);//sarı led
digitalWrite(4,LOW);//yesil led
digitalWrite(5,LOW);;//buzzer
delay(3000);

//Yesil led ve buzzer yanacak sonra 2 sn bekleme olacak
digitalWrite(2,LOW);//kırmızı led
digitalWrite(3,LOW);//sarı led
digitalWrite(4,HIGH);//yesil led
digitalWrite(5,HIGH);//buzzer
delay(2000);

//burada tüm led ve buzzer kapalı 3 sn bekleme modunda
digitalWrite(2,LOW);//kırmızı led
digitalWrite(3,LOW);//sarı led
digitalWrite(4,LOW);//yesil led
digitalWrite(5,LOW);;//buzzer
delay(3000);
}
