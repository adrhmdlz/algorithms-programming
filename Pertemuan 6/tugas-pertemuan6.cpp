#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	// Deklarasi variable
	int bil1, bil2, bil3, bil4, hasil;
	
	// Memasukan nilai pada variable
	bil1 = 4; bil2 = 3; bil3 = 2; bil4 = 1;
	
	// Mencetak variable satu-persatu
	cout << "Bilangan pertama" << setw(3) << ": " << bil1 << endl;
	cout << "Bilangan kedua" << setw(5) << ": " << bil2 << endl;
	cout << "Bilangan ketiga" << setw(4) << ": " << bil3 << endl;
	cout << "Bilangan keempat" << setw(3) << ": " << bil4 << endl;
	
	// Menjumlahkan keempat bilangan
	hasil = bil1 + bil2 + bil3 + bil4;
	
	// Mencetak hasil penjumlahan
	cout << "Hasil penjumlahan 4 bilangan tersebut adalah : " << hasil;
	
	return 0;
}
