// gunakan module  ULN2003AN
// kabel power ke 5v dan GRD
// kabel lain bisa ke 8,9,10,11
// kalau bisa gunakan power eksternal 
#include <Stepper.h>

// Jumlah langkah per putaran internal untuk 28BYJ-48 adalah 2048
const int stepsPerRevolution = 2048*2;

// Inisialisasi library pada pin 8, 10, 9, 11 (Urutan ini penting untuk ULN2003)
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Atur kecepatan motor (RPM)
  myStepper.setSpeed(5); // 10-15 RPM adalah kecepatan stabil untuk motor ini
  Serial.begin(9600);
}

void loop() {
  // Putar searah jarum jam
  Serial.println("Memutar searah jarum jam...");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Putar berlawanan arah jarum jam
  Serial.println("Memutar balik...");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}