# Tentang

UKM (Unit Kegiatan Mahasiswa) Oxigen Universitas Teknologi Bandung

# Jalur Materi

### **Tahap 1: Dasar Elektronika**

1. **Memahami Komponen Elektronik:**
   * Resistor, kapasitor, transistor, dioda, IC.
   * Cara membaca kode warna resistor.
   * Penggunaan multimeter.
2. **Rangkaian Dasar:**
   * Rangkaian seri dan paralel.
   * Mengukur tegangan, arus, dan resistansi.
3. **Soldering & Breadboarding:**
   * Teknik menyolder yang benar.
   * Membuat rangkaian sederhana di breadboard.
4. **Sumber Daya:**
   * Memahami jenis baterai, adaptor, dan power bank.
   * Regulator tegangan (LM7805, LM317).

### **Tahap 2: Mikrokontroler Dasar**

1. **Memilih Mikrokontroler:**
   * Arduino (Uno, Nano, atau Mega).
   * ESP8266 atau ESP32 untuk IoT dasar.
2. **Pemrograman Mikrokontroler:**
   * Blink LED (program pertama).
   * Membaca input dari tombol/sensor.
   * Mengontrol output seperti LED, buzzer, relay.
3. **Sensor dan Aktuator:**
   * Sensor suhu (DHT11, DS18B20).
   * Sensor jarak (Ultrasonic HC-SR04).
   * Motor (servo, DC motor, stepper).
4. **Komunikasi Data:**
   * UART, I2C, SPI.
   * Menghubungkan perangkat seperti display (LCD, OLED).

### **Tahap 3: SBC (Single Board Computer)**

1. **Pengenalan SBC:**
   * Raspberry Pi atau Banana Pi.
   * Install OS (Raspberry Pi OS/Armbian).
2. **Pemrograman di SBC:**
   * Dasar Python untuk hardware.
   * Mengakses GPIO menggunakan library (RPi.GPIO, pyA20).
3. **Proyek Hardware Sederhana:**
   * Mengontrol LED dan relay.
   * Membaca data sensor dengan Python.

### **Tahap 4: IoT dan Jaringan**

1. **Konsep IoT:**
   * Pengantar IoT dan aplikasi.
   * Protokol IoT (MQTT, HTTP).
2. **Membangun Proyek IoT:**
   * Menggunakan ESP8266/ESP32 untuk mengirim data sensor ke cloud.
   * Broker MQTT (Mosquitto di localhost).
   * Menampilkan data di dashboard (Blynk, Node-RED).
3. **Integrasi SBC dengan IoT:**
   * Menggunakan SBC sebagai server MQTT.
   * Membuat database sederhana dengan SQLite untuk menyimpan data IoT.

### **Tahap 5: Sistem AI Terintegrasi**

1. **Pengenalan AI untuk IoT:**
   * Konsep Machine Learning.
   * Aplikasi AI dalam IoT (deteksi anomali, prediksi).
2. **Platform AI:**
   * Menggunakan TensorFlow Lite atau Edge Impulse.
   * Melatih model sederhana untuk klasifikasi data.
3. **Implementasi AI di Mikrokontroler/SBC:**
   * Deploy model AI ke ESP32 atau Raspberry Pi.
   * Proyek contoh: Monitoring suhu pintar, deteksi gerakan dengan kamera.

### **Tahap 6: Proyek Lanjutan**

1. **Proyek Smart Home:**
   * Mengontrol lampu, kipas, atau pintu dengan aplikasi.
   * Integrasi dengan asisten suara (Google Assistant, Alexa).
2. **Proyek Smart Monitoring:**
   * Monitoring ketinggian air dengan sensor ultrasonik dan notifikasi.
   * Sistem deteksi kebocoran gas.
3. **Proyek AIoT:**
   * Kamera cerdas untuk deteksi objek.
   * Sistem pemeliharaan prediktif untuk alat elektronik.

### **Tahap 7: Optimasi dan Scaling**

1. **Optimasi Hardware:**
   * Memilih sensor dan aktuator yang hemat daya.
   * Menambah sumber energi alternatif (solar panel).
2. **Scaling Sistem:**
   * Memanfaatkan layanan cloud seperti AWS IoT, Google IoT Core.
   * Sistem multi-node dengan beberapa perangkat IoT.
3. **Keamanan IoT:**
   * Enkripsi komunikasi data (TLS/SSL).
   * Pengaturan autentikasi dan otorisasi pada sistem IoT.
