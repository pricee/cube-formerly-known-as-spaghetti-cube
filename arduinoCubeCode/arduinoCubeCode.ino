void setup() {
  // put your setup code here, to run once:
 Serial.begin(140001);
}

void loop() {
  // gyro 1
  Serial.print(analogRead(A0));
  Serial.print(' ');
  Serial.print(analogRead(A1));
  Serial.print(' ');
  Serial.print(analogRead(A2));
  Serial.print(' ');

  // gyro 2
  Serial.print(analogRead(A3));
  Serial.print(' ');
  Serial.print(analogRead(A4));
  Serial.print(' ');
  Serial.print(analogRead(A5));
  Serial.print(' ');

  // gyro 3
  Serial.print(analogRead(A6));
  Serial.print(' ');
  Serial.print(analogRead(A7));
  Serial.print(' ');
  Serial.print(analogRead(A8));
  Serial.println();

  delay(500);
}
