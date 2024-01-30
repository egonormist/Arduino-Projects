#include <Servo.h>

static const int servoPin = 4;

Servo servo1;

void setup() {
    Serial.begin(115200);
    servo1.attach(servoPin);
}

void loop() {
  servo1.write(30);//tells motor to rotate at this angle
  delay(50);
  servo1.write(100);
  delay(50);
  servo1.write(180);
  delay(50);

    // for(int posDegrees = 0; posDegrees <= 180; posDegrees++) {
    //     servo1.write(posDegrees);
    //     Serial.println(posDegrees);
    //     delay(20);
    // }

    // for(int posDegrees = 180; posDegrees >= 0; posDegrees--) {
    //     servo1.write(posDegrees);
    //     Serial.println(posDegrees);
    //     delay(20);
    // }
}