#define LED_PIN 2  // Pin GPIO untuk LED (bisa disesuaikan)

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Atur pin sebagai output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Nyalakan LED
  delay(1000);                 // Tunggu 1 detik
  digitalWrite(LED_BUILTIN, LOW);   // Matikan LED
  delay(1000);                 // Tunggu 1 detik
}