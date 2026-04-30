// Pin untuk Sensor Ultrasonik
const int trigPin = 2;
const int echoPin = 3;

// Pin untuk LED (Tetap di pin PWM ~)
const int pinLED1 = 9;
const int pinLED2 = 10;
const int pinLED3 = 11;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // 1. Logika membaca jarak dari sensor ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long durasi = pulseIn(echoPin, HIGH);
  int jarak = durasi * 0.034 / 2;

  // 2. Batasi jarak (Contoh: 5cm sampai 30cm)
  // Jika jarak lebih dari 30cm, kita anggap 30cm saja agar LED tidak error
  // if (jarak > 30) jarak = 30;
  // if (jarak < 5)  jarak = 5;

  // 3. Mengubah Jarak menjadi Kecerahan (Map)
  // Jarak 5cm -> Kecerahan 255 (Paling Terang)
  // Jarak 30cm -> Kecerahan 0 (Mati)
  int kecerahan = map(jarak, 5, 30, 255, 0);

  // 4. Output ke LED
  analogWrite(pinLED1, kecerahan);
  analogWrite(pinLED2, kecerahan);
  analogWrite(pinLED3, kecerahan);

  // Pantau di Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(jarak);
  Serial.print(" cm | Kecerahan: ");
  Serial.println(kecerahan);

  delay(50); // Delay kecil agar transisi lebih halus
}