void setup() {
  // Initialize all pins as output
  for (int pin = 2; pin <= 13; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Sequence for Signal 1 (Green ON, Red ON for others)
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(5000); // Keep green ON for 5 seconds

  // Signal 1 Yellow ON
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(2000); // Yellow ON for 2 seconds
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);

  // Sequence for Signal 2 (Green ON, Red ON for others)
  digitalWrite(7, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(5000);

  // Signal 2 Yellow ON
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);

  // Sequence for Signal 3 (Green ON, Red ON for others)
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(13, HIGH);
  delay(5000);

  // Signal 3 Yellow ON
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(2000);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);

  // Sequence for Signal 4 (Green ON, Red ON for others)
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay(5000);

  // Signal 4 Yellow ON
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
}
