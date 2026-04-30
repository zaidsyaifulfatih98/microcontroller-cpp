// Notes
// 1. potensio meter kaki kiri ke 5V , kaki tengah ke A0 dan kaki kanan ke GRND
// 2. lampu harus nancap ke lobang yang ada tanda ~

const int pinPot = A0;   // Kaki tengah potensiometer ke A0
const int pinLED1 = 9;   // Gunakan pin dengan tanda (~) seperti 9, 10, atau 11
const int pinLED2 = 10;
const int pinLED3 = 11;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  Serial.begin(9600); // Untuk memantau nilai di Serial Monitor
}

void loop() {
  // Membaca nilai analog (0 - 1023)
  int nilaiPot = analogRead(pinPot);

  // Mengubah rentang nilai 0-1023 menjadi 0-255 (untuk tingkat terang LED)
  int kecerahan = map(nilaiPot, 0, 1023, 0, 255);

  // Mengatur kecerahan LED
  analogWrite(pinLED1, kecerahan);
  analogWrite(pinLED2, kecerahan);
  analogWrite(pinLED3, kecerahan);

  // Menampilkan nilai ke Serial Monitor (Opsional)
  Serial.print("Nilai Pot: ");
  Serial.println(nilaiPot);
  
  delay(10); // Biar pembacaan lebih stabil
}