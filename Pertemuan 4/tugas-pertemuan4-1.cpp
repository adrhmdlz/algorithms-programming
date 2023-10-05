#include<iostream>
#include<cmath>

using namespace std;

int main() {
	// Untuk variasi, variable a b c akan dibuat float dan x y akan dibuat double
	float a, b, c, hasil;
	double x, y;
	a = 3;
	b = 2;
	c = 4;
	x = 6;
	y = 3;
	
	// Output
	cout << "Hasil : " << endl;
	
	// Soal a. A^2 (Kuadrat) + B^2 (Kuadrat) + C^3 (Kuadrat)
	hasil = (a * a) + (b * b) + (c * c * c);
	cout << "a. A^2 + B^2 + C^3" << endl;
	cout << "   = " << a << "^2 + " << b << "^2 + " << c << "^3" << endl;
	cout << "   = " << hasil << "\n" << endl;
	
	// Soal b. A/2 + C^2 (Kuadrat)
	// Pada soal b mencoba mengganti variable a = x dan b = y
	a = x;
	c = y;
	hasil = (a / 2) + (c * c);
	cout << "b. A/2 + C^2" << endl;
	cout << "   = " << a << "/2 + " << c << "^2" << endl;
	cout << "   = " << hasil << "\n" << endl;
	
	// Soal c. v (Akar) X/Y + X^2 (Kuadrat)
	hasil = sqrt((x / y) + (x * x));
	cout << "c. v x/y + x^2" << endl;
	cout << "   = v (" << x << "/" << y << ") + (" << x << "^2)" << endl;
	cout << "   = " << hasil;
	
	return 0;
}
