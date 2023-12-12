#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Deklarasi fungsi
void uji_bil_genap_ganjil();
void print_ganjil();
void print_genap();

main() {
    // Deklarasi variable dan array
    int pilihan;
    char restart;
    string mahasiswa[3];
    string data[3] = {"Nama", "NIM", "Kelas"};

    // Request user data
    for(int i = 0; i <= 2; i++) {
        cout << "Masukan " << data[i] << " anda: "; 
        getline(cin, mahasiswa[i]);
    }

    // Main program
    do {

        system("cls");
        // Perulangan digunakan untuk mengakses array data mahasiswa
        for(int i = 0; i <= 2; i++) {
            cout << data[i] << " : " << mahasiswa[i] << endl;
        }
        cout << endl;

        // Menu utama
        cout << "----- Program Uji Bilangan Ganjil Genap -----" << endl;
        cout << "=============================================" << endl;
        cout << "1. Menguji Bilangan Ganjil atau Genap" << endl;
        cout << "2. Menampilkan N Bilangan Ganjil" << endl;
        cout << "3. Menampilkan N Bilangan Genap" << endl;
        cout << "9. Keluar Program" << endl;
        cout << "Pilihan: "; cin >> pilihan;

        // Kondisi tergantung pilihan user
        if(pilihan == 1) {
            uji_bil_genap_ganjil();
        } else if (pilihan == 2) {
            print_ganjil();
        } else if (pilihan == 3) {
            print_genap();
        } else if (pilihan == 9) {
            cout << "Keluar Program..." << endl;
            break;
        } else {
            cout << "Menu tidak tersedia..." << endl;
        }

        cout << endl;
        cout << "Ingin memilih menu lain? (y/n) "; cin >> restart;
        cout << endl;
    } while (restart != 'n'); {
        cout << "Terimakasih..." << endl;
    }
}

// Definisi Fungsi - Uji bilangan desimal genap atau ganjil
void uji_bil_genap_ganjil() {
    int bilangan;

    cout << "Masukan bilangan desimal: "; cin >> bilangan;

    // Cek apakah ganjil atau genap
    if(bilangan % 2 == 0) {
        cout << "Bilangan " << bilangan << " merupakan bilangan genap" << endl;
    } else {
        cout << "Bilangan " << bilangan << " merupakan bilangan ganjil" << endl;
    }
}

// Definisi Fungsi - Print bilangan ganjil sesuai dengan jumlah angka yang di inginkan
void print_ganjil() {
    int jumlah;

    cout << "Masukan berapa jumlah angka yang akan di tampilkan : "; cin >> jumlah;

    // Cek berapa banyak angka yang akan di tampilkan
    for(int i = 1; i <= jumlah*2; i+=2) {
        cout << i << " ";
    }
    cout << endl;
}

// Definisi Fungsi - Print bilangan genap sesuai dengan jumlah angka yang di inginkan
void print_genap() {
    int jumlah;
    
    cout << "Masukan berapa jumlah angka yang akan di tampilkan : "; cin >> jumlah;

    // Cek berapa banyak angka yang akan di tampilkan
    for(int i = 0; i <= jumlah*2; i+=2) {
        cout << i << " ";
    }
    cout << endl;
}
