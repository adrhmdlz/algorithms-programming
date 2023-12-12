#include<iostream>
#include<stdlib.h>

using namespace std;

int algoritmaEuclidean(int bil1, int bil2);

int main(int argc, char const *argv[]) {
    if(argc == 1) {
        cout << "Error: Masukkan parameter angka" << endl;
        cout << "Usage: <program> <bil1> <bil2>";

        return 1;
    }

    int bil1 = atoi(argv[1]);
    int bil2 = atoi(argv[2]);

    int hasil = algoritmaEuclidean(bil1, bil2);
    cout << "FPB dari " << bil1 << " dan " << bil2 << " adalah: " << hasil;

    return 0;
}

int algoritmaEuclidean(int bil1, int bil2) {
    if(bil2 == 0) {
        return bil1;
    } else {
        return algoritmaEuclidean(bil2, bil1 % bil2);
    }
}