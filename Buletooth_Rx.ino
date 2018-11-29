String data = "";
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data=Serial.readString();
    Serial.print(data.toInt());
    digitalWrite(2,data.toInt());
  }
}
