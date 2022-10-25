//https://wokwi.com/projects/345890622174921300
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int num = analogRead(A0);
  digitalWrite(13, HIGH);
  delay(1025-num);
  digitalWrite(13, LOW);
  delay(110);
}
