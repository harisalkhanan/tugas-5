#include <iostream>
#include <string>
using namespace std;

// Deklarasi fungsi
int pokok(int jamKerja);
int lembur(int jamKerja);
int makan(int jamKerja);
int transport(int jamKerja);

int main() {
    string NIP, Nama;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan NIP: ";
    getline(cin, NIP);
    cout << "Masukkan Nama: ";
    getline(cin, Nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Hitung gaji
    int gajiPokok = pokok(jamKerja);
    int gajiLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Output hasil perhitungan
    cout << "\n--- Rincian Gaji ---" << endl;
    cout << "NIP         : " << NIP << endl;
    cout << "Nama        : " << Nama << endl;
    cout << "Gaji Pokok  : Rp " << gajiPokok << endl;
    cout << "Lembur      : Rp " << gajiLembur << endl;
    cout << "Uang Makan  : Rp " << uangMakan << endl;
    cout << "Transport   : Rp " << uangTransport << endl;

    return 0;
}

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    int gajiPerJam = 7500;
    if (jamKerja <= 8) {
        return jamKerja * gajiPerJam;
    } else {
        return 8 * gajiPerJam;  // Gaji pokok hanya untuk 8 jam pertama
    }
}

// Fungsi untuk menghitung lembur
int lembur(int jamKerja) {
    int gajiPerJam = 7500;
    if (jamKerja > 8) {
        int jamLembur = jamKerja - 8;
        return jamLembur * gajiPerJam * 1.5;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    } else {
        return 0;
    }
}

// Fungsi untuk menghitung uang transport
int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    } else {
        return 0;
    }
}
