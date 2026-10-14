const int greenLed = 3;
const int yellowLed = 5;
const int redLed = 7;
const int time = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(time);

  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(time/5);

  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, HIGH);
  delay(time);
}