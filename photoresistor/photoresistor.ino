void setup() {
  // put your setup code here, to run once:
pinMode(23, INPUT);
Serial.begin(115200);
pinMode(22, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(23));                                                                                                                                                                                                                                                                                                                                                                                                                                                
if(digitalRead(23)==HIGH){
  digitalWrite(22, HIGH);
  Serial.println("on");
}
else{
  digitalWrite(22, LOW);
  Serial.println("off");
}
}
