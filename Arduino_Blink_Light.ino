const int FIRST_PIN = 12;
const int SECOND_PIN = 8;
const unsigned long BLINK_UNTIL_DELAY_MS = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(FIRST_PIN, OUTPUT);
  pinMode(SECOND_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnOn();

  delay(BLINK_UNTIL_DELAY_MS);

  turnOff();

  delay(BLINK_UNTIL_DELAY_MS);
}

void turnOff() {
  digitalWrite(FIRST_PIN, LOW);
  digitalWrite(SECOND_PIN, LOW);
}

void turnOn() {
  digitalWrite(FIRST_PIN, HIGH);
  digitalWrite(SECOND_PIN, HIGH);
}
