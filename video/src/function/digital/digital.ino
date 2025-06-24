void setup(){
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    pinMode(12, INPUT);

}

void loop(){
    bool buttonState = digitalRead(12); // Read the state of pin 12
    if (buttonState == HIGH) { // If the button is pressed
        Serial.println("Button pressed!"); // Print message to serial monitor
        digitalWrite(13, HIGH); // Turn on LED on pin 13
    } else {
        digitalWrite(13, LOW); // Turn off LED on pin 13
    }
}