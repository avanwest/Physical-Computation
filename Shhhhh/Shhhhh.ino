int rightEye = 10;
int mouth = 8;
int soundSensor = A0;
//int DO = 13;

#define BAUD_RATE 9600
#define SWITCH    2
#define RELAY     7
#define LEFT_EYE  11
#define SECOND    1000

void setup() {
  Serial.begin(BAUD_RATE);

  pinMode(RELAY, OUTPUT);
  pinMode(SWITCH, INPUT);
  pinMode(rightEye, OUTPUT);
  pinMode(LEFT_EYE, OUTPUT);
  pinMode(soundSensor, INPUT);
  pinMode(mouth, OUTPUT);


void loop() {
  // Serial.println(analogRead(soundSensor));
  // Serial.println(digitalRead(SWITCH));

  if ((HIGH == digitalRead(soundSensor)) || HIGH == (digitalRead(SWITCH))) {
  // if (digitalRead(soundSensor)) {
  // if (HIGH == digitalRead(SWITCH)) {
    digitalWrite(RELAY, HIGH);
    digitalWrite(SWITCH, HIGH);
    digitalWrite(rightEye, HIGH);
    digitalWrite(LEFT_EYE, HIGH);
    digitalWrite(mouth, HIGH);
    delay(2 * SECOND);
  } else {
    digitalWrite(RELAY, LOW);
    digitalWrite(SWITCH, LOW);
    digitalWrite(rightEye, LOW);
    digitalWrite(LEFT_EYE, LOW);
    digitalWrite(mouth, LOW);
  }
}

