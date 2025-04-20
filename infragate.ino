#include <Servo.h>

const int trigPin = 9;
const int echoPin = 8;
const int ledMerah = 7;
const int ledHijau = 6;
const int irSensor = 5;
const int servoPin = 3;

Servo palang;
long duration;
int distance;
bool parkirIsi = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledMerah, OUTPUT);
  pinMode(ledHijau, OUTPUT);
  pinMode(irSensor, INPUT);
  palang.attach(servoPin);
  
  Serial.begin(9600);  // Inisialisasi komunikasi serial
}

void loop() {
  // Menghitung jarak dengan Ultrasonic
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // Menampilkan jarak ke Serial Monitor
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Logika LED Indikator
  if (distance < 5) {  // Mengatur threshold ke 2 cm
    digitalWrite(ledMerah, HIGH);
    digitalWrite(ledHijau, LOW);
    parkirIsi = true;
  } else {
    digitalWrite(ledMerah, LOW);
    digitalWrite(ledHijau, HIGH);
    parkirIsi = false;
  }

  // Logika Palang Otomatis (Infrared)
  if (digitalRead(irSensor) == LOW) { // LOW = Objek terdeteksi
    if (!parkirIsi) {
      palang.write(90); // Buka palang
      delay(1500);
      palang.write(0); // Tutup palang
    }
  }

  delay(200);  // Delay sedikit untuk menghindari pembacaan terlalu cepat
}
