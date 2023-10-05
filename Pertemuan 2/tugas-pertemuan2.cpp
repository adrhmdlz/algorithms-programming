#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	// Deklarasi variable
	int usia, tanggal, bulan, tahun;
	string nim, nama, agama, nama_pacar;
	const string prodi = "Teknik Informatika";
	
	// Variable
	nim = "123456789"; // Jika dibuat dengan tipe data int tidak akan tampil sesuai data yang tertera
	usia = 18;
	nama = "Adrian Ahmad Al Zidan";
	agama = "Islam";
	tanggal = 29;
	bulan = 1;
	tahun = 2005;
	
	// Output
	cout << left << setw(20) << "NIM" << ":" << nim << endl;
	cout << left << setw(20) << "Nama" << ":" << nama << endl;
	cout << left << setw(20) << "Usia" << ":" << usia << endl;
	cout << left << setw(20) << "Agama" << ":" << agama << endl;
	cout << left << setw(20) << "Tanggal Lahir" << ":" << tanggal << "/" << bulan << "/" << tahun << endl;
	cout << left << setw(20) << "Program Studi" << ":" << prodi << endl;
	cout << left << setw(20) << "Siapa nama Pacarmu" << ":";
	cin >> nama_pacar;
	cout << left << setw(20) << "Nama Pacar" << ":" << nama_pacar <<  endl;
	
	return 0;
}
