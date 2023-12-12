#include<iostream>
#include<stdlib.h>

using namespace std;

int algoritmaBiasa(int bil1, int bil2);

int main(int argc, const char** argv) {
    if(argc == 1) {
        cout << "Error: Masukkan parameter angka" << endl;
        cout << "Usage: <program> <bil1> <bil2>";

        return 1;
    }

    int bil1 = atoi(argv[1]);
    int bil2 = atoi(argv[2]);

    int hasil = algoritmaBiasa(bil1, bil2);
    cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah: " << hasil;

    return 0;
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