void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT); // Set pin A0 as input for analog reading
    // Arduino PWM Pins: 3, 5, 6, 9, 10, 11
    pinMode(3, OUTPUT); // Set pin 3 as output for PWM
}

void loop() {
    int sensorValue = analogRead(A0); // Read the value from the analog pin A0
    Serial.print("Analog value: ");
    Serial.println(sensorValue); // Print the analog value to the serial monitor
    // Map the analog value to a PWM range (0-255)
    int pwmValue = map(sensorValue, 0, 1023, 0, 255);
    Serial.print("Mapped PWM value: ");
    Serial.println(pwmValue); // Print the mapped PWM value
    analogWrite(3, pwmValue); // Write the PWM value to pin 3
    delay(100); // Delay for 100 milliseconds before the next reading
}