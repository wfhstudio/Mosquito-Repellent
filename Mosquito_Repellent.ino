int speaker1 = 7;
int frequency1 = 31000;
int speaker2 = 12;
int frequency2 = 31000;

int LEDBlue = 3;
int LEDRed = 4;

void setup() {

  Serial.begin(9600);
  Serial.println("Starting Mosquito Repellent");

  pinMode(speaker1, OUTPUT);
  pinMode(speaker2, OUTPUT);
  pinMode(LEDBlue, OUTPUT);
  pinMode(LEDRed, OUTPUT);
}

void loop() {
  tone(speaker1, frequency1, 1000);
  tone(speaker2, frequency2, 1000);
 digitalWrite(LEDBlue, HIGH);
 delay(80);
 digitalWrite(LEDBlue, LOW);
 delay(100);

 digitalWrite(LEDRed, HIGH);
 delay(20);
 digitalWrite(LEDRed, LOW);
 delay(20);

 digitalWrite(LEDRed, HIGH);
 delay(20);
 digitalWrite(LEDRed, LOW);
 delay(20);

}
