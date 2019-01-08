void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
float data = analogRead(A0);
data = (data/1024.00) * 5;
String dataToSend = String(data);
Serial.println(dataToSend);
delay(300);
}
