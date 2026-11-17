void setup() {
  Serial.begin(115200);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  Serial.println("");
  Serial.println("Hello, XIAO ESP32-C3!");
  Serial.println("Welcome to Wokwi :-)");
}

void loop() {
  Serial.println("Red");
  digitalWrite(D2, HIGH);
  delay(500);
  digitalWrite(D2, LOW);

  Serial.println("Green");
  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);

  Serial.println("Blue");
  digitalWrite(D4, HIGH);
  delay(500);
  digitalWrite(D4, LOW);
}
