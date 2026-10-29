const int ledRed = 9; //give pin 9 the name
const int ledBlue = 10;
int brightnessRed = 255;
int brightnessBlue = 0;

int fadeAmount = 20;
int fadeAmount2 = -20;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  Serial.begin(9600);
  Serial.print(brightnessRed);
  Serial.println(brightnessBlue);
}

void loop() {
  analogWrite(brightnessRed, brightness);
  analogWrite(brightnessBlue, brightness);
  brightness = brightness + fadeAmount;
  if(brightness = 255){
    brightness -= 5;
  }
  if(brightnessRed >= 240 || brightnessRed <= 0)
  {
    fadeAmount = -fadeAmount;

    if(brightnessBlue >= 240 || brightnessBlue <= 0)
    {
      fadeAmount2 = -fadeAmount2;
    }
  }

  Serial.print("brightness: ");
  Serial.println(brightnessRed);
  Serial.print("brightnessBlue: ")
  Serial.println(brightnessBlue);

}

