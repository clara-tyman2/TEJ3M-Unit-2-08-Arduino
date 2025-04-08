/*
* Created by: Clara T
* Created on: April 2025
* This program uses a porentiometer to move a servo motor
*/

#include <Servo.h>

Servo myservo;
  
int potpin = 0;
int val;

void setup() {
  myservo.attach(9);
}

void loop() {
  val = analogRead(potpin);
  val = val / 6;
  myservo.write(val);
  delay(15);
}
