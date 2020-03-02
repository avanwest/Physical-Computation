
int switch_button = 5;
int relay = 7;
int leftEye = 11;
int rightEye = 10;
int mouth = 8;
//int status = false;


void setup() {

  Serial.begin(9600);

  pinMode(switch_button, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(mouth, OUTPUT);
  pinMode(leftEye, OUTPUT);
  pinMode(rightEye, OUTPUT);

}

void loop() {

  Serial.println(digitalRead(switch_button));
  
  if (digitalRead(switch_button) == HIGH) {
     digitalWrite(relay, HIGH);
     digitalWrite(rightEye, HIGH);
     digitalWrite(leftEye, HIGH);
     digitalWrite(mouth, HIGH);
  } else {
     digitalWrite(relay, LOW);
     digitalWrite(mouth, LOW);
     digitalWrite(leftEye, LOW);
     digitalWrite(rightEye, LOW);
   }
  }



