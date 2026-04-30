const int pinLED1 = 8 ;
const int pinLED2 = 9 ;
const int pinLED3 = 10 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED1, OUTPUT) ;
  pinMode(pinLED2, OUTPUT) ;
  pinMode(pinLED3, OUTPUT) ;
}

//1. lampu menyala bersamaan 
// void loop() {
//   // Nyalakan semua dulu
//   digitalWrite(pinLED1, HIGH);
//   digitalWrite(pinLED2, HIGH);
//   digitalWrite(pinLED3, HIGH);
  
//   delay(500); // Tunggu sebentar saat semuanya nyala

//   // Matikan semua
//   digitalWrite(pinLED1, LOW);
//   digitalWrite(pinLED2, LOW);
//   digitalWrite(pinLED3, LOW);

//   delay(500); // Tunggu sebentar saat semuanya mati
// }

// 2. lampu nyala satu persatu

void loop() {
  // pinLED 1
  digitalWrite(pinLED1, HIGH) ;
  delay(500);
  digitalWrite(pinLED1, LOW) ;
  delay(500);

  // pinLED 2
  digitalWrite(pinLED2, HIGH) ;
  delay(500);
  digitalWrite(pinLED2, LOW) ;
  delay(500);

  // pinLED 3
  digitalWrite(pinLED3, HIGH) ;
  delay(500);
  digitalWrite(pinLED3, LOW) ;
  delay(500);


}