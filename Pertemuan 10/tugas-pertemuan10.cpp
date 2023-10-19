// Perulangan For

#include<iostream>

using namespace std;

main() {
	// Deklarasi variable
	int i, n, a, b, c;
	
	a = 0; b = 1;
	
	cout << "Jumlah bilangan yang ditampilkan : "; cin >> n;
	cout << "Fibonaci : ";
	
	for(i = 0; i < n; i++) {
		cout << a << " ";
		c = a + b;
		a = b; 
		b = c; 
	}
}


