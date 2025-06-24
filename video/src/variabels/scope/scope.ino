/*
    Arduino - Variabel Scope (Lingkup Variabel)
    -------------------------------------------
    Program ini mendemonstrasikan perbedaan antara variabel global dan lokal,
    serta bagaimana scope mempengaruhi akses variabel di dalam fungsi.
*/

// Variabel global (dapat diakses dari seluruh bagian program)
int globalVar = 10;

void setup() {
    Serial.begin(9600);

    Serial.println("=== Contoh Variabel Global ===");
    Serial.print("globalVar di setup(): ");
    Serial.println(globalVar);

    // Memanggil fungsi yang menggunakan variabel lokal dan global
    fungsiA();
    fungsiB();

    Serial.println("=== Scope di Loop ===");
}

void loop() {
    // Variabel lokal di dalam loop()
    int localLoopVar = 30;

    Serial.print("globalVar di loop(): ");
    Serial.println(globalVar);

    Serial.print("localLoopVar di loop(): ");
    Serial.println(localLoopVar);

    // Mengubah nilai globalVar
    globalVar++;

    delay(2000); // Tunggu 2 detik
}

void fungsiA() {
    // Variabel lokal hanya berlaku di fungsiA
    int localA = 20;

    Serial.println("--- Di dalam fungsiA() ---");
    Serial.print("globalVar di fungsiA(): ");
    Serial.println(globalVar);

    Serial.print("localA di fungsiA(): ");
    Serial.println(localA);

    // Mengubah nilai globalVar
    globalVar = 50;
}

void fungsiB() {
    Serial.println("--- Di dalam fungsiB() ---");
    Serial.print("globalVar di fungsiB(): ");
    Serial.println(globalVar);

    // Variabel lokal dengan nama sama di scope berbeda
    int globalVar = 99; // Ini variabel lokal, bukan globalVar
    Serial.print("globalVar lokal di fungsiB(): ");
    Serial.println(globalVar);
}