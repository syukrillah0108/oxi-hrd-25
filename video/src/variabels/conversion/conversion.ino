/*
    Materi Arduino: Konversi Tipe Data

    Konversi tipe data adalah proses mengubah satu tipe data ke tipe data lain.
    Di Arduino (C/C++), konversi tipe data penting untuk memastikan data sesuai dengan kebutuhan program.

    1. Konversi Otomatis (Implicit Conversion)
         Arduino secara otomatis mengkonversi tipe data jika diperlukan.
*/

void setup() {
    Serial.begin(9600);

    // Contoh konversi otomatis
    int a = 10;
    float b = a; // int ke float
    Serial.print("int ke float: ");
    Serial.println(b);

    // 2. Konversi Eksplisit (Explicit Conversion / Casting)
    float c = 9.75;
    int d = (int)c; // float ke int (casting)
    Serial.print("float ke int: ");
    Serial.println(d);

    // 3. Fungsi Konversi String
    int angka = 123;
    String strAngka = String(angka); // int ke String
    Serial.print("int ke String: ");
    Serial.println(strAngka);

    String strNilai = "456";
    int nilai = strNilai.toInt(); // String ke int
    Serial.print("String ke int: ");
    Serial.println(nilai);

    // 4. Konversi char ke int dan sebaliknya
    char karakter = 'A';
    int kodeAscii = (int)karakter;
    Serial.print("char ke int (ASCII): ");
    Serial.println(kodeAscii);

    int angkaAscii = 66;
    char huruf = (char)angkaAscii;
    Serial.print("int ke char: ");
    Serial.println(huruf);

    // 5. Konversi long, unsigned, dan tipe data lain
    long dataLong = 100000L;
    int dataInt = (int)dataLong; // long ke int
    Serial.print("long ke int: ");
    Serial.println(dataInt);

    unsigned int dataUnsigned = 65535;
    int dataSigned = (int)dataUnsigned; // unsigned ke signed
    Serial.print("unsigned ke int: ");
    Serial.println(dataSigned);

    // 6. Konversi float ke String
    float pi = 3.14159;
    String strPi = String(pi, 3); // 3 digit desimal
    Serial.print("float ke String: ");
    Serial.println(strPi);

    // 7. Konversi String ke float
    String strFloat = "2.718";
    float nilaiFloat = strFloat.toFloat();
    Serial.print("String ke float: ");
    Serial.println(nilaiFloat);
}

void loop() {
    // Tidak ada kode di loop
}