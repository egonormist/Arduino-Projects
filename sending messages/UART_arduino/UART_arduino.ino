void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("This is working");
  digitalWrite(2, HIGH);
  delay(1000);

}
