#include <iostream>
using namespace std;

int main () {
	
	cout << "Nama : Bunga Koeriah Utami\n";
	cout << "Kelas : 1C Informatika\n";
	
	double luas,r;
	double phi = 3.14;
	
	cout << "Menghitung luas Lingkaran dengan menggunakan rumus phi x r x r" << endl;
	cout << "Masukan r: ";
	cin >> r;
	
	// rumus luas lingkaran 
	luas = phi * r * r;
	cout << "Luas Lingkaran = " << luas;
	
	return 0;
}
