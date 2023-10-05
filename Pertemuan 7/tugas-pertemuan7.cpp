#include<iostream>
#include<iomanip>

using namespace std;

main() {
	// Deklarasi variable
	int jumlah_barang;
	double harga_barang, total, diskon, harga_diskon;
	
	cout << "-------------- Total Pembayaran -------------" << endl;
	// Input harga_barang dan jumlah_barang yang dibeli
	cout << "Masukan harga barang yang dibeli" << setw(7) << ": Rp."; cin >> harga_barang;
	cout << "Masukan jumlah barang yang dibeli" << setw(3) << ": "; cin >> jumlah_barang;
	
	// Kondisi jika jumlah_barang yang dibeli > 100 maka :
	// Diskon 15% (0.15)
	// Jika jumlah_barang < 100 maka :
	// Diskon 5% (0.05)
	if(jumlah_barang > 100) {
		diskon = 0.15;
	} else {
		diskon = 0.05;
	}
	
	// Hitung jumlah potongan diskon (Rp)
	harga_diskon = (jumlah_barang * harga_barang) * diskon;
	// Hitung total belanja yang dikeluarkan setelah dikurangi dengan diskon
	total = (jumlah_barang * harga_barang) - harga_diskon;
	
	// Print total barang yang dibeli, 
	// diskon dan jumlah potongannya, 
	// serta total biaya akhir yang harus dibayar
	cout << "Total barang yang dibeli" << setw(12) << ": " << jumlah_barang << endl;
	cout << "Mendapatkan diskon sebesar " << diskon * 100 << "% atau potongan sebesar Rp." << harga_diskon << endl;
	cout << "Total yang harus dibayarkan" << setw(12) << ": Rp." << total;
}
