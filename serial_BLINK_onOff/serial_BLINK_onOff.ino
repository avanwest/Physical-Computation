
int led = 13;


void setup() {

  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.flush();

}

void loop() {

  String command = "";

  while (Serial.available() > 0) {
    command += (char) Serial.read();
    delay(5);
  }
  if (command == "on") {
    digitalWrite(led, HIGH);
    Serial.println("Light is on");
  }
  else if (command == "off") {
    digitalWrite(led, LOW);
    Serial.println("Light is off");
  }

}
