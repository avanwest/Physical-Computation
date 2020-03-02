#include <Servo.h>

Servo servoMotor;
int servoPin = 9;

void setup() {
  Serial.begin(9600);
  servoMotor.attach(servoPin);
  
}

void loop() {
  int analogValue = analogRead(A0);
  int servoAngle = map(analogValue, 0, 1023, 0, 179);
  servoMotor.write(servoAngle);
  Serial.println(servoAngle);

  

}
