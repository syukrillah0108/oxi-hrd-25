/*
    Materi Arduino: Variabel dan Nilai Constants

    1. Variabel
    Variabel adalah tempat untuk menyimpan data yang nilainya dapat berubah selama program berjalan.
    Tipe data yang sering digunakan di Arduino:
        - int    : bilangan bulat (-32,768 sampai 32,767)
        - long   : bilangan bulat besar (-2,147,483,648 sampai 2,147,483,647)
        - float  : bilangan desimal (misal: 3.14)
        - char   : karakter tunggal (misal: 'A')
        - String : kumpulan karakter (misal: "Arduino")

    Contoh deklarasi variabel:
*/
int umur = 20;
float suhu = 36.5;
char huruf = 'A';
String nama = "Arduino";

/*
    2. Constants
    Constants adalah nilai tetap yang tidak dapat diubah selama program berjalan.
    Ada dua cara membuat constants di Arduino:
        a. Menggunakan kata kunci 'const'
        b. Menggunakan '#define'

    a. Menggunakan 'const'
*/
const int LED_PIN = 13;
const float PI = 3.14159;

/*
    b. Menggunakan '#define'
*/
#define BAUD_RATE 9600
#define JUMLAH_SENSOR 4

/*
    Perbedaan:
        - 'const' memiliki tipe data, lebih aman dan direkomendasikan.
        - '#define' hanya mengganti teks sebelum kompilasi, tidak memiliki tipe data.

    Contoh penggunaan variabel dan constants:
*/

void setup() {
    Serial.begin(BAUD_RATE);
    pinMode(LED_PIN, OUTPUT);

    Serial.print("Nama: ");
    Serial.println(nama);
    Serial.print("Umur: ");
    Serial.println(umur);
    Serial.print("Suhu: ");
    Serial.println(suhu);
    Serial.print("Nilai PI: ");
    Serial.println(PI);
    Serial.print("Jumlah Sensor: ");
    Serial.println(JUMLAH_SENSOR);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
}

/*
    Kesimpulan:
    - Gunakan variabel untuk data yang nilainya bisa berubah.
    - Gunakan constants untuk nilai tetap yang tidak boleh diubah.
    - Gunakan 'const' untuk constants bertipe data, '#define' untuk nilai tetap sederhana.
*/