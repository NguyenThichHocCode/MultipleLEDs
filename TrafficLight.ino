int red = 13;
int yel = 12;
int gre = 11;
int delayTime = 500;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
  pinMode(gre, OUTPUT);
}

void loop() {
  // Turn all ON
  digitalWrite(red, HIGH);
  digitalWrite(yel, HIGH);
  digitalWrite(gre, HIGH);
  delay(delayTime);

  // Turn all OFF
  digitalWrite(red, LOW);
  digitalWrite(yel, LOW);
  digitalWrite(gre, LOW);
  delay(delayTime);
}
