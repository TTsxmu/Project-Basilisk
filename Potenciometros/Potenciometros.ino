//Control por potenciometros
//Para una mayor precisión se podria limitar por software el rango de movimiento para evitar colisiones 

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

int potPin1 = A0; 
int potPin2 = A1; 
int potPin3 = A2; 

int val1; 
int val2; 
int val3; 

void setup() {
  servo1.attach(5); 
  servo2.attach(6); 
  servo3.attach(7); 
}

void loop() {
  val1 = analogRead(potPin1); 
  val1 = map(val1, 0, 1023, 0, 180); 
  servo1.write(val1); 

  val2 = analogRead(potPin2); 
  val2 = map(val2, 0, 1023, 0, 180); 
  servo2.write(val2); 

  val3 = analogRead(potPin3); 
  val3 = map(val3, 0, 1023, 0, 180); 
  servo3.write(val3); 

  delay(15); 
}
