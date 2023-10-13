#include<iostream>
#include<cmath>

using namespace std;

string cekSegitiga(int sisiA, int sisiB, int sisiC);

main() {
	// Deklarasi variable
	int sisiA, sisiB, sisiC;
	
	// Input panjang setiap sisi	
	cout << "Masukan panjang sisi A: "; cin >> sisiA;
	cout << "Masukan panjang sisi B: "; cin >> sisiB;
	cout << "Masukan panjang sisi C: "; cin >> sisiC;
	
	// Print hasil cek segitiga
	cout << "\nSegitiga tersebut adalah " << cekSegitiga(sisiA, sisiB, sisiC);

	return 0;
}

string cekSegitiga(int sisiA, int sisiB, int sisiC) {
	string segitiga;
	
	if(sisiA == sisiB) {
		if(sisiB == sisiC) {
			return segitiga = "Segitiga Sama Sisi";
		} else {
			if(sisiA == sisiB) {
				return segitiga = "Segitiga Sama Kaki";
			} else {
				if(pow(sisiC, 2) == pow(sisiA, 2) + pow(sisiB, 2) || 
				pow(sisiB, 2) == pow(sisiA, 2) + pow(sisiC, 2) ||
				pow(sisiA, 2) == pow(sisiC, 2) + pow(sisiB, 2)) {
					return segitiga = "Segitiga Siku-siku";
				} else {
					return segitiga = "Segitiga Sembarang";
				}
			}
		}
	} else {
		if(sisiA == sisiC) {
			return segitiga = "Segitiga Sama Kaki";
		} else {
			if(sisiB == sisiC) {
				return segitiga = "Segitiga Sama Kaki";
			} else {
				if(pow(sisiC, 2) == pow(sisiA, 2) + pow(sisiB, 2) || 
				pow(sisiB, 2) == pow(sisiA, 2) + pow(sisiC, 2) ||
				pow(sisiA, 2) == pow(sisiC, 2) + pow(sisiB, 2)) {
					return segitiga = "Segitiga Siku-siku";
				} else {
					return segitiga = "Segitiga Sembarang";
				}	
			}
		}
	}
}
