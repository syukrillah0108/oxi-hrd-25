void setup() {
    // kecepatan transfer data
    Serial.begin(9600);
}

void loop() {
    String pesan = Serial.readStringUntil("\n");
    Serial.print("Pesan di terima: ");
    Serial.println()
}