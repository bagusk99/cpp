#include <iostream>
using namespace std;

int main() {
    // inisialisasi variable agar bisa digunakan
    int angka1, angka2, jumlah;

    // menampilkan pesan ke user
    cout << "masukan angka pertama: ";
    // menyimpan inputan user ke variable
    cin >> angka1;
    // menampilkan pesan ke user
    cout << "masukan angka ke dua: ";
    // menyimpan inputan user ke variable
    cin >> angka2;

    // melakukan penjumlahan yang dimasukan ke variable jumlah
    jumlah = angka1 + angka2;

    // menampilkan pesan ke user dengan variable
    cout << "jumlah dari angka pertama dan angka kedua adalah: " << jumlah;

    // ini wajib ada
    return 0;
}