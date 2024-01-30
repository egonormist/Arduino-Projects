#include <Servo.h>

void setup() {
  // put your setup code here, to run once:
pinMode(22, INPUT);
Serial.begin(115200);
pinMode(23, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(23,digitalRead(22));
Serial.println(digitalRead(22));
delay(1000);
}
