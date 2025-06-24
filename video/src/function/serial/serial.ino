void setup() {
    Serial.begin(9600);
    Serial.println("Enter a word and press Enter:");
}

void loop() {
    if (Serial.available()) {
        // Read until newline / enter
        String input = Serial.readStringUntil('\n');
        Serial.print("You entered: ");
        Serial.println(input);
    }
}