#include <iostream>

using namespace std;

// Deklarasi Fungsi
int algoritmaBiasa(int bil1, int bil2);
int algoritmaEuclidean(int bil1, int bil2);

int main() {
	// Deklarasi Variable
    int bil1, bil2, hasil, response;
    char conf;

	// Perulangan untuk program utama
    do {
        cout << "Masukan bilangan pertama: ";
        cin >> bil1;
        cout << "Masukan bilangan kedua: ";
        cin >> bil2;
        cout << "=============================" << endl;
        cout << "1. Menggunakan Algoritma biasa" << endl;
        cout << "2. Menggunakan Algoritma Euclidean" << endl;
        cout << "Pilihan: ";
        cin >> response;

		// Jika user memilih 1, jalankan fungsi algoritmaBiasa()
        if(response == 1) {
            hasil = algoritmaBiasa(bil1, bil2);
            cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah: " << hasil;
        } else if(response == 2) { // Jika user memilih 2, jalankan fungsi algoritmaEuclidean()
            hasil = algoritmaEuclidean(bil1, bil2);
            cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah: " << hasil;
        } else {
            cout << "Pilihan tidak tersedia" << endl;
        }

        cout << endl;
        cout << "Apakah ingin mengulang menu? (y/n) ";
        cin >> conf;
    } while(conf != 'n'); {
        cout << "Keluar program..." << endl;
    }
}

int algoritmaBiasa(int bil1, int bil2) {
    int x, sisa1, sisa2, cnt, hasil;

    if(bil1 == bil2) {
        hasil = bil1;
    } if(bil1 > bil2) {
        x = bil1;
        bil1 = bil2;
        bil2 = x;
    }

    cnt = bil1; 
    hasil = 1;

    while(cnt > 2) { 
        sisa1 = bil1 % cnt; 
        sisa2 = bil2 % cnt;
        if(sisa1 == 0 && sisa2 == 0) {
            hasil = cnt;
            cnt = 2;
        }
        cnt--;
    }
    return hasil;
}

int algoritmaEuclidean(int bil1, int bil2) {
    if(bil2 == 0) {
        return bil1;
    } else {
        return algoritmaEuclidean(bil2, bil1 % bil2);
    }
}
