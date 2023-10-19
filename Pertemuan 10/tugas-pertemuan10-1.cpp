// Perulangan While

#include<iostream>

using namespace std;

main() {
	// Deklarasi variable 
	int i, n, a, b, c;
	
	a = 0; b = 1; i = 0;
	
	cout << "Jumlah bilangan yang ingin ditampilkan : "; cin >> n;
	cout << "Fibonacci : ";
	
	while(i < n) {
		cout << a << " ";
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	
	return 0;
}
