uint32_t count = 0;

void setup() {
  Serial.begin(9600);
  // Wait for Serial Monitor to open
  while (!Serial) {
    delay(10);
  }
}

void loop() {
  Serial.print("Count: ");
  Serial.println(count);

  if (Serial.available() > 0) {
    String input = Serial.readString();
    Serial.print("Received: ");
    Serial.println(input);
  }

  count++;
  delay(1000);
}
