#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Deklarasi variable
    int i, j, n;

	n = 1;
    // FOR pertama digunakan sebagai pembuat baris
    for(i = 1; i <= 5; i++, n++) {
        // FOR kedua digunakan untuk print angka serta membuat kolom
        for(j = 5; j >= i; j--) {
            cout << setw(3) << n;
        }
        cout << endl;
    }

    return 0;
}
