#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

bool is_prima_konsep1(int bil);
bool is_prima_konsep2(int bil);
void deret_prima(int konsep, int n);

main() {
	int response, n; // response = ngecek pilihan menu dari user, n = batas maksimal bilangan prima
	char conf; // conf = inputan user setelah selesai mendapatkan bilangan prima
	
	do {
		system("cls");
		cout << "----- Program Deret Bilangan Prima -----" << endl;
		cout << "========================================" << endl;
		cout << "1. Gunakan konsep 1" << endl;
		cout << "2. Gunakan konsep 2" << endl;
		cout << "9. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> response;
		
        // Control flow, break, continue
        // sekuensial, baris 15 > 16 > 17 > 18

		if(response == 1) {
			cout << "Masukan nilai n: ";
			cin >> n;
			deret_prima(1, n);
		} else if(response == 2) {
			cout << "Masukan nilai n: ";
			cin >> n;
			deret_prima(2, n);
		} else if(response == 9) {
			cout << "Keluar program..." << endl;
			break;
		} else {
			cout << "Pilihan tidak tersedia" << endl;
		}
		cout << endl;
		
		cout << "Apakah ingin memilih menu lain? (y/n) "; // y
		cin >> conf;
		cout << endl;
	} while(conf != 'n'); {
		cout << "Terimakasih..." << endl;
	}
	
	return 0;
}

bool is_prima_konsep1(int bil) { // is_prima_konsep1 = false, is_prima_konsep1 = true
    int i = 2;

    if(bil < 2)
        return false;
    else {
        int tanda = 0;
        while(i <= bil-1) { // i = 2, 2 <= 4-1
            if(bil % i == 0) {
                tanda = 1;
            }
            i++;
        }
        if(tanda == 1) {
            return false;
        } else {
            return true;
        }
    }
}

bool is_prima_konsep2(int bil) {
    int batas, X, tanda;

    if(bil < 2) {
        return false;
    } else {
        if(bil==2) {
            return true;
        } else {
            if(bil%2 == 0) {
                return false;
            } else {
                X = 3;
                batas = bil - 1;
                tanda = 0;
                while(tanda == 0 && X <= batas) {
                    if(bil%X == 0) {
                        tanda = 1;
                    }
                    X+=2;
                } if (tanda == 0) {
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
}

void deret_prima(int konsep, int n) { // Parameter 1 = 1 konsep, parameter 2 = 10 batas
	if (n < 2) {
        cout << "Tidak ada bilangan prima untuk n kurang dari 2." << endl;
        return;
    }
    cout << "Bilangan prima hingga " << n << ": ";

    for (int i = 2; i <= n; ++i) {
        // Jika (konsep = 1 dan is_prima_konsep1(i)) atau (konsep = 2 dan is_prima_konsep2(i))
        if ((konsep == 1 && is_prima_konsep1(i)) || (konsep == 2 && is_prima_konsep2(i))) {
            cout << i << " "; // 2 3 4, ... 10
        }
    }
    cout << endl;
}
