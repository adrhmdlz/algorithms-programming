#include<iostream>
#include<math.h>

using namespace std;

int main() {
	// Deklarasi variable
	double A, B, C, X, i, j, hasil;
	
	// Nilai dari tiap-tiap variable
	A = 3; B = 4; C = -5; X = 16; i = 3.2; j = 2.6;
	
	cout << "Tugas Pertemuan 5" << endl;
	
	// 1. Nilai absolut C
	C = fabs(C);
	cout << "\n1. Nilai absolut C adalah : " << C << endl;
	
	// 2. Pembulatan ke atas i dan j
	hasil = ceil(i);
	cout << "\n2. Pembulatan ke atas i adalah : " << hasil;
	hasil = ceil(j);
	cout << " dan pembulatan ke atas j adalah : " << hasil << endl;
	
	// 3. Pembulatan ke bawah i dan j
	hasil = floor(i);
	cout << "\n3. Pembulatan ke bawah i adalah : " << hasil;
	hasil = floor(j);
	cout << " dan pembulatan ke bawah j adalah : " << hasil << endl;
	
	// 4. Pembulatan i dan j
	hasil = round(i);
	cout << "\n4. Pembulatan dari variable i adalah : " << hasil;
	hasil = round(j);
	cout << " dan pembulatan dari variable j adalah : " << hasil << endl;
	
	// 5. Bilangan bulat dari i dan j
	hasil = trunc(i);
	cout << "\n5. Bilangan bulat dari variable i adalah : " << hasil;
	hasil = trunc(j);
	cout << " dan bilangan bulat dari variable j adalah : " << hasil << endl;
	
	// 6. Akar kuadrat variable X
	X = sqrt(X);
	cout << "\n6. Akar kuadrat dari variable X adalah : " << X << endl;
	
	// 7. A pangkat B
	hasil = pow(A, B);
	cout << "\n7. A pangkat B adalah : " << hasil << endl;
	
	// 8. Sisi miring segitiga siku-siku dengan a = A dan t = b
	hasil = hypot(A, B);
	cout << "\n8. Sisi miring dari segitiga siku-siku adalah : " << hasil << endl;
	
	return 0;
}
