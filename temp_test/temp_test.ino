float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp = analogRead(A0);
  Serial.print("Voltage: ");Serial.print(temp);
  Serial.println();
  temp = temp * 0.48828125;
  Serial.print("Temperature: ");Serial.print(temp);Serial.print("*C");
  Serial.println();
  Serial.println();
  delay(10000);
}
