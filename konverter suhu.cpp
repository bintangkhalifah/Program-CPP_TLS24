#include <iostream>  // untuk input/output di terminal
#include <cmath>     // untuk fungsi matematika dasar seperti pembulatan
#include <iomanip>   // untuk mengatur presisi angka desimal

using namespace std;

// Fungsi untuk konversi Celcius ke Fahrenheit
double celciusToFahrenheit(double celcius) {
    return (celcius * 9.0 / 5.0) + 32;
}

// Fungsi untuk konversi Celcius ke Kelvin
double celciusToKelvin(double celcius) {
    return celcius + 273.15;
}

int main() {
    double celcius;

    // Input suhu dalam Celcius
    cout << "Masukkan suhu dalam Celcius: ";
    cin >> celcius;

    // Menggunakan conditional statement untuk mengecek input yang valid
    if (cin.fail()) {
        cout << "Input tidak valid! Masukkan angka yang benar." << endl;
        return 1; // Keluar program jika input tidak valid
    }

    // Proses konversi ke Fahrenheit dan Kelvin
    double fahrenheit = celciusToFahrenheit(celcius);
    double kelvin = celciusToKelvin(celcius);

    // Output hasil konversi
    cout << fixed << setprecision(2); // Mengatur output dengan 2 angka desimal
    cout << "Hasil konversi:" << endl;
    cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;

    return 0;
}
