// notes
//  1. push button kakinya yang dipakai cuma 2 , yang 2 lainnya tidak
//  2. kabel push botton nyambung ke positif dan ke GRND
const int pinLED1 = 8;
const int pinLED2 = 9;
const int pinLED3 = 10;
const int pinButton = 3;

void setup() {
  // Menggunakan INPUT_PULLUP agar tidak butuh resistor eksternal di tombol
  pinMode(pinButton, INPUT_PULLUP);

  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  // Jika tombol ditekan (LOW), bacaan sensor akan menyalakan LED
  if (digitalRead(pinButton) == LOW) {
    digitalWrite(pinLED1, HIGH);
    digitalWrite(pinLED2, HIGH);
    digitalWrite(pinLED3, HIGH);
  } else {
    digitalWrite(pinLED1, LOW);
    digitalWrite(pinLED2, LOW);
    digitalWrite(pinLED3, LOW);
  }
}

// 2. jika mau sekali tombol on dan sekali tombol off , pakai yang dibawah ini

// const int pinLED1 = 8;
// const int pinLED2 = 9;
// const int pinLED3 = 10;
// const int pinButton = 3;

// bool lampuNyala = false;      // Variabel untuk menyimpan status lampu
// bool tombolDitekan = false;   // Variabel untuk mencegah "double click" saat ditekan lama

// void setup() {
//   pinMode(pinButton, INPUT_PULLUP);
//   pinMode(pinLED1, OUTPUT);
//   pinMode(pinLED2, OUTPUT);
//   pinMode(pinLED3, OUTPUT);
// }

// void loop() {
//   // Membaca status tombol
//   int bacaTombol = digitalRead(pinButton);

//   // Cek apakah tombol ditekan (LOW) DAN sebelumnya tidak sedang ditekan
//   if (bacaTombol == LOW && !tombolDitekan) {
    
//     lampuNyala = !lampuNyala; // Membalik status: jika true jadi false, jika false jadi true
    
//     // Update kondisi lampu berdasarkan status terbaru
//     if (lampuNyala) {
//       digitalWrite(pinLED1, HIGH);
//       digitalWrite(pinLED2, HIGH);
//       digitalWrite(pinLED3, HIGH);
//     } else {
//       digitalWrite(pinLED1, LOW);
//       digitalWrite(pinLED2, LOW);
//       digitalWrite(pinLED3, LOW);
//     }

//     tombolDitekan = true; // Tandai bahwa tombol sedang ditahan
//     delay(50);            // Debounce: jeda kecil agar sinyal tombol stabil
//   }

//   // Jika tombol dilepas, reset status tombolDitekan
//   if (bacaTombol == HIGH) {
//     tombolDitekan = false;
//   }
// }