void setup() {
  pinMode(16, OUTPUT);
}

void loop() {
  digitalWrite(16, HIGH);
  delay(250);
  digitalWrite(16, LOW);
  delay(250);
}

