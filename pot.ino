void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  analogWrite(11, analogRead(A0)/4);
  analogWrite(10, analogRead(A1)/4);
  analogWrite(9, analogRead(A2)/4);

  Serial.print("R: ");
  Serial.print(analogRead(A0)/4);
  Serial.print(", ");
  Serial.print("G: ");
  Serial.print(analogRead(A1)/4);
  Serial.print(", ");
  Serial.print("B: ");
  Serial.println(analogRead(A2)/4);
  delay(500);
}
