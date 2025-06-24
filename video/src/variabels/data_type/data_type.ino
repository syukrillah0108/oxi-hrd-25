/*
    Materi: Pengenalan Tipe Data pada Arduino

    Contoh penggunaan berbagai tipe data dasar di Arduino.
*/

void setup() {
    Serial.begin(9600);

    // Integer (bilangan bulat)
    int angka = 42;
    Serial.print("int: ");
    Serial.println(angka);

    // Unsigned Integer (bilangan bulat tanpa tanda)
    unsigned int angka_unsigned = 100;
    Serial.print("unsigned int: ");
    Serial.println(angka_unsigned);

    // Long (bilangan bulat panjang)
    long angka_long = 123456789;
    Serial.print("long: ");
    Serial.println(angka_long);

    // Unsigned Long
    unsigned long angka_ulong = 4000000000;
    Serial.print("unsigned long: ");
    Serial.println(angka_ulong);

    // Float (bilangan pecahan)
    float angka_float = 3.14159;
    Serial.print("float: ");
    Serial.println(angka_float, 5);

    // Double (di Arduino sama dengan float)
    double angka_double = 2.718281828;
    Serial.print("double: ");
    Serial.println(angka_double, 9);

    // Char (karakter tunggal)
    char karakter = 'A';
    Serial.print("char: ");
    Serial.println(karakter);

    // String (teks)
    String teks = "Hello, Arduino!";
    Serial.print("String: ");
    Serial.println(teks);

    // Boolean (true/false)
    bool status = true;
    Serial.print("bool: ");
    Serial.println(status);

    // Byte (8 bit unsigned)
    byte data_byte = 255;
    Serial.print("byte: ");
    Serial.println(data_byte);

    // Short (16 bit signed)
    short data_short = -32768;
    Serial.print("short: ");
    Serial.println(data_short);

    // Unsigned Short (16 bit unsigned)
    unsigned short data_ushort = 65535;
    Serial.print("unsigned short: ");
    Serial.println(data_ushort);
}

void loop() {
    // Tidak ada kode di loop
}