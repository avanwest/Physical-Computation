void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();
    if (input == 'G') {
      digitalWrite(10, HIGH);
      digitalWrite(9, LOW);
      digitalWrite(11, LOW);
      delay(5);
    }
    if (input == 'R') {
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      delay(5);
    }
    if (input == 'Y') {
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(9, LOW);
      delay(5);
  }
 }
}

