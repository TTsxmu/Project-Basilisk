#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int potPin1 = A0; // Pin del primer potenciómetro
int potPin2 = A1; // Pin del segundo potenciómetro
int potPin3 = A2; // Pin del tercer potenciómetro

int val1; // Variable para almacenar el valor del primer potenciómetro
int val2; // Variable para almacenar el valor del segundo potenciómetro
int val3; // Variable para almacenar el valor del tercer potenciómetro

void setup() {
  servo1.attach(5); // Pin de control del primer servo
  servo2.attach(6); // Pin de control del segundo servo
  servo3.attach(7); // Pin de control del tercer servo
}

void loop() {
  val1 = analogRead(potPin1); // Leer el valor del primer potenciómetro
  val1 = map(val1, 0, 1023, 0, 180); // Mapear el valor a un rango de 0 a 180 grados
  servo1.write(val1); // Mover el primer servo según el valor del potenciómetro

  val2 = analogRead(potPin2); // Leer el valor del segundo potenciómetro
  val2 = map(val2, 0, 1023, 0, 180); // Mapear el valor a un rango de 0 a 180 grados
  servo2.write(val2); // Mover el segundo servo según el valor del potenciómetro

  val3 = analogRead(potPin3); // Leer el valor del tercer potenciómetro
  val3 = map(val3, 0, 1023, 0, 180); // Mapear el valor a un rango de 0 a 180 grados
  servo3.write(val3); // Mover el tercer servo según el valor del potenciómetro

  delay(15); // Pequeña pausa para estabilidad
}
